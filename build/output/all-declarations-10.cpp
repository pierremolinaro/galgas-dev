#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-10.h"



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2687 ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode_2749 ;
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector_2687 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
        var_mFormalParameterPassingMode_2749 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 36)) ;
      } break ;
      case 2: {
        var_selector_2687 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
        var_mFormalParameterPassingMode_2749 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 3: {
        var_selector_2687 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
        var_mFormalParameterPassingMode_2749 = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      case 4: {
        var_selector_2687 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
        var_mFormalParameterPassingMode_2749 = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 46)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_3257 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      GALGAS_bool var_mIsUnused_3277 ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused_3277 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
        var_mIsUnused_3277 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_3417 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_2687, var_mFormalParameterPassingMode_2749, var_mFormalParameterTypeName_3257, var_mFormalParameterName_3417, var_mIsUnused_3277  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 57)) ;
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
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
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
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
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
      GALGAS_lstring var_selector_4340 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector_4340  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81)) ;
      } break ;
      case 2: {
        GALGAS_luint var_count_4472 ;
        var_count_4472 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
        GALGAS_uint var_n_4517 = var_count_4472.getter_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 86)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_4340.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (var_selector_4340.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 88)), GALGAS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 88)) ;
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_n_4517.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_count_4472.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 91)), GALGAS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 91)) ;
          }
        }
        if (kBoolFalse == test_3) {
          if (var_n_4517.isValid ()) {
            uint32_t variant_4729 = var_n_4517.uintValue () ;
            bool loop_4729 = true ;
            while (loop_4729) {
              loop_4729 = GALGAS_bool (kIsStrictSup, var_n_4517.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
              if (loop_4729) {
                loop_4729 = GALGAS_bool (kIsStrictSup, var_n_4517.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
              }
              if (loop_4729 && (0 == variant_4729)) {
                loop_4729 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 93)) ;
              }
              if (loop_4729) {
                variant_4729 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector_4340.getter_location (HERE), var_n_4517  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95)) ;
                var_n_4517.minusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 96)) ;
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
      GALGAS_lstring var_selector_4928 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      GALGAS_semanticExpressionAST var_e_4975 ;
      nt_expression_ (var_e_4975, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation_5017 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 103)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_4928, var_e_4975, var_endOfExpressionLocation_5017  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_5190 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      GALGAS_lstring var_outputInputActualParameterName_5234 ;
      var_outputInputActualParameterName_5234 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      GALGAS_lstringlist var_structAttributeList_5311 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 113)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          GALGAS_lstring var_structAttributeName_5403 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
          var_structAttributeList_5311.addAssign_operation (var_structAttributeName_5403  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 118)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector_5190, var_outputInputActualParameterName_5234, var_structAttributeList_5311  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_5648 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector_5648  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_5770 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      GALGAS_luint var_count_5801 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
      GALGAS_uint var_n_5819 = var_count_5801.getter_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 133)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_selector_5770.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_selector_5770.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 135)), GALGAS_string ("the selector should be '!\?'"), fixItArray7  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 135)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, var_n_5819.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_count_5801.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 138)), GALGAS_string ("the count value should be > 0"), fixItArray9  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 138)) ;
        }
      }
      if (kBoolFalse == test_8) {
        if (var_n_5819.isValid ()) {
          uint32_t variant_6019 = var_n_5819.uintValue () ;
          bool loop_6019 = true ;
          while (loop_6019) {
            loop_6019 = GALGAS_bool (kIsStrictSup, var_n_5819.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
            if (loop_6019) {
              loop_6019 = GALGAS_bool (kIsStrictSup, var_n_5819.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
            }
            if (loop_6019 && (0 == variant_6019)) {
              loop_6019 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 140)) ;
            }
            if (loop_6019) {
              variant_6019 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector_5770.getter_location (HERE), var_n_5819  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142)) ;
              var_n_5819.minusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 143)) ;
            }
          }
        }
      }
    } break ;
    case 7: {
      GALGAS_lstring var_selector_6237 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      GALGAS_lstring var_inputActualParameterName_6284 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector_6237, var_inputActualParameterName_6284  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149)) ;
    } break ;
    case 8: {
      GALGAS_lstring var_selector_6479 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      GALGAS_lstring var_declarationTypeName_6522 ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName_6522 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 158)) ;
      } break ;
      case 2: {
        var_declarationTypeName_6522 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_6671 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6479, var_declarationTypeName_6522, var_inputActualParameterName_6671  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector_6898 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      GALGAS_lstring var_declarationTypeName_6944 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      GALGAS_lstring var_inputActualParameterName_6991 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6898, var_declarationTypeName_6944, var_inputActualParameterName_6991  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector_7207 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      GALGAS_lstring var_declarationTypeName_7250 ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName_7250 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 181)) ;
      } break ;
      case 2: {
        var_declarationTypeName_7250 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused_7377 ;
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused_7377 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
        var_markedAsUnused_7377 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_7522 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector_7207, var_declarationTypeName_7250, var_inputActualParameterName_7522, var_markedAsUnused_7377  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
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
      GALGAS_bool var_isConstant_8481 ;
      GALGAS_lstring var_selector_8503 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant_8481 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
        var_isConstant_8481 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_8641 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      GALGAS_bool var_mIsUnused_8661 ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused_8661 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
        var_mIsUnused_8661 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_8801 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_8503, var_mFormalParameterTypeName_8641, var_mFormalParameterName_8801, var_mIsUnused_8661, var_isConstant_8481  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 229)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
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
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 42)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction_3493 ;
      nt_semantic_5F_instruction_ (var_instruction_3493, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_3493  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 45)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 42)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 42)) ;
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
  GALGAS_bool var_isLocal_3742 ;
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
    var_isLocal_3742 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 57)) ;
    var_isLocal_3742 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_ (var_isLocal_3742, ioArgument_ioDeclarations, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 57)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 72)) ;
  GALGAS_lstring var_mActionName_4603 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_4706 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_4706, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_4603, var_mFormalParameterList_4706  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 75))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 72)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 72)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  GALGAS_lstring var_mRoutineName_5784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 98)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_5887 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_5887, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_5980 ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList_5980, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 102)) ;
  GALGAS_location var_endOfInstructionList_6013 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 103)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsPrivate, var_mRoutineName_5784, var_mFormalParameterList_5887, var_mRoutineInstructionList_5980, var_endOfInstructionList_6013  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 104))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 98)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 98)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  GALGAS_bool var_isOnce_7125 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_7149 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_7215 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 133)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attribute_7215.getter_string (HERE).objectCompare (GALGAS_string ("once"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_isOnce_7125.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attribute_7215.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 136)), GALGAS_string ("duplicate attribute"), fixItArray3  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 136)) ;
            }
          }
          var_isOnce_7125 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attribute_7215.getter_string (HERE).objectCompare (GALGAS_string ("usefull"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_isUsefull_7149.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attribute_7215.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)), GALGAS_string ("duplicate attribute"), fixItArray6  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)) ;
              }
            }
            var_isUsefull_7149 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%once")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%usefull")) ;
          inCompiler->emitSemanticError (var_attribute_7215.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_7682 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_7801 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_7801, inCompiler) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_isOnce_7125.boolEnum () ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_7801.getter_length (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 150)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_functionName_7682.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 151)), GALGAS_string ("an 'once' function should has no argument"), fixItArray9  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 151)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 153)) ;
  GALGAS_lstring var_resultTypeName_7970 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 154)) ;
  GALGAS_lstring var_resultVariableName_8000 ;
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    var_resultVariableName_8000 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157)) ;
  } break ;
  case 2: {
    var_resultVariableName_8000 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 159))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 161)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_8199 ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList_8199, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 163)) ;
  GALGAS_location var_endOfFunctionInstructionList_8240 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 164)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_isOnce_7125.boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_7682, var_resultTypeName_7970, var_resultVariableName_8000, var_functionInstructionList_8199, var_endOfFunctionInstructionList_8240, constinArgument_inIsPrivate, var_isUsefull_7149  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 166))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 166)) ;
    }
  }
  if (kBoolFalse == test_10) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_7682, var_formalInputParameterList_7801, var_resultTypeName_7970, var_resultVariableName_8000, var_functionInstructionList_8199, var_endOfFunctionInstructionList_8240, constinArgument_inIsPrivate, var_isUsefull_7149  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 177))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 177)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 154)) ;
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 161)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 163)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 154)) ;
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 161)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 163)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 203)) ;
  GALGAS_lstring var_mActionName_9759 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 204)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_9878 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_9878, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 206)) ;
  GALGAS_lstring var_resultTypeName_9915 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 207)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName_9759, var_formalInputParameterList_9878, var_resultTypeName_9915  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 203)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 204)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 206)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 207)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 203)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 204)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 206)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 207)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 230)) ;
  GALGAS_lstring var_typeName_11079 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 231)) ;
  GALGAS_lstring var_variableName_11112 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 232)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 233)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_11178 ;
  nt_expression_ (var_sourceExpression_11178, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_11079.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 236)), GALGAS_bool (false), var_typeName_11079, var_variableName_11112, var_sourceExpression_11178  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 230)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 231)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 232)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 233)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 230)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 231)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 232)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 233)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_11569 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 247)) ;
  GALGAS_lstring var_variableName_11602 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 249)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_11668 ;
  nt_expression_ (var_sourceExpression_11668, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_11569.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 252)), GALGAS_bool (false), var_typeName_11569, var_variableName_11602, var_sourceExpression_11668  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 251)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 249)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 249)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_12933 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 276)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_12933.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_12933.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 278)), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 278)) ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_13174 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
    GALGAS_lstring var_actualParameterName_13216 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 285)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName_13174, var_actualParameterName_13216  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 286)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 288)) ;
    GALGAS_lstring var_actualParameterTypeName_13401 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 289)) ;
    GALGAS_lstring var_actualParameterName_13443 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 290)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName_13401, var_actualParameterName_13443  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 291)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_13621 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 293)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName_13621  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 294)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 276)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 285)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 288)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 289)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 290)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 293)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 276)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 285)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 288)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 289)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 290)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 293)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 347)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_15891 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 350)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 351)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_15891, GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 352))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 352)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_16012 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 355)) ;
      GALGAS_lstring var_actualParameterTypeName_16059 ;
      switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_16059 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 358)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_16059 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 360)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_16211 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 362)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_16012, GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName_16059, var_actualParameterName_16211  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 365))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 363)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_16383 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 368)) ;
      GALGAS_lstring var_actualParameterTypeName_16430 ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_16430 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 371)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_16430 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 373)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_16582 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 375)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_16383, GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName_16430, var_actualParameterName_16582  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 378))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 376)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_16754 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
      GALGAS_lstring var_actualParameterName_16796 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 381)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_16754, GALGAS_inputParameterVariable::constructor_new (var_actualParameterName_16796  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 382))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 382)) ;
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
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 350)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 351)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 355)) ;
      switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 360)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 362)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 368)) ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 373)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 381)) ;
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
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 350)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 351)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 355)) ;
      switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 360)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 362)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 368)) ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 373)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 381)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  GALGAS_lstringlist var_mStructAttributeList_989 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 25)) ;
      GALGAS_lstring var_attributeName_1075 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 26)) ;
      var_mStructAttributeList_989.addAssign_operation (var_attributeName_1075  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_1199 ;
  nt_expression_ (var_mSourceExpression_1199, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName_960.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 32)), var_mTargetVariableName_960, var_mStructAttributeList_989, var_mSourceExpression_1199  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_ (GALGAS_castInstructionBranchListAST & ioArgument_ioCastInstructionBranchList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  GALGAS_dynamicTypeComparisonKind var_kind_1437 ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
    var_kind_1437 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("instruction-cast.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
    var_kind_1437 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("instruction-cast.galgas", 38)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
    var_kind_1437 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("instruction-cast.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_1605 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  GALGAS_lstring var_mConstantVarName_1635 ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    var_mConstantVarName_1635 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
    var_mConstantVarName_1635 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  GALGAS_semanticInstructionListAST var_mCastBranchInstructionList_1892 ;
  nt_semantic_5F_instruction_5F_list_ (var_mCastBranchInstructionList_1892, inCompiler) ;
  ioArgument_ioCastInstructionBranchList.addAssign_operation (var_mTypeName_1605, var_mConstantVarName_1635, var_mCastBranchInstructionList_1892, var_kind_1437, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 57))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_ (outArgument_outElseOrDefault, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    GALGAS_location var_instructionLocation_2410 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
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
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 88)) ;
  GALGAS_location var_instructionLocation_3043 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 89)) ;
  GALGAS_semanticExpressionAST var_expression_3116 ;
  nt_expression_ (var_expression_3116, inCompiler) ;
  GALGAS_castInstructionBranchListAST var_mCastInstructionBranchList_3151 = GALGAS_castInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 91)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_ (var_mCastInstructionBranchList_3151, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_mElseOrDefault_3351 ;
  nt_cast_5F_else_5F_or_5F_default_ (var_mElseOrDefault_3351, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 97)) ;
  switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3423 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_3423.getter_string (HERE).objectCompare (GALGAS_string ("cast"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%cast")) ;
        inCompiler->emitSemanticError (var_terminator_3423.getter_location (SOURCE_FILE ("instruction-cast.galgas", 102)), GALGAS_string ("the terminator attribute should be '%cast'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-cast.galgas", 102)) ;
      }
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 88)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 97)) ;
  switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 88)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 97)) ;
  switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 52)) ;
  GALGAS_location var_instructionLocation_2155 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 53)) ;
  GALGAS_lstringlist var_mStructAttributeList_2210 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 57)) ;
      GALGAS_lstring var_attributeName_2284 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 58)) ;
      var_mStructAttributeList_2210.addAssign_operation (var_attributeName_2284  COMMA_SOURCE_FILE ("instruction-concat.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
    GALGAS_semanticExpressionAST var_expression_2417 ;
    nt_expression_ (var_expression_2417, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2155, var_mReceiverName_2127, var_mStructAttributeList_2210, var_expression_2417  COMMA_SOURCE_FILE ("instruction-concat.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 71)) ;
    switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 90)) ;
    GALGAS_semanticExpressionAST var_expression_3243 ;
    nt_expression_ (var_expression_3243, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2155, var_mReceiverName_2127, var_mStructAttributeList_2210, var_expression_3243  COMMA_SOURCE_FILE ("instruction-concat.galgas", 92)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 99)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 57)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 71)) ;
    switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 90)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 99)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 57)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 71)) ;
    switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 90)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 99)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 115)) ;
    GALGAS_semanticExpressionAST var_expression_4013 ;
    nt_expression_ (var_expression_4013, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_3955, var_expression_4013, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 117))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 117)) ;
    switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 115)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 115)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  GALGAS_location var_instructionLocation_866 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 20)) ;
  GALGAS_lstringlist var_dropList_909 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_962 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    var_dropList_909.addAssign_operation (var_variableName_962  COMMA_SOURCE_FILE ("instruction-drop.galgas", 24)) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 26)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 26)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 26)) ;
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
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    GALGAS_bool var_hasFixItRemove_1596 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_hasFixItRemove_1596.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 48))  COMMA_SOURCE_FILE ("instruction-error.galgas", 48)) ;
          var_hasFixItRemove_1596 = GALGAS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        GALGAS_location var_errorLocation_1896 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 53)) ;
        GALGAS_semanticExpressionAST var_expression_1973 ;
        nt_expression_ (var_expression_1973, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItReplace (var_expression_1973, var_errorLocation_1896  COMMA_SOURCE_FILE ("instruction-error.galgas", 55))  COMMA_SOURCE_FILE ("instruction-error.galgas", 55)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        GALGAS_location var_errorLocation_2116 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 58)) ;
        GALGAS_semanticExpressionAST var_expression_2193 ;
        nt_expression_ (var_expression_2193, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertAfter (var_expression_2193, var_errorLocation_2116  COMMA_SOURCE_FILE ("instruction-error.galgas", 60))  COMMA_SOURCE_FILE ("instruction-error.galgas", 60)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  GALGAS_location var_instructionLocation_2779 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 75)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_2861 ;
  nt_expression_ (var_mReceiverExpression_2861, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_2931 ;
  nt_expression_ (var_mErrorExpression_2931, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_2958 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_3059 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      var_mBuiltVariableList_2958.addAssign_operation (var_builtVariableName_3059  COMMA_SOURCE_FILE ("instruction-error.galgas", 85)) ;
      switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 77)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 77))  COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_luint var_count_3480 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 85)) ;
  GALGAS_uint var_n_3498 = var_count_3480.getter_uint (SOURCE_FILE ("instruction-for.galgas", 86)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_n_3498.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_3480.getter_location (SOURCE_FILE ("instruction-for.galgas", 88)), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 88)) ;
    }
  }
  if (var_n_3498.isValid ()) {
    uint32_t variant_3595 = var_n_3498.uintValue () ;
    bool loop_3595 = true ;
    while (loop_3595) {
      loop_3595 = GALGAS_bool (kIsStrictSup, var_n_3498.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_3595) {
        loop_3595 = GALGAS_bool (kIsStrictSup, var_n_3498.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_3595 && (0 == variant_3595)) {
        loop_3595 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 90)) ;
      }
      if (loop_3595) {
        variant_3595 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 91)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 91))  COMMA_SOURCE_FILE ("instruction-for.galgas", 91)) ;
        var_n_3498.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 92)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_typeName_3938 ;
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
    var_typeName_3938 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 102)) ;
  } break ;
  case 2: {
    var_typeName_3938 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_constantName_4062 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 106)) ;
  ioArgument_ioElementList.addAssign_operation (var_typeName_3938, var_constantName_4062  COMMA_SOURCE_FILE ("instruction-for.galgas", 107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_4369 = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 115)) ;
  GALGAS_bool var_endsWithEllipsis_4446 ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 118)) ;
    var_endsWithEllipsis_4446 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_ (var_elementList_4369, inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
      var_endsWithEllipsis_4446 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 128)) ;
      var_endsWithEllipsis_4446 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 133)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_4791 ;
  nt_expression_ (var_enumeratedExpression_4791, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList_4369, var_endsWithEllipsis_4446, var_enumeratedExpression_4791, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 139))  COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 118)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 128)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 133)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 118)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 128)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 133)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_5210 ;
  switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
    var_typeName_5210 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 148)) ;
  } break ;
  case 2: {
    var_typeName_5210 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_5341 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_5416 ;
  nt_expression_ (var_enumeratedExpression_5416, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName_5210, var_enumerationVariable_5341, var_enumeratedExpression_5416, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 159))  COMMA_SOURCE_FILE ("instruction-for.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 167)) ;
  GALGAS_lstring var_prefix_5845 ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    var_prefix_5845 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 170)) ;
  } break ;
  case 2: {
    var_prefix_5845 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 172)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 174)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_6001 ;
  nt_expression_ (var_enumeratedExpression_6001, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix_5845, var_enumeratedExpression_6001, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 179))  COMMA_SOURCE_FILE ("instruction-for.galgas", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 167)) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 172)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 174)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 167)) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 172)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 174)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 186)) ;
  GALGAS_location var_instructionLocation_6384 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 187)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_6431 = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 188)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_6507 ;
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 1: {
      var_ascending_6507 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 194)) ;
      var_ascending_6507 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_6699 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject_6699, inCompiler) ;
    var_mEnumeratedObjectList_6431.addAssign_operation (var_ascending_6507, var_enumeratedObject_6699  COMMA_SOURCE_FILE ("instruction-for.galgas", 198)) ;
    switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_6831 ;
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_mWhileExpression_6831 = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 204))  COMMA_SOURCE_FILE ("instruction-for.galgas", 204)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 206)) ;
    nt_expression_ (var_mWhileExpression_6831, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_7006 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 209)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_7078 ;
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_7078 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 212)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 214)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBeforeInstructionList_7078, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_7275 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 218)) ;
  GALGAS_lstring var_indexVariableName_7332 ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_indexVariableName_7332 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 221))  COMMA_SOURCE_FILE ("instruction-for.galgas", 221)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
    var_indexVariableName_7332 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 224)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_7529 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoInstructionList_7529, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_7606 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_7679 ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_7679 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 232)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBetweenInstructionList_7679, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_7880 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 237)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_7951 ;
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_7951 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 240)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 242)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mAfterInstructionList_7951, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_8144 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 245)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 246)) ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_8233 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_8233.getter_string (HERE).objectCompare (GALGAS_string ("for"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%for")) ;
        inCompiler->emitSemanticError (var_terminator_8233.getter_location (SOURCE_FILE ("instruction-for.galgas", 251)), GALGAS_string ("the terminator attribute should be '%for'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for.galgas", 251)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_foreach_5F_instruction_8422 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 254)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation_6384, var_mEnumeratedObjectList_6431, var_indexVariableName_7332, var_mWhileExpression_6831, var_endof_5F_while_5F_expression_7006, var_mBeforeInstructionList_7078, var_endof_5F_before_5F_branch_7275, var_mBetweenInstructionList_7679, var_endof_5F_between_5F_branch_7880, var_mDoInstructionList_7529, var_endof_5F_do_5F_branch_7606, var_mAfterInstructionList_7951, var_endof_5F_after_5F_branch_8144, var_endof_5F_foreach_5F_instruction_8422  COMMA_SOURCE_FILE ("instruction-for.galgas", 255)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 194)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 206)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 214)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 218)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 224)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 242)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 246)) ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 194)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 206)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 214)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 218)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 224)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 242)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 246)) ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  GALGAS_location var_instructionLocation_3462 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 78)) ;
  GALGAS_lstring var_grammarComponentName_3531 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  GALGAS_lstring var_labelName_3589 ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    var_labelName_3589 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 82))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 82)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    var_labelName_3589 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_ (var_instructionLocation_3462, var_grammarComponentName_3531, var_labelName_3589, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 98)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_4208 ;
  nt_expression_ (var_mSourceExpression_4208, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_4238 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 100)) ;
  GALGAS_actualParameterListAST var_actualParameterList_4332 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_4332, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_4498 ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_4498 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 105)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 107)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_4498, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_mSourceExpression_4208, var_endOfSourceExpression_4238, var_actualParameterList_4332, var_grammarInstructionSyntaxDirectedTranslationResult_4498  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 98)) ;
  nt_expression_parse (inCompiler) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 107)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 98)) ;
  nt_expression_indexing (inCompiler) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 107)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 129)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_5398 ;
  GALGAS_location var_endOfSourceExpression_5434 ;
  GALGAS_semanticExpressionAST var_nameExpression_5476 ;
  GALGAS_location var_endOfNameExpression_5510 ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_expression_ (var_sourceExpression_5398, inCompiler) ;
    var_endOfSourceExpression_5434 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 144)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
    nt_expression_ (var_nameExpression_5476, inCompiler) ;
    var_endOfNameExpression_5510 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 147)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_actualParameterListAST var_actualParameterList_6149 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_6149, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6315 ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6315 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 154)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 156)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_6315, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_5398, var_endOfSourceExpression_5434, var_nameExpression_5476, var_endOfNameExpression_5510, var_actualParameterList_6149, var_grammarInstructionSyntaxDirectedTranslationResult_6315  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 129)) ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 156)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 129)) ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 156)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 48)) ;
  GALGAS_lstringlist var_mStructAttributeList_1803 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 49)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 52)) ;
      GALGAS_lstring var_attributeName_1889 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 53)) ;
      var_mStructAttributeList_1803.addAssign_operation (var_attributeName_1889  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 54)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_1774.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 59)), var_mReceiverName_1774, var_mStructAttributeList_1803, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 62))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 58)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_1774.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 67)), var_mReceiverName_1774, var_mStructAttributeList_1803, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 70))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 66)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_1774.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 75)), var_mReceiverName_1774, var_mStructAttributeList_1803, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 78))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 74)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 81)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_1774.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 83)), var_mReceiverName_1774, var_mStructAttributeList_1803, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 86))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 52)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 53)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 52)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 53)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 94)) ;
  GALGAS_location var_instructionLocation_2940 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 95)) ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_2940, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 100))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 103)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_2940, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 106))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 104)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_2940, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 112))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 110)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_2940, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 118))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 94)) ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 103)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 94)) ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 103)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i31_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_1693 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 40)) ;
  GALGAS_ifExpressionList var_testExpression_1750 ;
  nt_if_5F_expression_ (var_testExpression_1750, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 42)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_1819 ;
  nt_semantic_5F_instruction_5F_list_ (var_then_5F_instructionList_1819, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_1853 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 44)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_1923 ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_1923 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 47)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
    nt_semantic_5F_instruction_5F_list_ (var_else_5F_instructionList_1923, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
    GALGAS_semanticInstructionAST var_instruction_2144 ;
    nt_if_5F_instruction_5F_core_ (var_instruction_2144, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 54)) ;
    temp_0.addAssign_operation (var_instruction_2144  COMMA_SOURCE_FILE ("instruction-if.galgas", 54)) ;
    var_else_5F_instructionList_1923 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_1693, var_testExpression_1750, var_then_5F_instructionList_1819, var_endOf_5F_then_5F_branchLocation_1853, var_else_5F_instructionList_1923, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 62))  COMMA_SOURCE_FILE ("instruction-if.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_if_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 42)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_if_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 42)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
  nt_if_5F_instruction_5F_core_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 71)) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2733 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 74)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_2733.getter_string (HERE).objectCompare (GALGAS_string ("if"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%if")) ;
        inCompiler->emitSemanticError (var_terminator_2733.getter_location (SOURCE_FILE ("instruction-if.galgas", 76)), GALGAS_string ("the terminator attribute should be '%if'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 76)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 71)) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 71)) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_i33_ (GALGAS_ifExpressionList & outArgument_outExpressionList,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_ifExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 87)) ;
      GALGAS_lstring var_constantName_3178 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 88)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
      GALGAS_semanticExpressionAST var_expression_3230 ;
      nt_expression_5F_or_ (var_expression_3230, inCompiler) ;
      GALGAS_location var_endOfReceiverExpression_3266 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 92)) ;
      GALGAS_lstring var_typeName_3335 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 93)) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_3178, var_expression_3230, var_endOfReceiverExpression_3266, var_typeName_3335  COMMA_SOURCE_FILE ("instruction-if.galgas", 94))  COMMA_SOURCE_FILE ("instruction-if.galgas", 94)) ;
    } break ;
    case 2: {
      GALGAS_semanticExpressionAST var_expression_3571 ;
      nt_expression_ (var_expression_3571, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_regularExp (var_expression_3571  COMMA_SOURCE_FILE ("instruction-if.galgas", 102))  COMMA_SOURCE_FILE ("instruction-if.galgas", 102)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 87)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 88)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
      nt_expression_5F_or_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 92)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 93)) ;
    } break ;
    case 2: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 87)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 88)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 92)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 93)) ;
    } break ;
    case 2: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  GALGAS_lstring var_typeName_1504 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  GALGAS_lstring var_constantName_1539 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (var_typeName_1504.getter_location (SOURCE_FILE ("instruction-let.galgas", 39)), var_typeName_1504, var_constantName_1539  COMMA_SOURCE_FILE ("instruction-let.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  GALGAS_lstring var_typeName_1907 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  GALGAS_lstring var_variableName_1942 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2012 ;
  nt_expression_ (var_sourceExpression_2012, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_1907.getter_location (SOURCE_FILE ("instruction-let.galgas", 54)), GALGAS_bool (true), var_typeName_1907, var_variableName_1942, var_sourceExpression_2012  COMMA_SOURCE_FILE ("instruction-let.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  GALGAS_lstring var_variableName_2450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2520 ;
  nt_expression_ (var_sourceExpression_2520, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName_2450.getter_location (SOURCE_FILE ("instruction-let.galgas", 69)), var_variableName_2450, var_sourceExpression_2520  COMMA_SOURCE_FILE ("instruction-let.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1065 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 27)) ;
  GALGAS_logListAST var_logList_1098 = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_1192 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
      var_logList_1098.addAssign_operation (var_loggedVariableName_1192, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName_1192  COMMA_SOURCE_FILE ("instruction-log.galgas", 32))  COMMA_SOURCE_FILE ("instruction-log.galgas", 32)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_logMessage_1322 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      GALGAS_semanticExpressionAST var_logExpression_1397 ;
      nt_expression_ (var_logExpression_1397, inCompiler) ;
      var_logList_1098.addAssign_operation (var_logMessage_1322, var_logExpression_1397  COMMA_SOURCE_FILE ("instruction-log.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation_1065, var_logList_1098  COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  GALGAS_location var_instructionLocation_1201 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  GALGAS_semanticExpressionAST var_mVariantExpression_1305 ;
  nt_expression_ (var_mVariantExpression_1305, inCompiler) ;
  GALGAS_location var_mEndOfVariantExpression_1337 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  GALGAS_semanticInstructionListAST var_mFirstInstructions_1453 ;
  nt_semantic_5F_instruction_5F_list_ (var_mFirstInstructions_1453, inCompiler) ;
  GALGAS_location var_mEndOfFirstInstructions_1492 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  GALGAS_semanticExpressionAST var_mLoopExpression_1582 ;
  nt_expression_ (var_mLoopExpression_1582, inCompiler) ;
  GALGAS_location var_mEndOfLoopExpression_1611 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  GALGAS_semanticInstructionListAST var_mSecondInstructions_1722 ;
  nt_semantic_5F_instruction_5F_list_ (var_mSecondInstructions_1722, inCompiler) ;
  GALGAS_location var_mEndOfSecondInstructions_1755 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1844 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_1844.getter_string (HERE).objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%loop")) ;
        inCompiler->emitSemanticError (var_terminator_1844.getter_location (SOURCE_FILE ("instruction-loop.galgas", 49)), GALGAS_string ("the terminator attribute should be '%loop'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop.galgas", 49)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_mEndOfLoopInstruction_2032 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 52)) ;
  outArgument_outInstruction = GALGAS_loopInstructionAST::constructor_new (var_instructionLocation_1201, var_mVariantExpression_1305, var_mEndOfVariantExpression_1337, var_mFirstInstructions_1453, var_mEndOfFirstInstructions_1492, var_mLoopExpression_1582, var_mEndOfLoopExpression_1611, var_mSecondInstructions_1722, var_mEndOfSecondInstructions_1755, var_mEndOfLoopInstruction_2032  COMMA_SOURCE_FILE ("instruction-loop.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i39_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_enumerationConstantName_1666 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (false), var_enumerationConstantName_1666, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 42))  COMMA_SOURCE_FILE ("instruction-match.galgas", 42))  COMMA_SOURCE_FILE ("instruction-match.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i40_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_className_1991 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  GALGAS_lstring var_localConstant_2018 ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
    var_localConstant_2018 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 51))  COMMA_SOURCE_FILE ("instruction-match.galgas", 51)) ;
  } break ;
  case 2: {
    var_localConstant_2018 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (true), var_className_1991, var_localConstant_2018  COMMA_SOURCE_FILE ("instruction-match.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i41_ (GALGAS_matchInstructionBranchListAST & ioArgument_ioMatchInstructionBranchList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  GALGAS_matchEntryListAST var_mMatchEntryList_2486 = GALGAS_matchEntryListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_ (var_mMatchEntryList_2486, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfMatchEntryList_2597 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  GALGAS_semanticInstructionListAST var_mMatchBranchInstructionList_2682 ;
  nt_semantic_5F_instruction_5F_list_ (var_mMatchBranchInstructionList_2682, inCompiler) ;
  ioArgument_ioMatchInstructionBranchList.addAssign_operation (var_mMatchEntryList_2486, var_endOfMatchEntryList_2597, var_mMatchBranchInstructionList_2682, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 79))  COMMA_SOURCE_FILE ("instruction-match.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_match COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  GALGAS_semanticExpressionListAST var_matchedExpressionNameList_3157 = GALGAS_semanticExpressionListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 86)) ;
  GALGAS_location var_instructionLocation_3190 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 87)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_3271 ;
  nt_expression_ (var_receiverExpression_3271, inCompiler) ;
  var_matchedExpressionNameList_3157.addAssign_operation (var_receiverExpression_3271, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 89))  COMMA_SOURCE_FILE ("instruction-match.galgas", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 91)) ;
    GALGAS_semanticExpressionAST var_expression_3419 ;
    nt_expression_ (var_expression_3419, inCompiler) ;
    var_matchedExpressionNameList_3157.addAssign_operation (var_expression_3419, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 93))  COMMA_SOURCE_FILE ("instruction-match.galgas", 93)) ;
    switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_matchInstructionBranchListAST var_matchInstructionBranchList_3562 = GALGAS_matchInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 96)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_ (var_matchInstructionBranchList_3562, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_elseInstructionList_3711 ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    var_elseInstructionList_3711 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 103)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-match.galgas", 105)) ;
    nt_semantic_5F_instruction_5F_list_ (var_elseInstructionList_3711, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-match.galgas", 108)) ;
  GALGAS_location var_endOf_5F_match_5F_instruction_3879 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 109)) ;
  switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3958 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-match.galgas", 112)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, var_terminator_3958.getter_string (HERE).objectCompare (GALGAS_string ("match"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("%match")) ;
        inCompiler->emitSemanticError (var_terminator_3958.getter_location (SOURCE_FILE ("instruction-match.galgas", 114)), GALGAS_string ("the terminator attribute should be '%match'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-match.galgas", 114)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_matchInstructionAST::constructor_new (var_instructionLocation_3190, var_matchedExpressionNameList_3157, var_matchInstructionBranchList_3562, var_elseInstructionList_3711, var_endOf_5F_match_5F_instruction_3879  COMMA_SOURCE_FILE ("instruction-match.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_match COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 91)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
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
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-match.galgas", 105)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-match.galgas", 108)) ;
  switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-match.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_match COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 91)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
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
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-match.galgas", 105)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-match.galgas", 108)) ;
  switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-match.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  GALGAS_location var_instructionLocation_880 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 19)) ;
  GALGAS_semanticExpressionAST var_expression_953 ;
  nt_expression_ (var_expression_953, inCompiler) ;
  outArgument_outInstruction = GALGAS_messageInstructionAST::constructor_new (var_instructionLocation_880, var_expression_953  COMMA_SOURCE_FILE ("instruction-message.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  GALGAS_location var_instructionLocation_959 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1041 ;
  nt_expression_ (var_mReceiverExpression_1041, inCompiler) ;
  GALGAS_lstring var_mMethodName_1075 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1152 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1152, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_959, var_mReceiverExpression_1041, var_mMethodName_1075, var_actualParameterList_1152  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName_908 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1014 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1014, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_mRoutineName_908.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 24)), var_mRoutineName_908, var_actualParameterList_1014  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  GALGAS_location var_instructionLocation_894 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_981 ;
  nt_expression_ (var_sourceExpression_981, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation_894, var_sourceExpression_981  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  GALGAS_location var_instructionLocation_1832 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1945 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_1945, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation_1832, var_expressionList_1945  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  GALGAS_location var_instructionLocation_2306 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  GALGAS_semanticExpressionAST var_expression_2388 ;
  nt_expression_ (var_expression_2388, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2306, var_expression_2388  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  GALGAS_location var_instructionLocation_2747 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  GALGAS_semanticExpressionAST var_expression_2829 ;
  nt_expression_ (var_expression_2829, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2747, var_expression_2829  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  GALGAS_location var_instructionLocation_3189 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  GALGAS_semanticExpressionAST var_expression_3271 ;
  nt_expression_ (var_expression_3271, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3189, var_expression_3271  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  GALGAS_location var_instructionLocation_3629 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  GALGAS_semanticExpressionAST var_expression_3711 ;
  nt_expression_ (var_expression_3711, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3629, var_expression_3711  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  GALGAS_location var_instructionLocation_1269 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 31)) ;
  GALGAS_lstring var_selector_1309 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_1309.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_1309.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 34)), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 34)) ;
    }
  }
  GALGAS_lstring var_mReceiverName_1452 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 36)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes_1486 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 37)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
      GALGAS_lstring var_structAttribute_1574 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
      var_mReceiverStructAttributes_1486.addAssign_operation (var_structAttribute_1574  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeNameForCasting_1666 ;
  switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
    var_typeNameForCasting_1666 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-setter-call.galgas", 46)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
    var_typeNameForCasting_1666 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSetterName_1811 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 51)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1888 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1888, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 53)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation_1269, var_mReceiverName_1452, var_mReceiverStructAttributes_1486, var_typeNameForCasting_1666, var_mSetterName_1811, var_actualParameterList_1888  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 51)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 51)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 68)) ;
  GALGAS_location var_instructionLocation_2347 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 69)) ;
  GALGAS_lstring var_selector_2387 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 70)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_2387.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_2387.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 72)), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 72)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 74)) ;
  GALGAS_lstring var_mSetterName_2539 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 75)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2616 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2616, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation_2347, var_mSetterName_2539, var_actualParameterList_2616  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 75)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 75)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  GALGAS_location var_instructionLocation_1555 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
  GALGAS_semanticExpressionAST var_switchExpression_1611 ;
  nt_expression_ (var_switchExpression_1611, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_1641 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
  GALGAS_switchBranchesAST var_switchBranches_1696 = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    GALGAS_lstringlist var_constantNameList_1788 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_1858 ;
    nt_switch_5F_case_ (var_constantNameList_1788, var_associatedValuesExtraction_1858, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    GALGAS_semanticInstructionListAST var_instructions_1920 ;
    nt_semantic_5F_instruction_5F_list_ (var_instructions_1920, inCompiler) ;
    var_switchBranches_1696.addAssign_operation (var_constantNameList_1788, var_associatedValuesExtraction_1858, var_instructions_1920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
    switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  GALGAS_location var_endOfSwitchInstruction_2079 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 54)) ;
  switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2158 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_2158.getter_string (HERE).objectCompare (GALGAS_string ("switch"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%switch")) ;
        inCompiler->emitSemanticError (var_terminator_2158.getter_location (SOURCE_FILE ("instruction-switch.galgas", 59)), GALGAS_string ("the terminator attribute should be '%switch'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-switch.galgas", 59)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_1555, var_switchExpression_1611, var_endOfSwitchExpression_1641, var_switchBranches_1696, var_endOfSwitchInstruction_2079  COMMA_SOURCE_FILE ("instruction-switch.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i55_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 77)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_2850 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_2850  COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 84)) ;
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
      case 1: {
        GALGAS_luint var_n_3042 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
        cEnumerator_range enumerator_3088 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_n_3042.getter_uint (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 92))), kENUMERATION_UP) ;
        while (enumerator_3088.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 93)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 93)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 93)) ;
          enumerator_3088.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 97)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 97)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 97)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_3329 ;
        switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
        case 1: {
          var_typeName_3329 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 101)) ;
        } break ;
        case 2: {
          var_typeName_3329 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 103)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_3478 ;
        switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3478 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
          var_constantMarkedAsUnused_3478 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_3678 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_3329, var_constantName_3678, var_constantMarkedAsUnused_3478  COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i55_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 101)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i55_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 101)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation_935 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 21)) ;
  GALGAS_lstring var_mTypeName_988 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1066 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1143 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1143, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation_935, var_mTypeName_988, var_mMethodName_1066, var_actualParameterList_1143  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  GALGAS_lstring var_variableName_934 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_1004 ;
  nt_expression_ (var_sourceExpression_1004, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName_934.getter_location (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 24)), var_variableName_934, var_sourceExpression_1004  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  GALGAS_location var_instructionLocation_966 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1048 ;
  nt_expression_ (var_mReceiverExpression_1048, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_1120 ;
  nt_expression_ (var_mWarningExpression_1120, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_1170 ;
  nt_issue_5F_fixit_ (var_fixitListAST_1170, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation_966, var_mReceiverExpression_1048, var_mWarningExpression_1120, var_fixitListAST_1170  COMMA_SOURCE_FILE ("instruction-warning.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 43)) ;
  GALGAS_location var_instructionLocation_1833 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  GALGAS_semanticExpressionAST var_keyExpression_1909 ;
  nt_expression_ (var_keyExpression_1909, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_1936 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 46)) ;
  GALGAS_lstring var_withPrefix_1977 ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
    var_withPrefix_1977 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 49))  COMMA_SOURCE_FILE ("instruction-with.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 51)) ;
    var_withPrefix_1977 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 54)) ;
  nt_with_5F_instruction_5F_core_ (var_instructionLocation_1833, var_keyExpression_1909, var_endOfKeyExpression_1936, var_withPrefix_1977, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 56)) ;
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2292 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 59)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_2292.getter_string (HERE).objectCompare (GALGAS_string ("with"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%with")) ;
        inCompiler->emitSemanticError (var_terminator_2292.getter_location (SOURCE_FILE ("instruction-with.galgas", 61)), GALGAS_string ("the terminator attribute should be '%with'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 61)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 43)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 51)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 54)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 56)) ;
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 43)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 51)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 54)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 56)) ;
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 59)) ;
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
  GALGAS_semanticExpressionAST var_receiverExpression_2881 ;
  nt_expression_ (var_receiverExpression_2881, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_2913 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 76)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_2977 ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_2977 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 81)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    var_searchMethodNameForErrorSignaling_2977 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 85)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_3238 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_3238, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_3266 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 87)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_3339 ;
  switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_3339 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 90)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 92)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_2977.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_2977.getter_location (SOURCE_FILE ("instruction-with.galgas", 94)), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 94)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_3339, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_2881, var_endOfReceiverExpression_2913, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_2977, var_mDoBranchInstructions_3238, var_endOfDoInstructions_3266, var_mElseBranchInstructions_3339, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 109))  COMMA_SOURCE_FILE ("instruction-with.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i60_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 81)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 85)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 92)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i60_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 81)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 85)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 92)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i61_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4400 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 122)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_4400.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_4400.getter_location (SOURCE_FILE ("instruction-with.galgas", 124)), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 124)) ;
    }
  }
  GALGAS_lstring var_mTargetObjectName_4547 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 126)) ;
  GALGAS_lstringlist var_structAttributeList_4575 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 127)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 130)) ;
      GALGAS_lstring var_mStructFieldName_4664 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 131)) ;
      var_structAttributeList_4575.addAssign_operation (var_mStructFieldName_4664  COMMA_SOURCE_FILE ("instruction-with.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfReceiverExpression_4751 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 134)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_4815 ;
  switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_4815 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 137)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 140)) ;
    var_searchMethodNameForErrorSignaling_4815 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_5076 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_5076, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_5106 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 145)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_5179 ;
  switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_5179 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 148)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_4815.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_4815.getter_location (SOURCE_FILE ("instruction-with.galgas", 152)), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray4  COMMA_SOURCE_FILE ("instruction-with.galgas", 152)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_5179, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_5515 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 156)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_mTargetObjectName_4547, var_structAttributeList_4575, var_endOfReceiverExpression_4751, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_4815, var_mDoBranchInstructions_5076, var_endOf_5F_do_5F_instructions_5106, var_mElseBranchInstructions_5179, var_endOf_5F_else_5F_instructions_5515  COMMA_SOURCE_FILE ("instruction-with.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i61_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 131)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 140)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i61_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 131)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 140)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
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
  GALGAS_bool var_isPublic_4288 ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    var_isPublic_4288 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 63)) ;
    var_isPublic_4288 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mAttributeTypeName_4407 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  GALGAS_lstring var_mAttributeName_4452 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  GALGAS_lstringlist var_featureList_4470 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName_4547 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
      var_featureList_4470.addAssign_operation (var_featureName_4547  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 72)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_mAttributeTypeName_4407, var_mAttributeName_4452, var_isPublic_4288, var_featureList_4470  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
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
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 95)) ;
  GALGAS_lstring var_mFilewrapperName_5617 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  GALGAS_lstring var_mFilewrapperPath_5700 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_5765 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_5765, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_5834 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_5834, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_5889 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_5889, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsInternal, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 105)), var_mFilewrapperName_5617, var_mFilewrapperPath_5700, var_filewrapperTextFileExtensionList_5765, var_filewrapperBinaryFileExtensionList_5834, var_filewrapperTemplateList_5889  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 102))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 95)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 95)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 118)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_6528 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 122)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_6528  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
      switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 125)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 118)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 122)) ;
      switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 125)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 128)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 118)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 122)) ;
      switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 125)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 134)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 135)) ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_6960 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 139)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_6960  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 140)) ;
      switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 142)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 135)) ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 139)) ;
      switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 142)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 145)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 135)) ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 139)) ;
      switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 142)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 151)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 155)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_7393 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_7438 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 157)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_7520 = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_7570 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 161)) ;
          GALGAS_lstring var_typeName_7608 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 162)) ;
          GALGAS_bool var_isUnused_7629 ;
          switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
            var_isUnused_7629 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 167)) ;
            var_isUnused_7629 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_7764 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 170)) ;
          var_filewrapperTemplateFormalInputParameters_7520.addAssign_operation (var_selector_7570, var_typeName_7608, var_argumentName_7764, var_isUnused_7629  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 171)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_7393, var_mFilewrapperTemplatePath_7438, var_filewrapperTemplateFormalInputParameters_7520  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 173)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 151)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 157)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 161)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 162)) ;
          switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 167)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 170)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 178)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 151)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 157)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 161)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 162)) ;
          switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 167)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 170)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 18)) ;
  GALGAS_lstring var_arrayTypeName_1041 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  GALGAS_lstring var_elementListTypeName_1125 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  GALGAS_luint var_dimension_1204 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName_1041, var_elementListTypeName_1125, var_dimension_1204  COMMA_SOURCE_FILE ("type-array.galgas", 26))  COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i7_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 17)) ;
  GALGAS_lstring var_boolsetTypeName_1004 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  GALGAS_lstringlist var_slotList_1064 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_slotName_1113 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 22)) ;
    var_slotList_1064.addAssign_operation (var_slotName_1113  COMMA_SOURCE_FILE ("type-boolset.galgas", 23)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool (false), var_boolsetTypeName_1004, var_slotList_1064  COMMA_SOURCE_FILE ("type-boolset.galgas", 28))  COMMA_SOURCE_FILE ("type-boolset.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 22)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 22)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isAbstract_1112 ;
  GALGAS_bool var_isShared_1131 ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    var_isShared_1131 = GALGAS_bool (false) ;
    var_isAbstract_1112 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-class.galgas", 28)) ;
    var_isShared_1131 = GALGAS_bool (true) ;
    var_isAbstract_1112 = GALGAS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 32)) ;
    var_isAbstract_1112 = GALGAS_bool (true) ;
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 1: {
      var_isShared_1131 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-class.galgas", 37)) ;
      var_isShared_1131 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
  GALGAS_lstringlist var_classNameList_1447 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_className_1513 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 44)) ;
    var_classNameList_1447.addAssign_operation (var_className_1513  COMMA_SOURCE_FILE ("type-class.galgas", 45)) ;
    switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_mSuperClassName_1629 ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
    var_mSuperClassName_1629 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
    var_mSuperClassName_1629 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList_1822 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 56)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_classFeatureName_1911 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
      var_classFeatureList_1822.addAssign_operation (var_classFeatureName_1911  COMMA_SOURCE_FILE ("type-class.galgas", 60)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
  GALGAS_string var_mClassMessage_1997 = GALGAS_string::makeEmptyString () ;
  GALGAS_propertyInCollectionListAST var_propertyList_2072 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 65)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2072, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 72)) ;
  cEnumerator_lstringlist enumerator_2207 (var_classNameList_1447, kENUMERATION_UP) ;
  while (enumerator_2207.hasCurrentObject ()) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_isAbstract_1112, var_isShared_1131, enumerator_2207.current_mValue (HERE), var_mSuperClassName_1629, var_classFeatureList_1822, var_propertyList_2072  COMMA_SOURCE_FILE ("type-class.galgas", 74))  COMMA_SOURCE_FILE ("type-class.galgas", 74)) ;
    enumerator_2207.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-class.galgas", 28)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 32)) ;
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-class.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 44)) ;
    switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-class.galgas", 28)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 32)) ;
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-class.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 44)) ;
    switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 25)) ;
  GALGAS_lstring var_mEnumTypeName_1247 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  GALGAS_enumConstantList var_mConstantList_1315 = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 30)) ;
    GALGAS_lstring var_constantName_1381 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_1425 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 32)) ;
    switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 35)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_1522 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 37)) ;
        GALGAS_lstring var_associatedValueName_1570 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 38)) ;
        var_associatedValueTypeList_1425.addAssign_operation (var_associatedValueType_1522, var_associatedValueName_1570  COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
        switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 42)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_1315.addAssign_operation (var_constantName_1381, var_associatedValueTypeList_1425  COMMA_SOURCE_FILE ("type-enum.galgas", 44)) ;
    switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_defaultConstantName_1810 ;
  switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
  case 1: {
    var_defaultConstantName_1810 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-enum.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 51)) ;
    var_defaultConstantName_1810 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName_1247, var_mConstantList_1315, var_defaultConstantName_1810  COMMA_SOURCE_FILE ("type-enum.galgas", 55))  COMMA_SOURCE_FILE ("type-enum.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 30)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
    switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 35)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 37)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 38)) ;
        switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 42)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 51)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 30)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
    switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 35)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 37)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 38)) ;
        switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 42)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 51)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  GALGAS_lstring var_externTypeName_2613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  GALGAS_string var_cppPredeclarationCode_2706 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_2706, inCompiler) ;
  GALGAS_string var_cppClassCode_2762 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_2762, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_2827 = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 69)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_2880 = GALGAS_externTypeGetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 70)) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_2932 = GALGAS_externTypeSetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 71)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_2984 = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName_2613, var_cppPredeclarationCode_2706, var_cppClassCode_2762, var_externTypeConstructorList_2827, var_externTypeGetterList_2880, var_externTypeSetterList_2932, var_externTypeMethodList_2984  COMMA_SOURCE_FILE ("type-extern.galgas", 84))  COMMA_SOURCE_FILE ("type-extern.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_3888 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_3888.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 104)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_4285 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_4285.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 117)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i13_ (GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  GALGAS_lstring var_constructorName_4645 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_4699 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4749 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      GALGAS_lstring var_argumentTypeName_4794 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      GALGAS_lstring var_argumentName_4840 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
      var_argumentTypeList_4699.addAssign_operation (var_selector_4749, var_argumentTypeName_4794, var_argumentName_4840  COMMA_SOURCE_FILE ("type-extern.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  GALGAS_lstring var_resultTypeName_4966 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_constructorName_4645, var_resultTypeName_4966, var_argumentTypeList_4699  COMMA_SOURCE_FILE ("type-extern.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i14_ (GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  GALGAS_lstring var_getterName_5310 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_5364 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_5414 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      GALGAS_lstring var_argumentTypeName_5459 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      GALGAS_lstring var_argumentName_5505 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
      var_argumentTypeList_5364.addAssign_operation (var_selector_5414, var_argumentTypeName_5459, var_argumentName_5505  COMMA_SOURCE_FILE ("type-extern.galgas", 151)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  GALGAS_lstring var_resultTypeName_5631 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_5310, var_resultTypeName_5631, var_argumentTypeList_5364  COMMA_SOURCE_FILE ("type-extern.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i15_ (GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  GALGAS_lstring var_setterName_5965 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6042 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_6042, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_5965, var_formalParameterList_6042  COMMA_SOURCE_FILE ("type-extern.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i16_ (GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  GALGAS_lstring var_methodName_6363 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6440 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_6440, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_6363, var_formalParameterList_6440, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 173))  COMMA_SOURCE_FILE ("type-extern.galgas", 173)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 26)) ;
  GALGAS_lstring var_graphTypeName_1276 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  GALGAS_lstring var_associatedListTypeName_1359 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_1407 = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 35)) ;
      GALGAS_lstring var_insertName_1517 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      GALGAS_lstring var_errorMessage_1592 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
      var_graphInsertModifierList_1407.addAssign_operation (var_insertName_1517, var_errorMessage_1592  COMMA_SOURCE_FILE ("type-graph.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName_1276, var_associatedListTypeName_1359, var_graphInsertModifierList_1407  COMMA_SOURCE_FILE ("type-graph.galgas", 43))  COMMA_SOURCE_FILE ("type-graph.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 17)) ;
  GALGAS_lstring var_listTypeName_1012 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1119 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_ (var_propertyList_1119, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 29)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_listTypeName_1012, var_propertyList_1119  COMMA_SOURCE_FILE ("type-list.galgas", 30))  COMMA_SOURCE_FILE ("type-list.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 18)) ;
  GALGAS_lstring var_mListmapTypeName_1019 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  GALGAS_lstring var_mAssociatedListTypeName_1105 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName_1019, var_mAssociatedListTypeName_1105  COMMA_SOURCE_FILE ("type-listmap.galgas", 23))  COMMA_SOURCE_FILE ("type-listmap.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 27)) ;
  GALGAS_lstring var_mDictTypeName_1444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  GALGAS_lstring var_keyTypeName_1559 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
  GALGAS_lstringlist var_mapAttributeList_1615 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1675 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 37)) ;
      var_mapAttributeList_1615.addAssign_operation (var_attribute_1675  COMMA_SOURCE_FILE ("type-dict.galgas", 38)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1771 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 42)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_1771, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 49)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool (false), var_mDictTypeName_1444, var_keyTypeName_1559, var_mapAttributeList_1615, var_propertyList_1771  COMMA_SOURCE_FILE ("type-dict.galgas", 50))  COMMA_SOURCE_FILE ("type-dict.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  GALGAS_lstring var_mMapTypeName_2569 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 63)) ;
  GALGAS_lstringlist var_mapAttributeList_2677 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_2737 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 68)) ;
      var_mapAttributeList_2677.addAssign_operation (var_attribute_2737  COMMA_SOURCE_FILE ("type-map.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 72)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2833 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 73)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_2892 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 74)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_2963 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 75)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_3014 = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 76)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_3092 = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2833, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_2892, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_2963, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_3014, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_3092, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 92)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_2569, var_mapAttributeList_2677, var_propertyList_2833, var_mInsertMethodList_2892, var_mSearchMethodList_2963, var_mRemoveMethodList_3014, var_insertOrReplaceDeclarationListAST_3092  COMMA_SOURCE_FILE ("type-map.galgas", 93))  COMMA_SOURCE_FILE ("type-map.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 72)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 72)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i22_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 108)) ;
  GALGAS_lstring var_methodName_4016 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 109)) ;
  GALGAS_bool var_locationAttribute_4044 ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
    var_locationAttribute_4044 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_attribute_4128 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 114)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_attribute_4128.getter_string (HERE).objectCompare (GALGAS_string ("location"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_locationAttribute_4044 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%location")) ;
      inCompiler->emitSemanticError (var_attribute_4128.getter_location (SOURCE_FILE ("type-map.galgas", 118)), GALGAS_string ("only the %location is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-map.galgas", 118)) ;
      var_locationAttribute_4044.drop () ; // Release error dropped variable
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  GALGAS_lstring var_errorMessage_4417 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_4016, var_errorMessage_4417, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 124))  COMMA_SOURCE_FILE ("type-map.galgas", 124)), var_locationAttribute_4044  COMMA_SOURCE_FILE ("type-map.galgas", 124)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 109)) ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 109)) ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i23_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  GALGAS_lstring var_mMethodName_4778 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  GALGAS_lstring var_mErrorMessage_4848 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 134)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_4778, var_mErrorMessage_4848  COMMA_SOURCE_FILE ("type-map.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 134)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 144))  COMMA_SOURCE_FILE ("type-map.galgas", 144)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 150)) ;
  GALGAS_lstring var_mMethodName_5508 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
  GALGAS_lstring var_stateName_5531 ;
  switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
    var_stateName_5531 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 154))  COMMA_SOURCE_FILE ("type-map.galgas", 154)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
    var_stateName_5531 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 160)) ;
  GALGAS_lstring var_mErrorMessage_5725 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 161)) ;
  GALGAS_lstring var_mShadowErrorMessage_5758 ;
  switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5758 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 164))  COMMA_SOURCE_FILE ("type-map.galgas", 164)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 166)) ;
    var_mShadowErrorMessage_5758 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 167)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_5508, var_mErrorMessage_5725, var_mShadowErrorMessage_5758, var_stateName_5531  COMMA_SOURCE_FILE ("type-map.galgas", 169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
  switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 161)) ;
  switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 166)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 167)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
  switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 161)) ;
  switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 166)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 167)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-shared-map.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-shared-map.galgas", 93)) ;
  GALGAS_lstring var_mMapTypeName_4884 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-shared-map.galgas", 95)) ;
  GALGAS_lstring var_mapProxyTypeName_4967 = GALGAS_lstring::constructor_new (var_mMapTypeName_4884.getter_string (HERE).add_operation (GALGAS_string ("-proxy"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 96)), var_mMapTypeName_4884.getter_location (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 96)) ;
  GALGAS_lstringlist var_mapAttributeList_5095 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 98)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_5155 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 101)) ;
      var_mapAttributeList_5095.addAssign_operation (var_attribute_5155  COMMA_SOURCE_FILE ("type-shared-map.galgas", 102)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 105)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_5276 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 106)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_5324 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 107)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_5375 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 108)) ;
  GALGAS_mapStateList var_mapStateList_5411 = GALGAS_mapStateList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 109)) ;
  GALGAS_mapOverrideBlockListAST var_mapOverrideBlockListAST_5469 = GALGAS_mapOverrideBlockListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 110)) ;
  GALGAS_sharedMapAttributeListAST var_sharedMapAttributeListAST_5531 = GALGAS_sharedMapAttributeListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 111)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_list_ (var_mapStateList_5411, inCompiler) ;
    } break ;
    case 3: {
      nt_shared_5F_map_5F_attribute_ (var_sharedMapAttributeListAST_5531, inCompiler) ;
    } break ;
    case 4: {
      nt_property_5F_declaration_ (var_propertyList_5276, inCompiler) ;
    } break ;
    case 5: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_5324, inCompiler) ;
    } break ;
    case 6: {
      nt_shared_5F_map_5F_search_5F_method_5F_declaration_ (var_mSearchMethodList_5375, inCompiler) ;
    } break ;
    case 7: {
      nt_shared_5F_map_5F_override_ (var_mapOverrideBlockListAST_5469, inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 128)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_4884, var_mapAttributeList_5095, var_propertyList_5276, var_mInsertMethodList_5324, var_mSearchMethodList_5375, var_mapStateList_5411, var_mapOverrideBlockListAST_5469, var_sharedMapAttributeListAST_5531  COMMA_SOURCE_FILE ("type-shared-map.galgas", 130))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 130)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapProxyDeclarationAST::constructor_new (GALGAS_bool (false), var_mapProxyTypeName_4967, var_mMapTypeName_4884  COMMA_SOURCE_FILE ("type-shared-map.galgas", 142))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 142)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-shared-map.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-shared-map.galgas", 93)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-shared-map.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 101)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 105)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_list_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_shared_5F_map_5F_attribute_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_map_5F_insert_5F_setter_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_shared_5F_map_5F_search_5F_method_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_shared_5F_map_5F_override_parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 128)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-shared-map.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-shared-map.galgas", 93)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-shared-map.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 101)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 105)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_list_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_shared_5F_map_5F_attribute_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_map_5F_insert_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_shared_5F_map_5F_search_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_shared_5F_map_5F_override_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i27_ (GALGAS_mapOverrideBlockListAST & ioArgument_ioMapOverrideBlockListAST,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("type-shared-map.galgas", 152)) ;
  GALGAS_lstring var_overrideBlockName_6748 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 153)) ;
  GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_31_AST_6814 = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 155)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_sourceState_31__6895 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 159)) ;
      GALGAS_lstring var_sourceState_32__6952 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 160)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 161)) ;
      GALGAS_lstring var_targetState_7009 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 162)) ;
      GALGAS_mapAutomatonMessageKind var_messageKind_7052 ;
      GALGAS_lstring var_messageText_7079 ;
      switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
      case 1: {
        var_messageKind_7052 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 166)) ;
        var_messageText_7079 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 167))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 167)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 169)) ;
        var_messageKind_7052 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 170)) ;
        var_messageText_7079 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 171)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 173)) ;
        var_messageKind_7052 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 174)) ;
        var_messageText_7079 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 175)) ;
      } break ;
      default:
        break ;
      }
      var_mapOverrideBlockDescriptor_31_AST_6814.addAssign_operation (var_sourceState_31__6895, var_sourceState_32__6952, var_targetState_7009, var_messageKind_7052, var_messageText_7079  COMMA_SOURCE_FILE ("type-shared-map.galgas", 177)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 179)) ;
  GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_32_AST_7618 = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 180)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 181)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_sourceState_31__7729 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 184)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 185)) ;
      GALGAS_lstring var_sourceState_32__7786 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 186)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 187)) ;
      GALGAS_lstring var_targetState_7843 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 188)) ;
      GALGAS_mapAutomatonMessageKind var_messageKind_7886 ;
      GALGAS_lstring var_messageText_7913 ;
      switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
      case 1: {
        var_messageKind_7886 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 192)) ;
        var_messageText_7913 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 193))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 193)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 195)) ;
        var_messageKind_7886 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 196)) ;
        var_messageText_7913 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 197)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 199)) ;
        var_messageKind_7886 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 200)) ;
        var_messageText_7913 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 201)) ;
      } break ;
      default:
        break ;
      }
      var_mapOverrideBlockDescriptor_32_AST_7618.addAssign_operation (var_sourceState_31__7729, var_sourceState_32__7786, var_targetState_7843, var_messageKind_7886, var_messageText_7913  COMMA_SOURCE_FILE ("type-shared-map.galgas", 203)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 205)) ;
  ioArgument_ioMapOverrideBlockListAST.addAssign_operation (var_overrideBlockName_6748, var_mapOverrideBlockDescriptor_31_AST_6814, var_mapOverrideBlockDescriptor_32_AST_7618  COMMA_SOURCE_FILE ("type-shared-map.galgas", 206)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("type-shared-map.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 155)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 160)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 161)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 162)) ;
      switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 169)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 171)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 173)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 175)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 179)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 181)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 184)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 185)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 186)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 187)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 188)) ;
      switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 195)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 197)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 199)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 201)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 205)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("type-shared-map.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 155)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 160)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 161)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 162)) ;
      switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 169)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 171)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 173)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 175)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 179)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 181)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 184)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 185)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 186)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 187)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 188)) ;
      switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 195)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 197)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 199)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 201)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 205)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i28_ (GALGAS_sharedMapAttributeListAST & ioArgument_ioSharedMapAttributeListAST,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isError_8763 ;
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 214)) ;
    var_isError_8763 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 217)) ;
    var_isError_8763 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_attributeName_8898 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 220)) ;
  GALGAS_lstring var_messageText_8930 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 221)) ;
  ioArgument_ioSharedMapAttributeListAST.addAssign_operation (var_attributeName_8898, var_isError_8763, var_messageText_8930  COMMA_SOURCE_FILE ("type-shared-map.galgas", 222)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 214)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 217)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 221)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 214)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 217)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 221)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i29_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-shared-map.galgas", 228)) ;
  GALGAS_lstring var_mMethodName_9284 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 229)) ;
  GALGAS_lstring var_actionName_9308 ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    var_actionName_9308 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 232))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 232)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("type-shared-map.galgas", 234)) ;
    var_actionName_9308 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 237)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-shared-map.galgas", 238)) ;
  GALGAS_lstring var_mErrorMessage_9501 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 239)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_mMethodName_9284, var_mErrorMessage_9501, var_actionName_9308, GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-shared-map.galgas", 228)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 229)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("type-shared-map.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 237)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-shared-map.galgas", 238)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 239)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-shared-map.galgas", 228)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 229)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("type-shared-map.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 237)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-shared-map.galgas", 238)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 239)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i30_ (GALGAS_mapStateList & ioArgument_ioMapStateList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-shared-map.galgas", 250)) ;
  GALGAS_lstring var_stateName_9850 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 251)) ;
  GALGAS_mapAutomatonMessageKind var_stateMessageKind_9896 ;
  GALGAS_lstring var_stateMessage_9922 ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    var_stateMessageKind_9896 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 255)) ;
    var_stateMessage_9922 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 256))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 256)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 258)) ;
    var_stateMessage_9922 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 259)) ;
    var_stateMessageKind_9896 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 260)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 262)) ;
    var_stateMessage_9922 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 263)) ;
    var_stateMessageKind_9896 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 264)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 266)) ;
  GALGAS_mapStateTransitionList var_transitionList_10272 = GALGAS_mapStateTransitionList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_transition_ (var_transitionList_10272, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioMapStateList.addAssign_operation (var_stateName_9850, var_stateMessageKind_9896, var_stateMessage_9922, var_transitionList_10272  COMMA_SOURCE_FILE ("type-shared-map.galgas", 272)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 277)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-shared-map.galgas", 250)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 251)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 258)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 259)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 262)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 266)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_transition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 277)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-shared-map.galgas", 250)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 251)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 258)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 259)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 262)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 266)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_transition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 277)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i31_ (GALGAS_mapStateTransitionList & ioArgument_ioTransitionList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_actionName_10723 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 284)) ;
  GALGAS_lstring var_targetStateName_10779 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 285)) ;
  GALGAS_mapAutomatonMessageKind var_transitionMessageKind_10830 ;
  GALGAS_lstring var_transitionMessage_10861 ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    var_transitionMessageKind_10830 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 289)) ;
    var_transitionMessage_10861 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 290))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 290)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) ;
    var_transitionMessage_10861 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 293)) ;
    var_transitionMessageKind_10830 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 294)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 296)) ;
    var_transitionMessage_10861 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 297)) ;
    var_transitionMessageKind_10830 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 298)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTransitionList.addAssign_operation (var_actionName_10723, var_targetStateName_10779, var_transitionMessageKind_10830, var_transitionMessage_10861  COMMA_SOURCE_FILE ("type-shared-map.galgas", 300)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 285)) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 293)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 296)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 297)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 285)) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 293)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 296)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 297)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i32_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  GALGAS_lstring var_sortedListTypeName_1426 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_1540 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_attributeList_1540, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 40)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_1712 = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 41)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_1712, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 47)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName_1426, var_attributeList_1540, var_sortDescriptorList_1712  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 48))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 40)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 47)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 40)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_2289 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 59)) ;
  GALGAS_bool var_mAscending_2310 ;
  switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 62)) ;
    var_mAscending_2310 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 65)) ;
    var_mAscending_2310 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_2289, var_mAscending_2310  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 59)) ;
  switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 59)) ;
  switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i34_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 18)) ;
  GALGAS_lstring var_structTypeName_1099 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1179 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_1179, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 28)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName_1099, var_propertyList_1179, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-struct.galgas", 29))  COMMA_SOURCE_FILE ("type-struct.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  GALGAS_lstring var_className_1270 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_mGetterName_1350 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1487 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1487, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  GALGAS_lstring var_mReturnedTypeName_1541 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_1588 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1588.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 31)), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1270, var_mGetterName_1350, var_mFormalInputParameterList_1487, var_mReturnedTypeName_1541  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  GALGAS_lstring var_className_1218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1308 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1428 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1428, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1218, var_mMethodName_1308, var_formalParameterList_1428  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i37_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  GALGAS_lstring var_className_1218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_setterName_1307 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1427 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1427, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1218, var_setterName_1307, var_formalParameterList_1427  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 24)) ;
  GALGAS_lstring var_className_1376 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  GALGAS_lstring var_mMethodName_1458 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1552 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1552, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  GALGAS_lstring var_mReturnedTypeName_1668 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  GALGAS_lstring var_resultVariableName_1700 ;
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
    var_resultVariableName_1700 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
    var_resultVariableName_1700 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 35))  COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1912 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1912, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1951 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1376, var_mMethodName_1458, var_mFormalInputParameterList_1552, var_mReturnedTypeName_1668, var_resultVariableName_1700, var_routineInstructionList_1912, var_endOfInstructionList_1951  COMMA_SOURCE_FILE ("extension-getter.galgas", 41))  COMMA_SOURCE_FILE ("extension-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i39_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 22)) ;
  GALGAS_lstring var_className_1274 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 23)) ;
  GALGAS_lstring var_mMethodName_1356 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1468 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1468, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1564 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1564, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1592 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1274, var_mMethodName_1356, var_formalParameterList_1468, var_routineInstructionList_1564, var_endOfMethodLocation_1592  COMMA_SOURCE_FILE ("extension-method.galgas", 30))  COMMA_SOURCE_FILE ("extension-method.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 22)) ;
  GALGAS_lstring var_className_1285 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  GALGAS_lstring var_setterName_1366 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1478 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1478, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 26)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1574 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1574, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1612 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1285, var_setterName_1366, var_formalParameterList_1478, var_routineInstructionList_1574, var_endOfSetterLocation_1612  COMMA_SOURCE_FILE ("extension-setter.galgas", 30))  COMMA_SOURCE_FILE ("extension-setter.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i41_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_className_1295 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  GALGAS_lstring var_mGetterName_1383 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1528 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1528, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  GALGAS_lstring var_mReturnedTypeName_1582 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_1622 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1622.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 31)), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 31)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1295, var_mGetterName_1383, var_mFormalInputParameterList_1528, var_mReturnedTypeName_1582  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_className_1247 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  GALGAS_lstring var_mMethodName_1345 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1473 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1473, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1247, var_mMethodName_1345, var_formalParameterList_1473  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i43_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_className_1247 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  GALGAS_lstring var_setterName_1344 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1472 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1472, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1247, var_setterName_1344, var_formalParameterList_1472  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i43_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i43_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  GALGAS_lstring var_className_1450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  GALGAS_lstring var_mMethodName_1539 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_1646 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_1646, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 29)) ;
  GALGAS_lstring var_mReturnedTypeName_1700 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  GALGAS_lstring var_resultVariableName_1732 ;
  switch (select_galgas_33_DeclarationsSyntax_54 (inCompiler)) {
  case 1: {
    var_resultVariableName_1732 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 33)) ;
  } break ;
  case 2: {
    var_resultVariableName_1732 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 35))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 37)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1944 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1944, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1983 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1450, var_mMethodName_1539, var_formalInputParameterList_1646, var_mReturnedTypeName_1700, var_resultVariableName_1732, var_routineInstructionList_1944, var_endOfInstructionList_1983  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i45_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  GALGAS_lstring var_className_1329 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  GALGAS_lstring var_mMethodName_1429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1549 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1549, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1645 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1645, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1683 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1329, var_mMethodName_1429, var_formalParameterList_1549, var_routineInstructionList_1645, var_endOfMethodLocation_1683  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 31))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i45_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i45_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i46_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  GALGAS_lstring var_className_1340 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  GALGAS_lstring var_setterName_1439 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1559 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1559, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1655 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1655, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1693 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1340, var_setterName_1439, var_formalParameterList_1559, var_routineInstructionList_1655, var_endOfSetterLocation_1693  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i46_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i46_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  GALGAS_lstring var_typeName_1143 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  GALGAS_lstring var_variableName_1178 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_1143.getter_location (SOURCE_FILE ("instruction-var-declaration.galgas", 23)), var_typeName_1143, var_variableName_1178, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1511 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  GALGAS_lstring var_variableName_1546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_1511.getter_location (SOURCE_FILE ("instruction-var-declaration.galgas", 31)), var_typeName_1511, var_variableName_1546, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isTemplate_1953 ;
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_isTemplate_1953 = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
    var_isTemplate_1953 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  GALGAS_lstring var_lexiqueComponentName_2123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  GALGAS_lstring var_indexingDirectory_2175 ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_indexingDirectory_2175 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    var_indexingDirectory_2175 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
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
  GALGAS_lexicalFunctionListAST var_lexicalFunctionListAST_2965 = GALGAS_lexicalFunctionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 54)) ;
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
    case 14: {
      nt_lexical_5F_function_5F_declaration_ (var_lexicalFunctionListAST_2965, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 83)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_lexiqueComponentAST::constructor_new (GALGAS_bool (false), var_lexiqueComponentName_2123, var_isTemplate_1953, var_templateDelimitorList_2380, var_templateReplacementList_2439, var_lexicalAttributeList_2492, var_lexicalStyleList_2537, var_terminalDeclarationList_2596, var_lexicalMessageDeclarationList_2667, var_lexicalListDeclarationList_2732, var_lexicalRuleList_2775, var_externRoutineList_2822, var_externFunctionList_2871, var_indexingListAST_2911, var_indexingDirectory_2175, var_lexicalFunctionListAST_2965  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 84))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
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
    case 14: {
      nt_lexical_5F_function_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
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
    case 14: {
      nt_lexical_5F_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GALGAS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 107)) ;
  GALGAS_lstring var_indexName_4541 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 109)) ;
  GALGAS_lstring var_indexComment_4619 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 110)) ;
  ioArgument_ioIndexingListAST.addAssign_operation (var_indexName_4541, var_indexComment_4619  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 107)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 110)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 107)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 110)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 117)) ;
  GALGAS_lstring var_startString_4933 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
  GALGAS_lstringlist var_optionList_4950 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 119)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_optionName_5027 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 122)) ;
      var_optionList_4950.addAssign_operation (var_optionName_5027  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 123)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 125)) ;
  GALGAS_lstring var_endString_5108 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 126)) ;
  ioArgument_ioTemplateDelimitorList.addAssign_operation (var_startString_4933, var_optionList_4950, var_endString_5108  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 127)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 117)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 122)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 126)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 117)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 122)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_ (GALGAS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 133)) ;
  GALGAS_lstring var_matchString_5431 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 134)) ;
  GALGAS_lstring var_replacementString_5460 ;
  GALGAS_lstring var_replacementFunction_5491 ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 138)) ;
    var_replacementString_5460 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 139)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 140)) ;
    var_replacementFunction_5491 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 141)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 143)) ;
    var_replacementString_5460 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 144)) ;
    var_replacementFunction_5491 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 145))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 145)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssign_operation (var_matchString_5431, var_replacementString_5460, var_replacementFunction_5491  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 134)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 138)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 139)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 140)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 141)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 143)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 144)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 134)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 138)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 139)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 140)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 141)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 143)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 144)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 154)) ;
  GALGAS_lstring var_messageName_6070 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 155)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 156)) ;
  GALGAS_lstring var_messageValue_6116 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 157)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssign_operation (var_messageName_6070, var_messageValue_6116  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 158)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 155)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 156)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 157)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 155)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 156)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 165)) ;
  GALGAS_lstring var_listName_6440 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 166)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssign_operation (GALGAS_lexicalImplicitRuleAST::constructor_new (var_listName_6440  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 167))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 167)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 166)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 173)) ;
  GALGAS_lexicalExpressionAST var_lexicalRuleExpression_6797 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_6797, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 175)) ;
  GALGAS_lexicalInstructionListAST var_instructionList_6848 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 176)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_instructionList_6848, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 181)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssign_operation (GALGAS_lexicalExplicitRuleAST::constructor_new (var_lexicalRuleExpression_6797, var_instructionList_6848  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 182))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 182)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 173)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 175)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 181)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 173)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 175)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 181)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_send COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 188)) ;
  GALGAS_lexicalInstructionAST var_instruction_7307 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_7307, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_instruction_7307  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 190)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_send COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 188)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_send COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 188)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_sentTerminal_7585 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 196)) ;
  outArgument_outInstruction = GALGAS_lexicalSimpleSendInstructionAST::constructor_new (var_sentTerminal_7585  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 197)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 196)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 196)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lexicalSendSearchListAST var_lexicalSendSearchList_7905 = GALGAS_lexicalSendSearchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 203)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 204)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_7975 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 207)) ;
    GALGAS_lstring var_searchListName_8030 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 208)) ;
    var_lexicalSendSearchList_7905.addAssign_operation (var_attributeName_7975, var_searchListName_8030  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 209)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 210)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 212)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_8187 ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_defaultSentTerminal_8249 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 216)) ;
    var_lexicalSendDefaultAction_8187 = GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (var_defaultSentTerminal_8249  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 217)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 219)) ;
    GALGAS_lstring var_defaultErrorMessageName_8412 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 220)) ;
    var_lexicalSendDefaultAction_8187 = GALGAS_lexicalErrorByDefaultAST::constructor_new (var_defaultErrorMessageName_8412  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 221)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_lexicalStructuredSendInstructionAST::constructor_new (var_lexicalSendSearchList_7905, var_lexicalSendDefaultAction_8187  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 223)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 204)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 207)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 208)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 210)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 212)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 216)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 219)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 220)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 204)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 207)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 208)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 210)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 212)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 216)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 219)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 220)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_repeat COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 232)) ;
  GALGAS_lexicalInstructionListAST var_repeatedInstructionList_8894 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 233)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_8894, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalWhileBranchListAST var_lexicalWhileBranchList_9026 = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 238)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_9026, inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 243)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRepeatInstructionAST::constructor_new (var_repeatedInstructionList_8894, var_lexicalWhileBranchList_9026  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 244))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 244)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_repeat COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 232)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 243)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_repeat COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 232)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 243)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_ (GALGAS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 253)) ;
  GALGAS_lexicalExpressionAST var_whileExpression_9517 ;
  nt_lexical_5F_expression_ (var_whileExpression_9517, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 255)) ;
  GALGAS_lexicalInstructionListAST var_whileInstructionList_9573 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 256)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_whileInstructionList_9573, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssign_operation (var_whileExpression_9517, var_whileInstructionList_9573  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 261)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 253)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 255)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 253)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 255)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_select COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 267)) ;
  GALGAS_lexicalSelectBranchListAST var_lexicalWhileBranchList_9984 = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 268)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 270)) ;
    GALGAS_lexicalExpressionAST var_selectExpression_10078 ;
    nt_lexical_5F_expression_ (var_selectExpression_10078, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 272)) ;
    GALGAS_lexicalInstructionListAST var_selectInstructionList_10139 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 273)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_ (var_selectInstructionList_10139, inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    var_lexicalWhileBranchList_9984.addAssign_operation (var_selectExpression_10078, var_selectInstructionList_10139  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 278)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 281)) ;
  GALGAS_lexicalInstructionListAST var_defaultInstructionList_10374 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 282)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_10374, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 287)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalSelectInstructionAST::constructor_new (var_lexicalWhileBranchList_9984, var_defaultInstructionList_10374  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 288))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 288)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_select COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 270)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 272)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 281)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 287)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_select COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 270)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 272)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 281)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 287)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_actionName_10821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 297)) ;
  GALGAS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_10883 = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 298)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 299)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_10933 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 302)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_selector_10933.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_selector_10933.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 304)), GALGAS_string ("the selector should be '!'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 304)) ;
        }
      }
      GALGAS_location var_passingModeLocation_11055 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_11169 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_11169, inCompiler) ;
      var_actualArgumentList_10883.addAssign_operation (GALGAS_lexicalFormalInputArgumentAST::constructor_new (var_passingModeLocation_11055, var_arg_11169  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 308))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 308)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_11290 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 310)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_selector_11290.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_selector_11290.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 312)), GALGAS_string ("the selector should be '!\?'"), fixItArray4  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 312)) ;
        }
      }
      GALGAS_location var_passingModeLocation_11413 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 314)) ;
      GALGAS_lstring var_attributeName_11475 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 315)) ;
      GALGAS_lexicalAttributeInputOutputArgumentAST var_arg_11487 = GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (var_passingModeLocation_11413, var_attributeName_11475  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 316)) ;
      var_actualArgumentList_10883.addAssign_operation (var_arg_11487  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 317)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_errorMessageList_11639 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 319)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 322)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName_11731 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 324)) ;
      var_errorMessageList_11639.addAssign_operation (var_errorMessageName_11731  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 325)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 327)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 330)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRoutineInstructionAST::constructor_new (var_actionName_10821, var_actualArgumentList_10883, var_errorMessageList_11639  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 331))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 331)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 297)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 299)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 302)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 310)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 315)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 322)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 324)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 327)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 330)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 297)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 299)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 302)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 310)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 315)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 322)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 324)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 327)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 330)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_12209 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 340)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCharacterInputArgumentAST::constructor_new (var_character_12209  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 341)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 340)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 340)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_luint var_unsignedValue_12560 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 347)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (var_unsignedValue_12560  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 348)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 347)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 347)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_location var_currentLocation_12899 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 354)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 355)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (var_currentLocation_12899  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 356)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 355)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 355)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lstring var_idf_13273 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GALGAS_lexicalAttributeInputArgumentAST::constructor_new (var_idf_13273  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 364)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 366)) ;
    GALGAS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_13440 = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 367)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
      case 2: {
        GALGAS_lstring var_selector_13490 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 370)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_13490.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (var_selector_13490.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 372)), GALGAS_string ("the selector should be '!'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 372)) ;
          }
        }
        GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_13689 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_13689, inCompiler) ;
        var_functionActualArgumentList_13440.addAssign_operation (var_arg_13689  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 375)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 377)) ;
    outArgument_outEffectiveArgument = GALGAS_lexicalFunctionInputArgumentAST::constructor_new (var_idf_13273, var_functionActualArgumentList_13440  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 378)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 366)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 370)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 377)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 366)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 370)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 377)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 385)) ;
  GALGAS_lstring var_errorMessageName_14099 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 386)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalErrorInstructionAST::constructor_new (var_errorMessageName_14099  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 387))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 387)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 385)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 386)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 385)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 386)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 393)) ;
  GALGAS_lstring var_warningMessageName_14427 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 394)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalWarningInstructionAST::constructor_new (var_warningMessageName_14427  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 395))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 395)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 393)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 394)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 393)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 394)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 401)) ;
  GALGAS_lstring var_terminalName_14752 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 402)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalDropInstructionAST::constructor_new (var_terminalName_14752  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 403))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 403)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 401)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 402)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 401)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 402)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_tag COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 417)) ;
  GALGAS_lstring var_tagName_15385 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 418)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalTagInstructionAST::constructor_new (var_tagName_15385  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 419))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 419)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_tag COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 417)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 418)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_tag COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 417)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 418)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rewind COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 425)) ;
  GALGAS_lstring var_tagName_15690 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 426)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_send COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 427)) ;
  GALGAS_lstring var_terminalName_15734 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 428)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRewindInstructionAST::constructor_new (var_tagName_15690, var_terminalName_15734  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 429))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 429)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rewind COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 425)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 426)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_send COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 427)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 428)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rewind COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 425)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 426)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_send COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 427)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 428)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 435)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalLogInstructionAST::constructor_new (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 436))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 436)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 435)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 435)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 451)) ;
      GALGAS_lexicalExpressionAST var_rightExpression_16586 ;
      nt_lexical_5F_factor_ (var_rightExpression_16586, inCompiler) ;
      outArgument_outExpression = GALGAS_lexicalOrExpressionAST::constructor_new (outArgument_outExpression, var_rightExpression_16586  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 453)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 451)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 451)) ;
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
  GALGAS_lstring var_string_16884 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 460)) ;
  outArgument_outExpression = GALGAS_lexicalStringMatchAST::constructor_new (var_string_16884  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 461)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 460)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 460)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 467)) ;
  GALGAS_lstring var_string_17156 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 468)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 469)) ;
  GALGAS_lstring var_errorMessage_17199 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 470)) ;
  outArgument_outExpression = GALGAS_lexicalStringNotMatchAST::constructor_new (var_string_17156, var_errorMessage_17199  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 467)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 468)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 469)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 470)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 467)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 468)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 469)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 470)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_17490 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 477)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_lexicalCharacterMatchAST::constructor_new (var_character_17490  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 479)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 481)) ;
    GALGAS_lchar var_upperBound_17612 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 482)) ;
    outArgument_outExpression = GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (var_character_17490, var_upperBound_17612  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 483)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 477)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 481)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 482)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 477)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 481)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 482)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_characterSet_17929 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 490)) ;
  outArgument_outExpression = GALGAS_lexicalCharacterSetMatchAST::constructor_new (var_characterSet_17929  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 491)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 490)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 490)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_ (GALGAS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  GALGAS_lstring var_name_18251 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 498)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_18300 = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 499)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_18344 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 502)) ;
      GALGAS_lstring var_sentAttribute_18380 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 503)) ;
      var_sentAttributeList_18300.addAssign_operation (var_selector_18344, var_sentAttribute_18380  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 504)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle_18456 ;
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_style COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 508)) ;
    var_theStyle_18456 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 509)) ;
  } break ;
  case 2: {
    var_theStyle_18456 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 511))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 511)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 513)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 514)) ;
  GALGAS_lstring var_errorMessage_18655 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 515)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 516)) ;
  GALGAS_lexicalListEntryListAST var_entryList_18677 = GALGAS_lexicalListEntryListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 517)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_18677, inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 521)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
  ioArgument_ioLexicalListDeclarationList.addAssign_operation (var_name_18251, var_theStyle_18456, var_errorMessage_18655, var_sentAttributeList_18300, var_entryList_18677  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 524)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 498)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 502)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 503)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_style COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 508)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 509)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 513)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 514)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 515)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 516)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 521)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 498)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 502)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 503)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_style COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 508)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 509)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 513)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 514)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 515)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 516)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 521)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_ (GALGAS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_entrySpelling_19118 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 530)) ;
  GALGAS_lstringlist var_optionList_19144 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 531)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_optionName_19206 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 534)) ;
    var_optionList_19144.addAssign_operation (var_optionName_19206  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 535)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_terminalSpelling_19270 ;
  switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 539)) ;
    var_terminalSpelling_19270 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 540)) ;
  } break ;
  case 2: {
    var_terminalSpelling_19270 = var_entrySpelling_19118 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssign_operation (var_entrySpelling_19118, var_terminalSpelling_19270, var_optionList_19144  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 544)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 530)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 534)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 539)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 540)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 530)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 534)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 539)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 540)) ;
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
  GALGAS_lstring var_typeName_19694 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 550)) ;
  GALGAS_lstring var_name_19728 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 551)) ;
  ioArgument_ioLexicalAttributeList.addAssign_operation (var_typeName_19694, var_name_19728  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 552)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 550)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 551)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 550)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 551)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_ (GALGAS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_name_20019 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 558)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_20072 = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 559)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_20144 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 562)) ;
      GALGAS_lstring var_sentAttribute_20180 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 563)) ;
      var_sentAttributeList_20072.addAssign_operation (var_selector_20144, var_sentAttribute_20180  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 564)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle_20256 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 566)) ;
  GALGAS_lstringlist var_optionList_20323 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 567)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_style COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 570)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, var_theStyle_20256.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 572)), GALGAS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 572)) ;
        }
      }
      var_theStyle_20256 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 574)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_optionName_20535 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 576)) ;
      var_optionList_20323.addAssign_operation (var_optionName_20535  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 579)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 580)) ;
  GALGAS_lstring var_errorMessage_20633 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 581)) ;
  ioArgument_ioTerminalDeclarationList.addAssign_operation (var_name_20019, var_sentAttributeList_20072, var_errorMessage_20633, var_theStyle_20256, var_optionList_20323  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 582)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 558)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 562)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 563)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_style COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 570)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 574)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 576)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 579)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 580)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 581)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 558)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 562)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 563)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_style COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 570)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 574)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 576)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 579)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 580)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 581)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_ (GALGAS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_style COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 588)) ;
  GALGAS_lstring var_styleIdentifier_20974 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 589)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_styleIdentifier_20974.getter_string (HERE).getter_containsCharacter (GALGAS_char (TO_UNICODE (95)) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 590)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_20974.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 591)), GALGAS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 591)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_styleIdentifier_20974.getter_string (HERE).getter_containsCharacterInRange (GALGAS_char (TO_UNICODE (48)), GALGAS_char (TO_UNICODE (57)) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 593)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_20974.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)), GALGAS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 596)) ;
  GALGAS_lstring var_comment_21388 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 597)) ;
  ioArgument_ioLexicalStyleList.addAssign_operation (var_styleIdentifier_20974, var_comment_21388  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 598)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_style COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 588)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 589)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 596)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 597)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_style COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 588)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 589)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 596)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 597)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_ (GALGAS_externRoutineListAST & ioArgument_ioExternRoutineList,
                                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 605)) ;
  GALGAS_lstring var_routineName_21704 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 606)) ;
  GALGAS_lexicalExternRoutineFormalArgumentListAST var_lexicalRoutineFormalArgumentList_21743 = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 607)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      GALGAS_lexicalArgumentModeAST var_lexicalArgumentMode_21855 ;
      switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_selector_21891 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_21891.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (var_selector_21891.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 614)), GALGAS_string ("the selector should be '\?!'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 614)) ;
          }
        }
        var_lexicalArgumentMode_21855 = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 616)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_selector_22099 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 618)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsNotEqual, var_selector_22099.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_selector_22099.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 620)), GALGAS_string ("the selector should be '\?'"), fixItArray4  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 620)) ;
          }
        }
        var_lexicalArgumentMode_21855 = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 622)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_lexicalTypeName_22319 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 624)) ;
      GALGAS_lstring var_formalArgumentName_22369 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 625)) ;
      var_lexicalRoutineFormalArgumentList_21743.addAssign_operation (var_lexicalArgumentMode_21855, var_lexicalTypeName_22319, var_formalArgumentName_22369  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 626)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_stringlist var_errorMessageList_22504 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 628)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 631)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName_22596 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 633)) ;
      var_errorMessageList_22504.addAssign_operation (var_errorMessageName_22596.getter_string (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 636)) ;
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
  ioArgument_ioExternRoutineList.addAssign_operation (var_routineName_21704, var_lexicalRoutineFormalArgumentList_21743, var_errorMessageList_22504  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 639)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 605)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 606)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 618)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 624)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 625)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 631)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 633)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 636)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 605)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 606)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 618)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 624)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 625)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 631)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 633)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 636)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 645)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 646)) ;
  GALGAS_lstring var_functionName_23043 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
  GALGAS_lexicalExternFunctionFormalArgumentListAST var_lexicalFunctionFormalArgumentList_23083 = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 648)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_23170 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 651)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_selector_23170.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_selector_23170.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 653)), GALGAS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 653)) ;
        }
      }
      GALGAS_lstring var_lexicalTypeName_23306 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 655)) ;
      GALGAS_lstring var_formalArgumentName_23356 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 656)) ;
      var_lexicalFunctionFormalArgumentList_23083.addAssign_operation (var_lexicalTypeName_23306, var_formalArgumentName_23356  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 657)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 659)) ;
  GALGAS_lstring var_returnedTypeName_23488 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 660)) ;
  ioArgument_ioExternFunctionList.addAssign_operation (var_functionName_23043, var_lexicalFunctionFormalArgumentList_23083, var_returnedTypeName_23488  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 661)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 645)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 646)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 651)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 655)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 656)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 659)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 660)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 645)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 646)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 651)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 655)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 656)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 659)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 660)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_ (GALGAS_lexicalFunctionListAST & ioArgument_ioLexicalFunctionListAST,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 65)) ;
  GALGAS_lstring var_functionName_4108 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 67)) ;
  GALGAS_lexicalFunctionExpressionAST var_expression_4196 ;
  nt_lexical_5F_function_5F_expression_ (var_expression_4196, inCompiler) ;
  ioArgument_ioLexicalFunctionListAST.addAssign_operation (var_functionName_4108, var_expression_4196  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 67)) ;
  nt_lexical_5F_function_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 67)) ;
  nt_lexical_5F_function_5F_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_ (GALGAS_lexicalFunctionExpressionAST & outArgument_outExpression,
                                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_function_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_function_5F_term_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_function_5F_term_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_ (GALGAS_lexicalFunctionExpressionAST & outArgument_outExpression,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_function_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 84)) ;
      GALGAS_lexicalFunctionExpressionAST var_rightExpression_4842 ;
      nt_lexical_5F_function_5F_factor_ (var_rightExpression_4842, inCompiler) ;
      outArgument_outExpression = GALGAS_lexicalFunctionOrExpressionAST::constructor_new (outArgument_outExpression, var_rightExpression_4842  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 86)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_function_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 84)) ;
      nt_lexical_5F_function_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_function_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 84)) ;
      nt_lexical_5F_function_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_ (GALGAS_lexicalFunctionExpressionAST & outArgument_outExpression,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_5177 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 93)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_34 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_lexicalFunctionCharacterMatchAST::constructor_new (var_character_5177  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 95)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 97)) ;
    GALGAS_lchar var_upperBound_5310 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 98)) ;
    outArgument_outExpression = GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_new (var_character_5177, var_upperBound_5310  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 99)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 93)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 97)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 98)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 93)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 97)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 98)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_ (GALGAS_lexicalFunctionExpressionAST & outArgument_outExpression,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_5653 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 106)) ;
  outArgument_outExpression = GALGAS_lexicalFunctionCallAST::constructor_new (var_functionName_5653  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 106)) ;
}

