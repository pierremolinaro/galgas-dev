#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"




//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode ;
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
        var_mFormalParameterPassingMode = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 36)) ;
      } break ;
      case 2: {
        var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
        var_mFormalParameterPassingMode = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 3: {
        var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
        var_mFormalParameterPassingMode = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      case 4: {
        var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
        var_mFormalParameterPassingMode = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 46)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      GALGAS_bool var_mIsUnused ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
        var_mIsUnused = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector, var_mFormalParameterPassingMode, var_mFormalParameterTypeName, var_mFormalParameterName, var_mIsUnused  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 57)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
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
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81)) ;
      } break ;
      case 2: {
        GALGAS_luint var_count ;
        var_count = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
        GALGAS_uint var_n = var_count.reader_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 86)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 88)) ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (var_count.reader_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the count value should be > 0")  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 91)) ;
        }else if (kBoolFalse == test_3) {
          if (var_n.isValid ()) {
            uint32_t variant_4815 = var_n.uintValue () ;
            bool loop_4815 = true ;
            while (loop_4815) {
              loop_4815 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
              if (loop_4815) {
                loop_4815 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
              }
              if (loop_4815 && (0 == variant_4815)) {
                loop_4815 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 93)) ;
              }
              if (loop_4815) {
                variant_4815 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector.mAttribute_location, var_n  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95)) ;
                var_n.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 96)) ;
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
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      GALGAS_semanticExpressionAST var_e ;
      nt_expression_ (var_e, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 103)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector, var_e, var_endOfExpressionLocation  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      GALGAS_lstring var_outputInputActualParameterName ;
      var_outputInputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      GALGAS_lstringlist var_structAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 113)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          GALGAS_lstring var_structAttributeName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
          var_structAttributeList.addAssign_operation (var_structAttributeName  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 118)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector, var_outputInputActualParameterName, var_structAttributeList  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      GALGAS_luint var_count = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
      GALGAS_uint var_n = var_count.reader_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 133)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the selector should be '!\?'")  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 135)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_location location_9 (var_count.reader_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_9, GALGAS_string ("the count value should be > 0")  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 138)) ;
      }else if (kBoolFalse == test_8) {
        if (var_n.isValid ()) {
          uint32_t variant_6130 = var_n.uintValue () ;
          bool loop_6130 = true ;
          while (loop_6130) {
            loop_6130 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
            if (loop_6130) {
              loop_6130 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
            }
            if (loop_6130 && (0 == variant_6130)) {
              loop_6130 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 140)) ;
            }
            if (loop_6130) {
              variant_6130 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector.mAttribute_location, var_n  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142)) ;
              var_n.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 143)) ;
            }
          }
        }
      }
    } break ;
    case 7: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      GALGAS_lstring var_inputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector, var_inputActualParameterName  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149)) ;
    } break ;
    case 8: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      GALGAS_lstring var_declarationTypeName ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 158)) ;
      } break ;
      case 2: {
        var_declarationTypeName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector, var_declarationTypeName, var_inputActualParameterName  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      GALGAS_lstring var_declarationTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      GALGAS_lstring var_inputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector, var_declarationTypeName, var_inputActualParameterName  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      GALGAS_lstring var_declarationTypeName ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 181)) ;
      } break ;
      case 2: {
        var_declarationTypeName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused ;
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
        var_markedAsUnused = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector, var_declarationTypeName, var_inputActualParameterName, var_markedAsUnused  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193)) ;
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
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
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
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
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
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
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
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
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
      GALGAS_bool var_isConstant ;
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
        var_isConstant = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      GALGAS_bool var_mIsUnused ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
        var_mIsUnused = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector, var_mFormalParameterTypeName, var_mFormalParameterName, var_mIsUnused, var_isConstant  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 229)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
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
      GALGAS_semanticInstructionAST var_instruction ;
      nt_semantic_5F_instruction_ (var_instruction, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 43)) ;
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
  GALGAS_bool var_isLocal ;
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
    var_isLocal = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_private) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 55)) ;
    var_isLocal = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_ (var_isLocal, ioArgument_ioDeclarations, inCompiler) ;
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
  GALGAS_lstring var_mActionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName, var_mFormalParameterList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 94)) ;
  GALGAS_lstring var_mRoutineName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 95)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 99)) ;
  GALGAS_location var_endOfInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_routineDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsPrivate, var_mRoutineName, var_mFormalParameterList, var_mRoutineInstructionList, var_endOfInstructionList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 101))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 101)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 94)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 95)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 94)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 95)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 124)) ;
  GALGAS_bool var_isOnce = GALGAS_bool (false) ;
  switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_onceQualifier = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_onceQualifier.mAttribute_string.objectCompare (GALGAS_string ("once"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (var_onceQualifier.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the only attribute allowed here is '%once'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 130)) ;
    }else if (kBoolFalse == test_0) {
      var_isOnce = GALGAS_bool (true) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_functionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 135)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList, inCompiler) ;
  const enumGalgasBool test_2 = var_isOnce.operator_and (GALGAS_bool (kIsStrictSup, var_formalInputParameterList.reader_length (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 137)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (var_functionName.reader_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("an 'once' function should has no argument")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 138)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 140)) ;
  GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)) ;
  GALGAS_lstring var_resultVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 143)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)) ;
  GALGAS_location var_endOfFunctionInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 146)) ;
  const enumGalgasBool test_4 = var_isOnce.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName, var_resultTypeName, var_resultVariableName, var_functionInstructionList, var_endOfFunctionInstructionList, constinArgument_inIsPrivate  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)) ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName, var_formalInputParameterList, var_resultTypeName, var_resultVariableName, var_functionInstructionList, var_endOfFunctionInstructionList, constinArgument_inIsPrivate  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 124)) ;
  switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 135)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 140)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 143)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 124)) ;
  switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 135)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 140)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 143)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 181)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 182)) ;
  GALGAS_lstring var_mActionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 183)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 186)) ;
  GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 187)) ;
  GALGAS_lstring var_resultVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 188)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName, var_formalInputParameterList, var_resultTypeName, var_resultVariableName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 189))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 189)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 181)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 182)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 183)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 186)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 187)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 188)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 181)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 182)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 183)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 186)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 187)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 188)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 209)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 210)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 211)), var_typeName, var_variableName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 211)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 209)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 210)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 209)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 210)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 217)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 218)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 219)), var_typeName, var_variableName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 219)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 217)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 218)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 217)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 218)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 225)) ;
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 226)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 227)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 228)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 231)), GALGAS_bool (false), var_typeName, var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 225)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 226)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 227)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 228)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 225)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 226)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 227)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 228)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 242)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 243)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 244)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 247)), var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 246)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 242)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 243)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 244)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 242)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 243)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 244)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 256)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 257)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 258)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 261)), GALGAS_bool (false), var_typeName, var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 256)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 257)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 258)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 256)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 257)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 258)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 283)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 287)), GALGAS_bool (true), var_typeName, var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 286)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 283)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 283)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 303)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 304)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 305)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 308)), var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 307)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 303)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 304)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 305)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 303)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 304)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 305)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 325)) ;
  GALGAS_lstringlist var_mStructAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 326)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 329)) ;
      GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 330)) ;
      var_mStructAttributeList.addAssign_operation (var_attributeName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 331)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 333)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression ;
  nt_expression_ (var_mSourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 336)), var_mTargetVariableName, var_mStructAttributeList, var_mSourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 335)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 325)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 329)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 330)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 333)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 325)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 329)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 330)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 333)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 355)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 356)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression ;
  nt_expression_ (var_mSourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation, var_mSourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 358)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 356)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 356)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i15_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_outResult,
                                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outResult.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 382)) ;
  }
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 385)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 386))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 386)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 388)) ;
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 389)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName, var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 390)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 392)) ;
    GALGAS_lstring var_actualParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 393)) ;
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 394)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName, var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 395)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 397)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 398)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 385)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 388)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 389)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 392)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 393)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 394)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 397)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 385)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 388)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 389)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 392)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 393)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 394)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 397)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_i16_ (GALGAS_lstring & outArgument_outSelector,
                                                                                                                GALGAS_abstractInputParameter & outArgument_outActualInputParameter,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outSelector.drop () ; // Release 'out' argument
  outArgument_outActualInputParameter.drop () ; // Release 'out' argument
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    outArgument_outSelector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 416)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 417)) ;
    outArgument_outActualInputParameter = GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 418)) ;
  } break ;
  case 2: {
    outArgument_outSelector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 420)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 421)) ;
    GALGAS_lstring var_actualParameterTypeName ;
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 1: {
      var_actualParameterTypeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 424)) ;
    } break ;
    case 2: {
      var_actualParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 426)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 428)) ;
    outArgument_outActualInputParameter = GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName, var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 429)) ;
  } break ;
  case 3: {
    outArgument_outSelector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 431)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 432)) ;
    GALGAS_lstring var_actualParameterTypeName ;
    switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
    case 1: {
      var_actualParameterTypeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 435)) ;
    } break ;
    case 2: {
      var_actualParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 437)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 439)) ;
    outArgument_outActualInputParameter = GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName, var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 440)) ;
  } break ;
  case 4: {
    outArgument_outSelector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 442)) ;
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 443)) ;
    outArgument_outActualInputParameter = GALGAS_inputParameterVariable::constructor_new (var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 444)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 416)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 417)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 420)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 421)) ;
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 426)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 428)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 431)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 432)) ;
    switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 437)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 439)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 442)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 443)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 416)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 417)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 420)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 421)) ;
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 426)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 428)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 431)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 432)) ;
    switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 437)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 439)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 442)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 443)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i17_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 452)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_actualSelector ;
      GALGAS_abstractInputParameter var_actualInputParameter ;
      nt_actual_5F_input_5F_parameter_ (var_actualSelector, var_actualInputParameter, inCompiler) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_actualSelector, var_actualInputParameter  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 456)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      nt_actual_5F_input_5F_parameter_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      nt_actual_5F_input_5F_parameter_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i18_ (GALGAS_castInstructionBranchListAST & ioArgument_ioCastInstructionBranchList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  GALGAS_dynamicTypeComparisonKind var_kind ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
    var_kind = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 36)) ;
    var_kind = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("instruction-cast.galgas", 36)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 38)) ;
    var_kind = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("instruction-cast.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  GALGAS_lstring var_mConstantVarName ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    var_mConstantVarName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  } break ;
  case 2: {
    var_mConstantVarName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 45))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 47)) ;
  GALGAS_semanticInstructionListAST var_mCastBranchInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_mCastBranchInstructionList, inCompiler) ;
  ioArgument_ioCastInstructionBranchList.addAssign_operation (var_mTypeName, var_mConstantVarName, var_mCastBranchInstructionList, var_kind, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 54))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 36)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 47)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 36)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 47)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i19_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgas_33_Scanner * /* inCompiler */) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i19_indexing (C_Lexique_galgas_33_Scanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i20_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
  nt_semantic_5F_instruction_5F_list_ (outArgument_outElseOrDefault, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i21_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("instruction-cast.galgas", 73)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-cast.galgas", 75)) ;
  GALGAS_semanticExpressionAST var_errorLocationExpression ;
  nt_expression_ (var_errorLocationExpression, inCompiler) ;
  outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 77)) ;
  outArgument_outElseOrDefault.addAssign_operation (GALGAS_errorInstructionAST::constructor_new (var_instructionLocation, var_errorLocationExpression, GALGAS_literalStringExpressionAST::constructor_new (var_instructionLocation, GALGAS_stringlist::constructor_listWithValue (GALGAS_string ("cast instruction run-time error")  COMMA_SOURCE_FILE ("instruction-cast.galgas", 83))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 81)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 84))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 78))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("instruction-cast.galgas", 73)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-cast.galgas", 75)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("instruction-cast.galgas", 73)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-cast.galgas", 75)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i22_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_cast) COMMA_SOURCE_FILE ("instruction-cast.galgas", 91)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 92)) ;
  GALGAS_semanticExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  GALGAS_castInstructionBranchListAST var_mCastInstructionBranchList = GALGAS_castInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 94)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_ (var_mCastInstructionBranchList, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_mElseOrDefault ;
  nt_cast_5F_else_5F_or_5F_default_ (var_mElseOrDefault, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-cast.galgas", 103)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("cast"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the terminator attribute should be '%cast'")  COMMA_SOURCE_FILE ("instruction-cast.galgas", 105)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfInstructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 108)) ;
  outArgument_outInstruction = GALGAS_structuredCastInstructionAST::constructor_new (var_instructionLocation, var_expression, var_mCastInstructionBranchList, var_mElseOrDefault, var_endOfInstructionLocation  COMMA_SOURCE_FILE ("instruction-cast.galgas", 109)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_cast) COMMA_SOURCE_FILE ("instruction-cast.galgas", 91)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-cast.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_cast) COMMA_SOURCE_FILE ("instruction-cast.galgas", 91)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-cast.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i23_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName ;
  var_mReceiverName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 30)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 31)) ;
  GALGAS_lstringlist var_mStructAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 35)) ;
      GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 36)) ;
      var_mStructAttributeList.addAssign_operation (var_attributeName  COMMA_SOURCE_FILE ("instruction-concat.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 39)) ;
  switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
  case 1: {
    GALGAS_actualOutputExpressionList var_expressionList ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
    outArgument_outInstruction = GALGAS_plusEqualElementsInstructionAST::constructor_new (var_instructionLocation, var_mReceiverName, var_mStructAttributeList, var_expressionList  COMMA_SOURCE_FILE ("instruction-concat.galgas", 42)) ;
  } break ;
  case 2: {
    GALGAS_semanticExpressionAST var_expression ;
    nt_expression_ (var_expression, inCompiler) ;
    outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation, var_mReceiverName, var_mStructAttributeList, var_expression  COMMA_SOURCE_FILE ("instruction-concat.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 35)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 36)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 39)) ;
  switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
  case 1: {
    nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 35)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 36)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 39)) ;
  switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
  case 1: {
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i24_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
    GALGAS_semanticExpressionAST var_expression ;
    nt_expression_ (var_expression, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector, var_expression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 65))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 65)) ;
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 20)) ;
  GALGAS_lstringlist var_dropList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    var_dropList.addAssign_operation (var_variableName  COMMA_SOURCE_FILE ("instruction-drop.galgas", 24)) ;
    switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-drop.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation, var_dropList  COMMA_SOURCE_FILE ("instruction-drop.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-error.galgas", 20)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression ;
  nt_expression_ (var_mReceiverExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 23)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression ;
  nt_expression_ (var_mErrorExpression, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 25)) ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 28)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-error.galgas", 30)) ;
      var_mBuiltVariableList.addAssign_operation (var_builtVariableName  COMMA_SOURCE_FILE ("instruction-error.galgas", 31)) ;
      switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-error.galgas", 33)) ;
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
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation, var_mReceiverExpression, var_mErrorExpression, var_mBuiltVariableList  COMMA_SOURCE_FILE ("instruction-error.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-error.galgas", 20)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 28)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-error.galgas", 30)) ;
      switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-error.galgas", 33)) ;
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
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-error.galgas", 20)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 23)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 28)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-error.galgas", 30)) ;
      switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-error.galgas", 33)) ;
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
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i27_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-for.galgas", 77)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-for.galgas", 77))  COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i28_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_luint var_count = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 85)) ;
  GALGAS_uint var_n = var_count.reader_uint (SOURCE_FILE ("instruction-for.galgas", 86)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_count.reader_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this value should be > 0")  COMMA_SOURCE_FILE ("instruction-for.galgas", 88)) ;
  }
  if (var_n.isValid ()) {
    uint32_t variant_3633 = var_n.uintValue () ;
    bool loop_3633 = true ;
    while (loop_3633) {
      loop_3633 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_3633) {
        loop_3633 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_3633 && (0 == variant_3633)) {
        loop_3633 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 90)) ;
      }
      if (loop_3633) {
        variant_3633 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-for.galgas", 91)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-for.galgas", 91))  COMMA_SOURCE_FILE ("instruction-for.galgas", 91)) ;
        var_n.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 92)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i29_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_typeName ;
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
    var_typeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-for.galgas", 102)) ;
  } break ;
  case 2: {
    var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 106)) ;
  ioArgument_ioElementList.addAssign_operation (var_typeName, var_constantName  COMMA_SOURCE_FILE ("instruction-for.galgas", 107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 115)) ;
  GALGAS_bool var_endsWithEllipsis ;
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 118)) ;
    var_endsWithEllipsis = GALGAS_bool (true) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_ (var_elementList, inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
    case 1: {
      var_endsWithEllipsis = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 128)) ;
      var_endsWithEllipsis = GALGAS_bool (true) ;
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
  GALGAS_semanticExpressionAST var_enumeratedExpression ;
  nt_expression_ (var_enumeratedExpression, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList, var_endsWithEllipsis, var_enumeratedExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 139))  COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 118)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 118)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName ;
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
    var_typeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-for.galgas", 148)) ;
  } break ;
  case 2: {
    var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression ;
  nt_expression_ (var_enumeratedExpression, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName, var_enumerationVariable, var_enumeratedExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 159))  COMMA_SOURCE_FILE ("instruction-for.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i32_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 167)) ;
  GALGAS_lstring var_prefix ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    var_prefix = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-for.galgas", 170)) ;
  } break ;
  case 2: {
    var_prefix = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 172)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 174)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression ;
  nt_expression_ (var_enumeratedExpression, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix, var_enumeratedExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 179))  COMMA_SOURCE_FILE ("instruction-for.galgas", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 167)) ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 167)) ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_for) COMMA_SOURCE_FILE ("instruction-for.galgas", 186)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 187)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 188)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending ;
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
      var_ascending = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 194)) ;
      var_ascending = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject, inCompiler) ;
    var_mEnumeratedObjectList.addAssign_operation (var_ascending, var_enumeratedObject  COMMA_SOURCE_FILE ("instruction-for.galgas", 198)) ;
    switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-for.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression ;
  switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
    var_mWhileExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 204))  COMMA_SOURCE_FILE ("instruction-for.galgas", 204)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-for.galgas", 206)) ;
    nt_expression_ (var_mWhileExpression, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 209)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 212)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("instruction-for.galgas", 214)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBeforeInstructionList, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-for.galgas", 218)) ;
  GALGAS_lstring var_indexVariableName ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
    var_indexVariableName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 221))  COMMA_SOURCE_FILE ("instruction-for.galgas", 221)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
    var_indexVariableName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 224)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoInstructionList, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 232)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_between) COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBetweenInstructionList, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 237)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList ;
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 240)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("instruction-for.galgas", 242)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mAfterInstructionList, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 245)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-for.galgas", 246)) ;
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("for"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the terminator attribute should be '%for'")  COMMA_SOURCE_FILE ("instruction-for.galgas", 251)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_foreach_5F_instruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 254)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation, var_mEnumeratedObjectList, var_indexVariableName, var_mWhileExpression, var_endof_5F_while_5F_expression, var_mBeforeInstructionList, var_endof_5F_before_5F_branch, var_mBetweenInstructionList, var_endof_5F_between_5F_branch, var_mDoInstructionList, var_endof_5F_do_5F_branch, var_mAfterInstructionList, var_endof_5F_after_5F_branch, var_endof_5F_foreach_5F_instruction  COMMA_SOURCE_FILE ("instruction-for.galgas", 255)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_for) COMMA_SOURCE_FILE ("instruction-for.galgas", 186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 194)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-for.galgas", 200)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-for.galgas", 206)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
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
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
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
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_between) COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
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
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_for) COMMA_SOURCE_FILE ("instruction-for.galgas", 186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 194)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-for.galgas", 200)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-for.galgas", 206)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
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
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
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
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_between) COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
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
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_grammar) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 78)) ;
  GALGAS_lstring var_mGrammarComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  GALGAS_lstring var_mLabelName ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_mLabelName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 82))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 82)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    var_mLabelName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 88)) ;
    GALGAS_semanticExpressionAST var_mSourceExpression ;
    nt_expression_ (var_mSourceExpression, inCompiler) ;
    GALGAS_location var_endOfSourceExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 90)) ;
    GALGAS_actualParameterListAST var_actualParameterList ;
    nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
    GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult ;
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
      var_grammarInstructionSyntaxDirectedTranslationResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 95)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 97)) ;
      nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (var_instructionLocation, var_mGrammarComponentName, var_mLabelName, var_mSourceExpression, var_endOfSourceExpression, var_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 100)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_on) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 109)) ;
    GALGAS_semanticExpressionAST var_sourceExpression ;
    GALGAS_location var_endOfSourceExpression ;
    GALGAS_semanticExpressionAST var_nameExpression ;
    GALGAS_location var_endOfNameExpression ;
    switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
    case 1: {
      nt_expression_ (var_sourceExpression, inCompiler) ;
      var_endOfSourceExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 116)) ;
      GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 117)) ;
      temp_0.addAssign_operation (GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 117)) ;
      var_nameExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 117)), temp_0  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 117)) ;
      var_endOfNameExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 118)) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 119)), GALGAS_string ("obsolete syntax, use '... on (source_string, name_string) ...'").add_operation (GALGAS_string (" instead of '... on source_string ...' ; you can use empty string \"\" for name_string"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 119))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 119)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 122)) ;
      nt_expression_ (var_sourceExpression, inCompiler) ;
      var_endOfSourceExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 124)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 125)) ;
      nt_expression_ (var_nameExpression, inCompiler) ;
      var_endOfNameExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 127)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 128)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_actualParameterListAST var_actualParameterList ;
    nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
    GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult ;
    switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
      var_grammarInstructionSyntaxDirectedTranslationResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 136)) ;
      nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (var_instructionLocation, var_mGrammarComponentName, var_mLabelName, var_sourceExpression, var_endOfSourceExpression, var_nameExpression, var_endOfNameExpression, var_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 139)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_grammar) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 88)) ;
    nt_expression_parse (inCompiler) ;
    nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 97)) ;
      nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_on) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 109)) ;
    switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
    case 1: {
      nt_expression_parse (inCompiler) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 122)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 125)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 128)) ;
    } break ;
    default:
      break ;
    }
    nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 136)) ;
      nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_grammar) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 88)) ;
    nt_expression_indexing (inCompiler) ;
    nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 97)) ;
      nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_on) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 109)) ;
    switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
    case 1: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 122)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 125)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 128)) ;
    } break ;
    default:
      break ;
    }
    nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 136)) ;
      nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 48)) ;
  GALGAS_lstringlist var_mStructAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 49)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 52)) ;
      GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 53)) ;
      var_mStructAttributeList.addAssign_operation (var_attributeName  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 54)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName.reader_location (SOURCE_FILE ("instruction-inc-dec.galgas", 59)), var_mReceiverName, var_mStructAttributeList, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 62))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 58)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName.reader_location (SOURCE_FILE ("instruction-inc-dec.galgas", 67)), var_mReceiverName, var_mStructAttributeList, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 70))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 66)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName.reader_location (SOURCE_FILE ("instruction-inc-dec.galgas", 75)), var_mReceiverName, var_mStructAttributeList, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 78))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 74)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 81)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName.reader_location (SOURCE_FILE ("instruction-inc-dec.galgas", 83)), var_mReceiverName, var_mStructAttributeList, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 86))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 52)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 53)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 52)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 53)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 94)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 95)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 100))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 103)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 106))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 104)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 112))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 110)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 118))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 94)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 94)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_branch_i37_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_if_5F_expression ;
  nt_expression_ (var_if_5F_expression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("instruction-if.galgas", 24)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_then_5F_instructionList, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 31)) ;
    nt_semantic_5F_instruction_5F_list_ (var_else_5F_instructionList, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_elsif) COMMA_SOURCE_FILE ("instruction-if.galgas", 34)) ;
    GALGAS_semanticInstructionAST var_instruction ;
    nt_if_5F_branch_ (var_instruction, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 36)) ;
    temp_0.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
    var_else_5F_instructionList = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation, var_if_5F_expression, var_then_5F_instructionList, var_endOf_5F_then_5F_branchLocation, var_else_5F_instructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 44))  COMMA_SOURCE_FILE ("instruction-if.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_branch_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("instruction-if.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 31)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_elsif) COMMA_SOURCE_FILE ("instruction-if.galgas", 34)) ;
    nt_if_5F_branch_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_branch_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("instruction-if.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 31)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_elsif) COMMA_SOURCE_FILE ("instruction-if.galgas", 34)) ;
    nt_if_5F_branch_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 50)) ;
  nt_if_5F_branch_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-if.galgas", 55)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("if"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the terminator attribute should be '%if'")  COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 50)) ;
  nt_if_5F_branch_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-if.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 50)) ;
  nt_if_5F_branch_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-if.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 27)) ;
  GALGAS_logListAST var_logList = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
      var_logList.addAssign_operation (var_loggedVariableName, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName  COMMA_SOURCE_FILE ("instruction-log.galgas", 32))  COMMA_SOURCE_FILE ("instruction-log.galgas", 32)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_logMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      GALGAS_semanticExpressionAST var_logExpression ;
      nt_expression_ (var_logExpression, inCompiler) ;
      var_logList.addAssign_operation (var_logMessage, var_logExpression  COMMA_SOURCE_FILE ("instruction-log.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-log.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation, var_logList  COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  GALGAS_semanticExpressionAST var_mVariantExpression ;
  nt_expression_ (var_mVariantExpression, inCompiler) ;
  GALGAS_location var_mEndOfVariantExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  GALGAS_semanticInstructionListAST var_mFirstInstructions ;
  nt_semantic_5F_instruction_5F_list_ (var_mFirstInstructions, inCompiler) ;
  GALGAS_location var_mEndOfFirstInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  GALGAS_semanticExpressionAST var_mLoopExpression ;
  nt_expression_ (var_mLoopExpression, inCompiler) ;
  GALGAS_location var_mEndOfLoopExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 40)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  GALGAS_semanticInstructionListAST var_mSecondInstructions ;
  nt_semantic_5F_instruction_5F_list_ (var_mSecondInstructions, inCompiler) ;
  GALGAS_location var_mEndOfSecondInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 43)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the terminator attribute should be '%loop'")  COMMA_SOURCE_FILE ("instruction-loop.galgas", 49)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_mEndOfLoopInstruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 52)) ;
  outArgument_outInstruction = GALGAS_loopInstructionAST::constructor_new (var_instructionLocation, var_mVariantExpression, var_mEndOfVariantExpression, var_mFirstInstructions, var_mEndOfFirstInstructions, var_mLoopExpression, var_mEndOfLoopExpression, var_mSecondInstructions, var_mEndOfSecondInstructions, var_mEndOfLoopInstruction  COMMA_SOURCE_FILE ("instruction-loop.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
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
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
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
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i41_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_enumerationConstantName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (false), var_enumerationConstantName, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 42))  COMMA_SOURCE_FILE ("instruction-match.galgas", 42))  COMMA_SOURCE_FILE ("instruction-match.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i42_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  GALGAS_lstring var_localConstant ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
    var_localConstant = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 51))  COMMA_SOURCE_FILE ("instruction-match.galgas", 51)) ;
  } break ;
  case 2: {
    var_localConstant = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (true), var_className, var_localConstant  COMMA_SOURCE_FILE ("instruction-match.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i42_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i42_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i43_ (GALGAS_matchInstructionBranchListAST & ioArgument_ioMatchInstructionBranchList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  GALGAS_matchEntryListAST var_mMatchEntryList = GALGAS_matchEntryListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_ (var_mMatchEntryList, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfMatchEntryList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 71)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  GALGAS_semanticInstructionListAST var_mMatchBranchInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_mMatchBranchInstructionList, inCompiler) ;
  ioArgument_ioMatchInstructionBranchList.addAssign_operation (var_mMatchEntryList, var_endOfMatchEntryList, var_mMatchBranchInstructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 79))  COMMA_SOURCE_FILE ("instruction-match.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i43_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i43_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_match) COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  GALGAS_semanticExpressionListAST var_matchedExpressionNameList = GALGAS_semanticExpressionListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 86)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 87)) ;
  GALGAS_semanticExpressionAST var_receiverExpression ;
  nt_expression_ (var_receiverExpression, inCompiler) ;
  var_matchedExpressionNameList.addAssign_operation (var_receiverExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 89))  COMMA_SOURCE_FILE ("instruction-match.galgas", 89)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_semanticExpressionAST var_receiverExpression ;
    nt_expression_ (var_receiverExpression, inCompiler) ;
    var_matchedExpressionNameList.addAssign_operation (var_receiverExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 94))  COMMA_SOURCE_FILE ("instruction-match.galgas", 94)) ;
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 96)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_matchInstructionBranchListAST var_matchInstructionBranchList = GALGAS_matchInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 98)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_ (var_matchInstructionBranchList, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_elseInstructionList ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    var_elseInstructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 105)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-match.galgas", 107)) ;
    nt_semantic_5F_instruction_5F_list_ (var_elseInstructionList, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-match.galgas", 110)) ;
  GALGAS_location var_endOf_5F_match_5F_instruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 111)) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-match.galgas", 114)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("match"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the terminator attribute should be '%match'")  COMMA_SOURCE_FILE ("instruction-match.galgas", 116)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_matchInstructionAST::constructor_new (var_instructionLocation, var_matchedExpressionNameList, var_matchInstructionBranchList, var_elseInstructionList, var_endOf_5F_match_5F_instruction  COMMA_SOURCE_FILE ("instruction-match.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_match) COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 96)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-match.galgas", 107)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-match.galgas", 110)) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-match.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_match) COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 96)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-match.galgas", 107)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-match.galgas", 110)) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-match.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 19)) ;
  GALGAS_semanticExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  outArgument_outInstruction = GALGAS_messageInstructionAST::constructor_new (var_instructionLocation, var_expression  COMMA_SOURCE_FILE ("instruction-message.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression ;
  nt_expression_ (var_mReceiverExpression, inCompiler) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation, var_mReceiverExpression, var_mMethodName, var_actualParameterList  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_mRoutineName.reader_location (SOURCE_FILE ("instruction-proc-call.galgas", 24)), var_mRoutineName, var_actualParameterList  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 26)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 28)) ;
  GALGAS_actualOutputExpressionList var_expressionList ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation, var_expressionList  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 28)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 28)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 40)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 41)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  GALGAS_semanticExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation, var_expression  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 40)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 40)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 31)) ;
  GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("an empty selector '!\?' is required here")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 34)) ;
  }
  GALGAS_lstring var_mReceiverName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 36)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 37)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
      GALGAS_lstring var_structAttribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
      var_mReceiverStructAttributes.addAssign_operation (var_structAttribute  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeNameForCasting ;
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    var_typeNameForCasting = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-setter-call.galgas", 46)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
    var_typeNameForCasting = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mModifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 51)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 53)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation, var_mReceiverName, var_mReceiverStructAttributes, var_typeNameForCasting, var_mModifierName, var_actualParameterList  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 51)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 68)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 69)) ;
  GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 70)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("an empty selector '!\?' is required here")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 72)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 74)) ;
  GALGAS_lstring var_mModifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 75)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation, var_mModifierName, var_actualParameterList  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 68)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 70)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 74)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 75)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 68)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 70)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 74)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 75)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_switch) COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
  GALGAS_semanticExpressionAST var_switchExpression ;
  nt_expression_ (var_switchExpression, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
  GALGAS_switchBranchesAST var_switchBranches = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    GALGAS_lstringlist var_constantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 45)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 47)) ;
      var_constantNameList.addAssign_operation (var_constantName  COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
      switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 52)) ;
    switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 58)) ;
          var_associatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-switch.galgas", 59)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-switch.galgas", 59)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 59)) ;
        } break ;
        case 2: {
          GALGAS_lstring var_typeName ;
          switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
          case 1: {
            var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-switch.galgas", 63)) ;
          } break ;
          case 2: {
            var_typeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-switch.galgas", 65)) ;
          } break ;
          default:
            break ;
          }
          GALGAS_bool var_constantMarkedAsUnused ;
          switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
          case 1: {
            var_constantMarkedAsUnused = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("instruction-switch.galgas", 71)) ;
            var_constantMarkedAsUnused = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 74)) ;
          var_associatedValuesExtraction.addAssign_operation (var_typeName, var_constantName, var_constantMarkedAsUnused  COMMA_SOURCE_FILE ("instruction-switch.galgas", 75)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 81)) ;
    GALGAS_semanticInstructionListAST var_instructions ;
    nt_semantic_5F_instruction_5F_list_ (var_instructions, inCompiler) ;
    var_switchBranches.addAssign_operation (var_constantNameList, var_associatedValuesExtraction, var_instructions, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 83))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 83)) ;
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-switch.galgas", 86)) ;
  GALGAS_location var_endOfSwitchInstruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("switch"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the terminator attribute should be '%switch'")  COMMA_SOURCE_FILE ("instruction-switch.galgas", 92)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation, var_switchExpression, var_endOfSwitchExpression, var_switchBranches, var_endOfSwitchInstruction  COMMA_SOURCE_FILE ("instruction-switch.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_switch) COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 47)) ;
      switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 58)) ;
        } break ;
        case 2: {
          switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-switch.galgas", 63)) ;
          } break ;
          case 2: {
          } break ;
          default:
            break ;
          }
          switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("instruction-switch.galgas", 71)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 74)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 81)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-switch.galgas", 86)) ;
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_switch) COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 47)) ;
      switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 58)) ;
        } break ;
        case 2: {
          switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-switch.galgas", 63)) ;
          } break ;
          case 2: {
          } break ;
          default:
            break ;
          }
          switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("instruction-switch.galgas", 71)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 74)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 81)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-switch.galgas", 86)) ;
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 21)) ;
  GALGAS_lstring var_mTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation, var_mTypeName, var_mMethodName, var_actualParameterList  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("instruction-warning.galgas", 20)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression ;
  nt_expression_ (var_mReceiverExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-warning.galgas", 23)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression ;
  nt_expression_ (var_mWarningExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation, var_mReceiverExpression, var_mWarningExpression  COMMA_SOURCE_FILE ("instruction-warning.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("instruction-warning.galgas", 20)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-warning.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("instruction-warning.galgas", 20)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-warning.galgas", 23)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 45)) ;
  GALGAS_semanticExpressionAST var_keyExpression ;
  nt_expression_ (var_keyExpression, inCompiler) ;
  GALGAS_location var_endOfKeyExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 47)) ;
  GALGAS_lstring var_withPrefix ;
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
    var_withPrefix = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 50))  COMMA_SOURCE_FILE ("instruction-with.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    var_withPrefix = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
    GALGAS_semanticExpressionAST var_receiverExpression ;
    nt_expression_ (var_receiverExpression, inCompiler) ;
    GALGAS_location var_endOfReceiverExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 58)) ;
    GALGAS_lstring var_searchMethodNameForErrorSignaling ;
    switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
    case 1: {
      var_searchMethodNameForErrorSignaling = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-with.galgas", 61)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 63)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 64)) ;
      var_searchMethodNameForErrorSignaling = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 65)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 67)) ;
    GALGAS_semanticInstructionListAST var_mDoBranchInstructions ;
    nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions, inCompiler) ;
    GALGAS_location var_endOfDoInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 69)) ;
    GALGAS_semanticInstructionListAST var_mElseBranchInstructions ;
    switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
    case 1: {
      var_mElseBranchInstructions = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 72)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 74)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (var_searchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("no 'else' branch if error on search is enabled")  COMMA_SOURCE_FILE ("instruction-with.galgas", 76)) ;
      }
      nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (var_instructionLocation, var_withPrefix, var_receiverExpression, var_endOfReceiverExpression, var_keyExpression, var_endOfKeyExpression, var_searchMethodNameForErrorSignaling, var_mDoBranchInstructions, var_endOfDoInstructions, var_mElseBranchInstructions, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 91))  COMMA_SOURCE_FILE ("instruction-with.galgas", 80)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-with.galgas", 93)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("an empty selector '!\?' is required here")  COMMA_SOURCE_FILE ("instruction-with.galgas", 95)) ;
    }
    GALGAS_lstring var_mTargetObjectName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 97)) ;
    GALGAS_lstringlist var_structAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 98)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-with.galgas", 101)) ;
        GALGAS_lstring var_mStructFieldName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 102)) ;
        var_structAttributeList.addAssign_operation (var_mStructFieldName  COMMA_SOURCE_FILE ("instruction-with.galgas", 103)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    GALGAS_location var_endOfReceiverExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 105)) ;
    GALGAS_lstring var_searchMethodNameForErrorSignaling ;
    switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
    case 1: {
      var_searchMethodNameForErrorSignaling = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-with.galgas", 108)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 110)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 111)) ;
      var_searchMethodNameForErrorSignaling = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 112)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 114)) ;
    GALGAS_semanticInstructionListAST var_mDoBranchInstructions ;
    nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions, inCompiler) ;
    GALGAS_location var_endOf_5F_do_5F_instructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 116)) ;
    GALGAS_semanticInstructionListAST var_mElseBranchInstructions ;
    switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
    case 1: {
      var_mElseBranchInstructions = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 119)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 121)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (var_searchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("no 'else' branch if error on search is enabled")  COMMA_SOURCE_FILE ("instruction-with.galgas", 123)) ;
      }
      nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_endOf_5F_else_5F_instructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 127)) ;
    outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (var_instructionLocation, var_withPrefix, var_mTargetObjectName, var_structAttributeList, var_endOfReceiverExpression, var_keyExpression, var_endOfKeyExpression, var_searchMethodNameForErrorSignaling, var_mDoBranchInstructions, var_endOf_5F_do_5F_instructions, var_mElseBranchInstructions, var_endOf_5F_else_5F_instructions  COMMA_SOURCE_FILE ("instruction-with.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-with.galgas", 142)) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-with.galgas", 145)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("with"))).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_8, GALGAS_string ("the terminator attribute should be '%with'")  COMMA_SOURCE_FILE ("instruction-with.galgas", 147)) ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 63)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 64)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 65)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 67)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 74)) ;
      nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-with.galgas", 93)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 97)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-with.galgas", 101)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 102)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 110)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 111)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 112)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 114)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 121)) ;
      nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-with.galgas", 142)) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-with.galgas", 145)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 63)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 64)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 65)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 67)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 74)) ;
      nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-with.galgas", 93)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 97)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-with.galgas", 101)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 102)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 110)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 111)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 112)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 114)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 121)) ;
      nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-with.galgas", 142)) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("instruction-with.galgas", 145)) ;
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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_attribute_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mAttributeTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  GALGAS_lstring var_mAttributeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  GALGAS_lstringlist var_featureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
      var_featureList.addAssign_operation (var_featureName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 72)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_mAttributeTypeName, var_mAttributeName, var_featureList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_attribute_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_attribute_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 93)) ;
  GALGAS_lstring var_mListmapTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  GALGAS_lstring var_mAssociatedListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName, var_mAssociatedListTypeName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 99))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 93)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 93)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i3_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_array) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
  GALGAS_lstring var_arrayTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 119)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 120)) ;
  GALGAS_lstring var_elementListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 122)) ;
  GALGAS_luint var_dimension = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 124)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName, var_elementListTypeName, var_dimension  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 125))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_array) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 119)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 120)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 122)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 124)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_array) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 119)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 120)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 122)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 124)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_method_5F_declaration_i4_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
  GALGAS_lstring var_stateName ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    var_stateName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 146))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 146)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 148)) ;
    var_stateName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
  GALGAS_lstring var_mShadowErrorMessage ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
    var_mShadowErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage, var_mShadowErrorMessage, var_stateName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 161)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_method_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 148)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_method_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 148)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_map) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 172)) ;
  GALGAS_lstring var_mMapTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 174)) ;
  GALGAS_lstringlist var_mapAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 176)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 179)) ;
      var_mapAttributeList.addAssign_operation (var_attribute  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 180)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 183)) ;
  GALGAS_propertyInCollectionListAST var_propertyList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 184)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 185)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 186)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 187)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 188)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_propertyList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 193)) ;
      nt_insert_5F_method_5F_declaration_ (var_mInsertMethodList, inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 196)) ;
      GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 197)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 198)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 199)) ;
      GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 200)) ;
      var_mSearchMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 204))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 204))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 201)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 206)) ;
      GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 208)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 209)) ;
      GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 210)) ;
      var_mRemoveMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 211)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 215)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 216)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 217)) ;
      var_insertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 218))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 218)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 220)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 222)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName, var_mapAttributeList, var_propertyList, var_mInsertMethodList, var_mSearchMethodList, var_mRemoveMethodList, var_insertOrReplaceDeclarationListAST  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 223))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 223)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_map) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 172)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 174)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 183)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 193)) ;
      nt_insert_5F_method_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 196)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 197)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 198)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 199)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 200)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 206)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 208)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 209)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 210)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 215)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 216)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 217)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 220)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 222)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_map) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 172)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 174)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 183)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 193)) ;
      nt_insert_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 196)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 197)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 198)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 199)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 200)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 206)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 208)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 209)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 210)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 215)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 216)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 217)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 220)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 222)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_mIsAbstract ;
  switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
    var_mIsAbstract = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 251)) ;
    var_mIsAbstract = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_class) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 254)) ;
  GALGAS_lstringlist var_classNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 255)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 257)) ;
    var_classNameList.addAssign_operation (var_className  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 258)) ;
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 260)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_mSuperClassName ;
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
    var_mSuperClassName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 264)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 266)) ;
    var_mSuperClassName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 267)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 269)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_classFeatureName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 272)) ;
      var_classFeatureList.addAssign_operation (var_classFeatureName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 273)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 275)) ;
  GALGAS_string var_mClassMessage = GALGAS_string::makeEmptyString () ;
  GALGAS_propertyInCollectionListAST var_mAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 278)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_mAttributeList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 283)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 285)) ;
  cEnumerator_lstringlist enumerator_11907 (var_classNameList, kEnumeration_up) ;
  while (enumerator_11907.hasCurrentObject ()) {
    ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_mIsAbstract, enumerator_11907.current_mValue (HERE), var_mSuperClassName, var_classFeatureList, var_mAttributeList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 287))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 287)) ;
    enumerator_11907.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_class) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 257)) ;
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 260)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 266)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 267)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 272)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 275)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 283)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 285)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_class) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 257)) ;
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 260)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 266)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 267)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 272)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 275)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 283)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 285)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i7_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 309)) ;
  GALGAS_bool var_mAscending ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 312)) ;
    var_mAscending = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 315)) ;
    var_mAscending = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName, var_mAscending  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 318)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 309)) ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 312)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 315)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 309)) ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 312)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 315)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i8_ (const GALGAS_bool constinArgument_inIsInternal,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 334)) ;
  GALGAS_lstring var_mFilewrapperName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 335)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 336)) ;
  GALGAS_lstring var_mFilewrapperPath = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 337)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 338)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 339)) ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 343)) ;
      var_filewrapperTextFileExtensionList.addAssign_operation (var_pathExtension  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 344)) ;
      switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 346)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 349)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 350)) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 351)) ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_pathExtension = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 355)) ;
      var_filewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 356)) ;
      switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 358)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 362)) ;
  GALGAS_filewrapperTemplateListAST var_mFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 363)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 366)) ;
      GALGAS_lstring var_mFilewrapperTemplateName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 367)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 368)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 369)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 372)) ;
          GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 373)) ;
          GALGAS_bool var_isUnused ;
          switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
          case 1: {
            var_isUnused = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 378)) ;
            var_isUnused = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 381)) ;
          var_filewrapperTemplateFormalInputParameters.addAssign_operation (var_selector, var_typeName, var_argumentName, var_isUnused  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 382)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      var_mFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName, var_mFilewrapperTemplatePath, var_filewrapperTemplateFormalInputParameters  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 384)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 389)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsInternal, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 393)), var_mFilewrapperName, var_mFilewrapperPath, var_filewrapperTextFileExtensionList, var_filewrapperBinaryFileExtensionList, var_mFilewrapperTemplateList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 390))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 390)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 334)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 335)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 336)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 337)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 338)) ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 343)) ;
      switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 346)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 349)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 350)) ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 355)) ;
      switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 358)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 362)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 366)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 368)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 372)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 373)) ;
          switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 378)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 381)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 389)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 334)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 335)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 336)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 337)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 338)) ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 343)) ;
      switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 346)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 349)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 350)) ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 355)) ;
      switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 358)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 362)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 366)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 368)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 372)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 373)) ;
          switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 378)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 381)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 389)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 413)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 414)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 415)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 416)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_abstractCategoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 418))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 418)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 413)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 414)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 415)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 416)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 413)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 414)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 415)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 416)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 438)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 439)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 440)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 441)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractCategoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 443))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 443)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 438)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 439)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 440)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 441)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 438)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 439)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 440)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 441)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i11_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 462)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 463)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 464)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 466)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfMethodLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 468)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 469)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_categoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList, var_routineInstructionList, var_endOfMethodLocation  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 470))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 470)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 462)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 463)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 464)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 466)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 469)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 462)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 463)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 464)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 466)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 469)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i12_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 491)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 492)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 493)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 494)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 496)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfMethodLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 498)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 499)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingCategoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList, var_routineInstructionList, var_endOfMethodLocation  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 500))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 500)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 491)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 492)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 493)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 494)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 496)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 499)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 491)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 492)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 493)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 494)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 496)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 499)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i13_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 521)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 522)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 523)) ;
  GALGAS_lstring var_mGetterName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 524)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 527)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 529)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_abstractCategoryGetterAST::constructor_new (GALGAS_bool (false), var_className, var_mGetterName, var_mFormalInputParameterList, var_mReturnedTypeName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 530))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 530)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 521)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 522)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 523)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 524)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 527)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 529)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 521)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 522)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 523)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 524)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 527)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 529)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i14_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 549)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 550)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 551)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 554)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 555)) ;
  GALGAS_lstring var_mReturnedVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 556)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 557)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 559)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 560)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_categoryGetterAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_mFormalInputParameterList, var_mReturnedTypeName, var_mReturnedVariableName, var_routineInstructionList, var_endOfInstructionList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 561))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 561)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 549)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 550)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 551)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 554)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 555)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 556)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 557)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 560)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 549)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 550)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 551)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 554)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 555)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 556)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 557)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 560)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i15_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 585)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 586)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 587)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 590)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 591)) ;
  GALGAS_lstring var_mReturnedVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 592)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 593)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 595)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 596)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingCategoryGetterAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_mFormalInputParameterList, var_mReturnedTypeName, var_mReturnedVariableName, var_routineInstructionList, var_endOfInstructionList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 597))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 597)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 586)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 587)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 590)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 591)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 592)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 593)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 596)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 586)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 587)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 590)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 591)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 592)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 593)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 596)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i16_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 620)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 622)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 623)) ;
  GALGAS_lstring var_mGetterName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 624)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 627)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 628)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 629)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractCategoryGetterAST::constructor_new (GALGAS_bool (false), var_className, var_mGetterName, var_mFormalInputParameterList, var_mReturnedTypeName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 630))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 630)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 620)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 622)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 623)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 624)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 627)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 628)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 629)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 620)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 622)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 623)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 624)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 627)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 628)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 629)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 650)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 651)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 652)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 653)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_abstractCategoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 655))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 655)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 650)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 651)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 652)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 653)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 650)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 651)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 652)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 653)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 674)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 675)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 676)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 677)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 678)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractCategoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 680))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 680)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 674)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 675)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 676)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 677)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 678)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 674)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 675)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 676)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 677)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 678)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 699)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 700)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 701)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 703)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfModifierLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 705)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 706)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_categoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList, var_routineInstructionList, var_endOfModifierLocation  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 707))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 707)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 699)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 700)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 701)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 703)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 706)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 699)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 700)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 701)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 703)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 706)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 728)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 729)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 730)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 731)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 733)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfModifierLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 735)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 736)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingCategoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList, var_routineInstructionList, var_endOfModifierLocation  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 737))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 737)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 728)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 729)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 730)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 731)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 733)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 736)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 728)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 729)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 730)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 731)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 733)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 736)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_graph) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 758)) ;
  GALGAS_lstring var_graphTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 759)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 760)) ;
  GALGAS_lstring var_associatedListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 761)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 762)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 763)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 764)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 767)) ;
      GALGAS_lstring var_insertName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 768)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 769)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 770)) ;
      GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 771)) ;
      var_graphInsertModifierList.addAssign_operation (var_insertName, var_errorMessage  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 772)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 774)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName, var_associatedListTypeName, var_graphInsertModifierList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 775))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 775)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_graph) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 758)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 759)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 760)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 761)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 762)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 763)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 767)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 768)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 769)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 770)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 771)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 774)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_graph) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 758)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 759)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 760)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 761)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 762)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 763)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 767)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 768)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 769)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 770)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 771)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 774)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i22_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 794)) ;
  GALGAS_lstring var_externTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 795)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 796)) ;
  GALGAS_string var_cppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 800)) ;
      var_cppPredeclarationCode.dotAssign_operation (var_cppPredeclarationCodeElement.mAttribute_string  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 801)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 803)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 804)) ;
  GALGAS_string var_cppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppClassCodeElement = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 808)) ;
      var_cppClassCode.dotAssign_operation (var_cppClassCodeElement.mAttribute_string  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 809)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 811)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 812)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 813)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList = GALGAS_externTypeGetterList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 814)) ;
  GALGAS_externTypeModifierList var_externTypeModifierList = GALGAS_externTypeModifierList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 815)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 816)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 819)) ;
      GALGAS_lstring var_constructorName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 820)) ;
      GALGAS_typeNameFormalParameterNameList var_argumentTypeList = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 821)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 824)) ;
          GALGAS_lstring var_argumentTypeName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 825)) ;
          GALGAS_lstring var_argumentName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 826)) ;
          var_argumentTypeList.addAssign_operation (var_selector, var_argumentTypeName, var_argumentName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 827)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 829)) ;
      GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 830)) ;
      var_externTypeConstructorList.addAssign_operation (var_constructorName, var_resultTypeName, var_argumentTypeList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 831)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 836)) ;
      GALGAS_lstring var_getterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 837)) ;
      GALGAS_typeNameFormalParameterNameList var_argumentTypeList = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 838)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 841)) ;
          GALGAS_lstring var_argumentTypeName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 842)) ;
          GALGAS_lstring var_argumentName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 843)) ;
          var_argumentTypeList.addAssign_operation (var_selector, var_argumentTypeName, var_argumentName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 844)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 846)) ;
      GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 847)) ;
      var_externTypeGetterList.addAssign_operation (var_getterName, var_resultTypeName, var_argumentTypeList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 848)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 853)) ;
      GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 854)) ;
      GALGAS_formalParameterListAST var_formalParameterList ;
      nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
      var_externTypeModifierList.addAssign_operation (var_modifierName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 856)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 860)) ;
      GALGAS_lstring var_methodName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 861)) ;
      GALGAS_formalParameterListAST var_formalParameterList ;
      nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
      var_externTypeMethodList.addAssign_operation (var_methodName, var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 866))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 863)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 868)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName, var_cppPredeclarationCode, var_cppClassCode, var_externTypeConstructorList, var_externTypeGetterList, var_externTypeModifierList, var_externTypeMethodList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 869))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 869)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 794)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 795)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 796)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 800)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 803)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 804)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 808)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 811)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 812)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 819)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 820)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 824)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 825)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 826)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 829)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 830)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 836)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 837)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 841)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 842)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 843)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 846)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 847)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 853)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 854)) ;
      nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 860)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 861)) ;
      nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 868)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 794)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 795)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 796)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 800)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 803)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 804)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 808)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 811)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 812)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 819)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 820)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 824)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 825)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 826)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 829)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 830)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 836)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 837)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 841)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 842)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 843)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 846)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 847)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 853)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 854)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 860)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 861)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 868)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i23_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_enum) COMMA_SOURCE_FILE ("enum.galgas", 29)) ;
  GALGAS_lstring var_mEnumTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("enum.galgas", 31)) ;
  GALGAS_enumConstantList var_mConstantList = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("enum.galgas", 34)) ;
    GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 35)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("enum.galgas", 36)) ;
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("enum.galgas", 39)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 41)) ;
        GALGAS_lstring var_associatedValueName ;
        switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
        case 1: {
          var_associatedValueName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("enum.galgas", 44)) ;
        } break ;
        case 2: {
          var_associatedValueName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 46)) ;
        } break ;
        default:
          break ;
        }
        var_associatedValueTypeList.addAssign_operation (var_associatedValueType, var_associatedValueName  COMMA_SOURCE_FILE ("enum.galgas", 48)) ;
        switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("enum.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList.addAssign_operation (var_constantName, var_associatedValueTypeList  COMMA_SOURCE_FILE ("enum.galgas", 53)) ;
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("enum.galgas", 56)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName, var_mConstantList  COMMA_SOURCE_FILE ("enum.galgas", 57))  COMMA_SOURCE_FILE ("enum.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_enum) COMMA_SOURCE_FILE ("enum.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("enum.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("enum.galgas", 34)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 35)) ;
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("enum.galgas", 39)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 41)) ;
        switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 46)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("enum.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("enum.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_enum) COMMA_SOURCE_FILE ("enum.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("enum.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("enum.galgas", 34)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 35)) ;
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("enum.galgas", 39)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 41)) ;
        switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 46)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("enum.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("enum.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i24_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("shared-map.galgas", 83)) ;
  GALGAS_lstring var_mMapTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("shared-map.galgas", 85)) ;
  GALGAS_lstring var_mapProxyTypeName = GALGAS_lstring::constructor_new (var_mMapTypeName.mAttribute_string.add_operation (GALGAS_string ("-proxy"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 86)), var_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("shared-map.galgas", 86)) ;
  GALGAS_lstringlist var_mapAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 88)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("shared-map.galgas", 91)) ;
      var_mapAttributeList.addAssign_operation (var_attribute  COMMA_SOURCE_FILE ("shared-map.galgas", 92)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 95)) ;
  GALGAS_propertyInCollectionListAST var_propertyList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 96)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 97)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 98)) ;
  GALGAS_mapStateList var_mapStateList = GALGAS_mapStateList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 99)) ;
  GALGAS_mapOverrideBlockListAST var_mapOverrideBlockListAST = GALGAS_mapOverrideBlockListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 100)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("shared-map.galgas", 103)) ;
      GALGAS_lstring var_stateName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 104)) ;
      GALGAS_mapAutomatonMessageKind var_stateMessageKind ;
      GALGAS_lstring var_stateMessage ;
      switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
      case 1: {
        var_stateMessageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 108)) ;
        var_stateMessage = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 109))  COMMA_SOURCE_FILE ("shared-map.galgas", 109)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 111)) ;
        var_stateMessage = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 112)) ;
        var_stateMessageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("shared-map.galgas", 113)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 115)) ;
        var_stateMessage = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 116)) ;
        var_stateMessageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("shared-map.galgas", 117)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 119)) ;
      GALGAS_mapStateTransitionList var_transitionList = GALGAS_mapStateTransitionList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 120)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_actionName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 123)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 124)) ;
          GALGAS_lstring var_targetStateName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 125)) ;
          GALGAS_mapAutomatonMessageKind var_transitionMessageKind ;
          GALGAS_lstring var_transitionMessage ;
          switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
          case 1: {
            var_transitionMessageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 129)) ;
            var_transitionMessage = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 130))  COMMA_SOURCE_FILE ("shared-map.galgas", 130)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 132)) ;
            var_transitionMessage = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 133)) ;
            var_transitionMessageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("shared-map.galgas", 134)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 136)) ;
            var_transitionMessage = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 137)) ;
            var_transitionMessageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("shared-map.galgas", 138)) ;
          } break ;
          default:
            break ;
          }
          var_transitionList.addAssign_operation (var_actionName, var_targetStateName, var_transitionMessageKind, var_transitionMessage  COMMA_SOURCE_FILE ("shared-map.galgas", 140)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      var_mapStateList.addAssign_operation (var_stateName, var_stateMessageKind, var_stateMessage, var_transitionList  COMMA_SOURCE_FILE ("shared-map.galgas", 146)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 151)) ;
    } break ;
    case 3: {
      nt_attribute_5F_declaration_ (var_propertyList, inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("shared-map.galgas", 155)) ;
      nt_insert_5F_method_5F_declaration_ (var_mInsertMethodList, inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("shared-map.galgas", 158)) ;
      GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 159)) ;
      GALGAS_lstring var_actionName ;
      switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
      case 1: {
        var_actionName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 162))  COMMA_SOURCE_FILE ("shared-map.galgas", 162)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("shared-map.galgas", 164)) ;
        var_actionName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 165)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 167)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("shared-map.galgas", 168)) ;
      GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 169)) ;
      var_mSearchMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage, var_actionName  COMMA_SOURCE_FILE ("shared-map.galgas", 170)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("shared-map.galgas", 175)) ;
      GALGAS_lstring var_overrideBlockName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 176)) ;
      GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_31_AST = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 178)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_sourceState_31_ = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 181)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 182)) ;
          GALGAS_lstring var_sourceState_32_ = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 183)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 184)) ;
          GALGAS_lstring var_targetState = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 185)) ;
          GALGAS_mapAutomatonMessageKind var_messageKind ;
          GALGAS_lstring var_messageText ;
          switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
          case 1: {
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 189)) ;
            var_messageText = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 190))  COMMA_SOURCE_FILE ("shared-map.galgas", 190)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 192)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("shared-map.galgas", 193)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 194)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 196)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("shared-map.galgas", 197)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 198)) ;
          } break ;
          default:
            break ;
          }
          var_mapOverrideBlockDescriptor_31_AST.addAssign_operation (var_sourceState_31_, var_sourceState_32_, var_targetState, var_messageKind, var_messageText  COMMA_SOURCE_FILE ("shared-map.galgas", 200)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 202)) ;
      GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_32_AST = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 203)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 204)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_sourceState_31_ = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 207)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 208)) ;
          GALGAS_lstring var_sourceState_32_ = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 209)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 210)) ;
          GALGAS_lstring var_targetState = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 211)) ;
          GALGAS_mapAutomatonMessageKind var_messageKind ;
          GALGAS_lstring var_messageText ;
          switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
          case 1: {
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 215)) ;
            var_messageText = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 216))  COMMA_SOURCE_FILE ("shared-map.galgas", 216)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 218)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("shared-map.galgas", 219)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 220)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 222)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("shared-map.galgas", 223)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 224)) ;
          } break ;
          default:
            break ;
          }
          var_mapOverrideBlockDescriptor_32_AST.addAssign_operation (var_sourceState_31_, var_sourceState_32_, var_targetState, var_messageKind, var_messageText  COMMA_SOURCE_FILE ("shared-map.galgas", 226)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 228)) ;
      var_mapOverrideBlockListAST.addAssign_operation (var_overrideBlockName, var_mapOverrideBlockDescriptor_31_AST, var_mapOverrideBlockDescriptor_32_AST  COMMA_SOURCE_FILE ("shared-map.galgas", 229)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("shared-map.galgas", 231)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 233)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName, var_mapAttributeList, var_propertyList, var_mInsertMethodList, var_mSearchMethodList, var_mapStateList, var_mapOverrideBlockListAST  COMMA_SOURCE_FILE ("shared-map.galgas", 235))  COMMA_SOURCE_FILE ("shared-map.galgas", 235)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_mapProxyDeclarationAST::constructor_new (GALGAS_bool (false), var_mapProxyTypeName, var_mMapTypeName  COMMA_SOURCE_FILE ("shared-map.galgas", 246))  COMMA_SOURCE_FILE ("shared-map.galgas", 246)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("shared-map.galgas", 83)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("shared-map.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("shared-map.galgas", 91)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 95)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("shared-map.galgas", 103)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 104)) ;
      switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 111)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 112)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 115)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 116)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 119)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 123)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 124)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 125)) ;
          switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 132)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 133)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 136)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 137)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 151)) ;
    } break ;
    case 3: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("shared-map.galgas", 155)) ;
      nt_insert_5F_method_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 159)) ;
      switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("shared-map.galgas", 164)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 165)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 167)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("shared-map.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 169)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("shared-map.galgas", 175)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 176)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 178)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 181)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 182)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 183)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 184)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 185)) ;
          switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 192)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 194)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 196)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 198)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 202)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 204)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 207)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 208)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 209)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 210)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 211)) ;
          switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 218)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 220)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 222)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 224)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 228)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("shared-map.galgas", 231)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 233)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("shared-map.galgas", 83)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("shared-map.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("shared-map.galgas", 91)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 95)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("shared-map.galgas", 103)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 104)) ;
      switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 111)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 112)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 115)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 116)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 119)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 123)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 124)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 125)) ;
          switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 132)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 133)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 136)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 137)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 151)) ;
    } break ;
    case 3: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("shared-map.galgas", 155)) ;
      nt_insert_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 159)) ;
      switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("shared-map.galgas", 164)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 165)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 167)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("shared-map.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 169)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("shared-map.galgas", 175)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 176)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 178)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 181)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 182)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 183)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 184)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 185)) ;
          switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 192)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 194)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 196)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 198)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 202)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 204)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 207)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 208)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 209)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 210)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 211)) ;
          switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 218)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 220)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 222)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 224)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 228)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("shared-map.galgas", 231)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 233)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i25_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("list.galgas", 19)) ;
  GALGAS_lstring var_mListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("list.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("list.galgas", 21)) ;
  GALGAS_propertyInCollectionListAST var_mAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_mAttributeList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("list.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("list.galgas", 29)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_mListTypeName, var_mAttributeList  COMMA_SOURCE_FILE ("list.galgas", 30))  COMMA_SOURCE_FILE ("list.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("list.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("list.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("list.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("list.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("list.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("list.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("list.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("list.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("list.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("list.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_struct) COMMA_SOURCE_FILE ("struct.galgas", 18)) ;
  GALGAS_lstring var_structTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("struct.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("struct.galgas", 20)) ;
  GALGAS_propertyInCollectionListAST var_attributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("struct.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_attributeList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("struct.galgas", 28)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName, var_attributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("struct.galgas", 29))  COMMA_SOURCE_FILE ("struct.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_struct) COMMA_SOURCE_FILE ("struct.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("struct.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("struct.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("struct.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_struct) COMMA_SOURCE_FILE ("struct.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("struct.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("struct.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("struct.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i27_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("sorted-list.galgas", 27)) ;
  GALGAS_lstring var_sortedListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("sorted-list.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 29)) ;
  GALGAS_propertyInCollectionListAST var_attributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_attributeList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 35)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 38)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 39)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("sorted-list.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 45)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName, var_attributeList, var_sortDescriptorList  COMMA_SOURCE_FILE ("sorted-list.galgas", 46))  COMMA_SOURCE_FILE ("sorted-list.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("sorted-list.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("sorted-list.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 35)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 38)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("sorted-list.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("sorted-list.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("sorted-list.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 35)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 38)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("sorted-list.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 45)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isTemplate ;
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_isTemplate = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
    var_isTemplate = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  GALGAS_lstring var_lexiqueComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  GALGAS_lstring var_indexingDirectory ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_indexingDirectory = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    var_indexingDirectory = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
  GALGAS_metamodelTemplateDelimitorListAST var_templateDelimitorList = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 43)) ;
  GALGAS_templateReplacementListAST var_templateReplacementList = GALGAS_templateReplacementListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 44)) ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeList = GALGAS_lexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 45)) ;
  GALGAS_lexicalStyleListAST var_lexicalStyleList = GALGAS_lexicalStyleListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 46)) ;
  GALGAS_terminalDeclarationListAST var_terminalDeclarationList = GALGAS_terminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 47)) ;
  GALGAS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 48)) ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationList = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 49)) ;
  GALGAS_lexicalRuleListAST var_lexicalRuleList = GALGAS_lexicalRuleListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 50)) ;
  GALGAS_externRoutineListAST var_externRoutineList = GALGAS_externRoutineListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 51)) ;
  GALGAS_externFunctionListAST var_externFunctionList = GALGAS_externFunctionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 52)) ;
  GALGAS_indexingListAST var_indexingListAST = GALGAS_indexingListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_extern_5F_routine_5F_declaration_ (var_externRoutineList, inCompiler) ;
    } break ;
    case 3: {
      nt_extern_5F_function_5F_declaration_ (var_externFunctionList, inCompiler) ;
    } break ;
    case 4: {
      nt_template_5F_delimitor_ (var_templateDelimitorList, inCompiler) ;
    } break ;
    case 5: {
      nt_template_5F_replacement_ (var_templateReplacementList, inCompiler) ;
    } break ;
    case 6: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList, inCompiler) ;
    } break ;
    case 7: {
      nt_style_5F_declaration_ (var_lexicalStyleList, inCompiler) ;
    } break ;
    case 8: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList, inCompiler) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 72)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
      case 1: {
        nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList, inCompiler) ;
      } break ;
      case 2: {
        nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList, inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 11: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList, inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 81)) ;
      GALGAS_lstring var_indexName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 82)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 83)) ;
      GALGAS_lstring var_indexComment = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 84)) ;
      var_indexingListAST.addAssign_operation (var_indexName, var_indexComment  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 85)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 87)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_lexiqueComponentAST::constructor_new (GALGAS_bool (false), var_lexiqueComponentName, var_isTemplate, var_templateDelimitorList, var_templateReplacementList, var_lexicalAttributeList, var_lexicalStyleList, var_terminalDeclarationList, var_lexicalMessageDeclarationList, var_lexicalListDeclarationList, var_lexicalRuleList, var_externRoutineList, var_externFunctionList, var_indexingListAST, var_indexingDirectory  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 88))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 88)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 72)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
      case 1: {
        nt_lexical_5F_explicit_5F_rule_parse (inCompiler) ;
      } break ;
      case 2: {
        nt_lexical_5F_implicit_5F_rule_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 11: {
      nt_lexical_5F_message_5F_declaration_parse (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 81)) ;
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 82)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 83)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 84)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 87)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 72)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
      case 1: {
        nt_lexical_5F_explicit_5F_rule_indexing (inCompiler) ;
      } break ;
      case 2: {
        nt_lexical_5F_implicit_5F_rule_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 11: {
      nt_lexical_5F_message_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 81)) ;
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 82)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 83)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 84)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i1_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 109)) ;
  GALGAS_lstring var_startString = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 110)) ;
  GALGAS_lstringlist var_optionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 114)) ;
      var_optionList.addAssign_operation (var_optionName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 115)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 117)) ;
  GALGAS_lstring var_endString = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
  ioArgument_ioTemplateDelimitorList.addAssign_operation (var_startString, var_optionList, var_endString  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 109)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 110)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 117)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 109)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 110)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 117)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i2_ (GALGAS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 125)) ;
  GALGAS_lstring var_matchString = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 126)) ;
  GALGAS_lstring var_replacementString ;
  GALGAS_lstring var_replacementFunction ;
  switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 130)) ;
    var_replacementString = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 131)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 132)) ;
    var_replacementFunction = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 133)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 135)) ;
    var_replacementString = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 136)) ;
    var_replacementFunction = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 137))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 137)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssign_operation (var_matchString, var_replacementString, var_replacementFunction  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 126)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 130)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 131)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 132)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 133)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 126)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 130)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 131)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 132)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 133)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i3_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 146)) ;
  GALGAS_lstring var_messageName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 147)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 148)) ;
  GALGAS_lstring var_messageValue = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 149)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssign_operation (var_messageName, var_messageValue  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 146)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 147)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 148)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 149)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 146)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 147)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 148)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i4_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 156)) ;
  GALGAS_lstring var_listName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 157)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssign_operation (GALGAS_lexicalImplicitRuleAST::constructor_new (var_listName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 158))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 158)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 156)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 157)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 156)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lexicalExpressionAST var_lexicalRuleExpression ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 165)) ;
  GALGAS_lexicalInstructionListAST var_instructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 166)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_instructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 171)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssign_operation (GALGAS_lexicalExplicitRuleAST::constructor_new (var_lexicalRuleExpression, var_instructionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 172))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 165)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 171)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 165)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 178)) ;
  GALGAS_lexicalInstructionAST var_instruction ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 178)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 178)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i7_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_sentTerminal = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 186)) ;
  outArgument_outInstruction = GALGAS_lexicalSimpleSendInstructionAST::constructor_new (var_sentTerminal  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 186)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lexicalSendSearchListAST var_lexicalSendSearchList = GALGAS_lexicalSendSearchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 193)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 194)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 196)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 197)) ;
    GALGAS_lstring var_searchListName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 198)) ;
    var_lexicalSendSearchList.addAssign_operation (var_attributeName, var_searchListName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 199)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 200)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction ;
  switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_defaultSentTerminal = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
    var_lexicalSendDefaultAction = GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (var_defaultSentTerminal  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 207)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 209)) ;
    GALGAS_lstring var_defaultErrorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 210)) ;
    var_lexicalSendDefaultAction = GALGAS_lexicalErrorByDefaultAST::constructor_new (var_defaultErrorMessageName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 211)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_lexicalStructuredSendInstructionAST::constructor_new (var_lexicalSendSearchList, var_lexicalSendDefaultAction  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 213)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 194)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 196)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 197)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 198)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 200)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 209)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 194)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 196)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 197)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 198)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 200)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 209)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i9_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 221)) ;
  GALGAS_lexicalInstructionListAST var_repeatedInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 222)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalWhileBranchListAST var_lexicalWhileBranchList = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 227)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList, inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 232)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_endRepeat = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 235)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_endRepeat.mAttribute_string.objectCompare (GALGAS_string ("repeat"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (var_endRepeat.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the attribute should be '%repeat'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 237)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_lexicalInstructionAST var_i = GALGAS_lexicalRepeatInstructionAST::constructor_new (var_repeatedInstructionList, var_lexicalWhileBranchList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 240)) ;
  ioArgument_ioInstructionList.addAssign_operation (var_i  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 243)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
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
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 232)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
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
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 232)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i10_ (GALGAS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 249)) ;
  GALGAS_lexicalExpressionAST var_whileExpression ;
  nt_lexical_5F_expression_ (var_whileExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 252)) ;
  GALGAS_lexicalInstructionListAST var_whileInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 253)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_whileInstructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssign_operation (var_whileExpression, var_whileInstructionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 258)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 249)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 252)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 249)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 252)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i11_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 264)) ;
  GALGAS_lexicalSelectBranchListAST var_lexicalWhileBranchList = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 265)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 267)) ;
    GALGAS_lexicalExpressionAST var_selectExpression ;
    nt_lexical_5F_expression_ (var_selectExpression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 269)) ;
    GALGAS_lexicalInstructionListAST var_selectInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 270)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_ (var_selectInstructionList, inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    var_lexicalWhileBranchList.addAssign_operation (var_selectExpression, var_selectInstructionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 275)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 278)) ;
  GALGAS_lexicalInstructionListAST var_defaultInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 279)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_defaultInstructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 284)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_endSelect = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 287)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_endSelect.mAttribute_string.objectCompare (GALGAS_string ("select"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (var_endSelect.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the attribute should be '%select'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 289)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_lexicalInstructionAST var_i = GALGAS_lexicalSelectInstructionAST::constructor_new (var_lexicalWhileBranchList, var_defaultInstructionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 292)) ;
  ioArgument_ioInstructionList.addAssign_operation (var_i  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 295)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 264)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 267)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 269)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 278)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 284)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 287)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 264)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 267)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 269)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 278)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 284)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 287)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_actionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 301)) ;
  GALGAS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 302)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 303)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '!'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 308)) ;
      }
      GALGAS_location var_passingModeLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 310)) ;
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg, inCompiler) ;
      var_actualArgumentList.addAssign_operation (GALGAS_lexicalFormalInputArgumentAST::constructor_new (var_passingModeLocation, var_arg  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 312))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 312)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 314)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '!\?'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 316)) ;
      }
      GALGAS_location var_passingModeLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 318)) ;
      GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 319)) ;
      GALGAS_lexicalAttributeInputOutputArgumentAST var_arg = GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (var_passingModeLocation, var_attributeName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 320)) ;
      var_actualArgumentList.addAssign_operation (var_arg  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 321)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_errorMessageList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 323)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 326)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 328)) ;
      var_errorMessageList.addAssign_operation (var_errorMessageName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 329)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 331)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 334)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRoutineInstructionAST::constructor_new (var_actionName, var_actualArgumentList, var_errorMessageList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 335))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 335)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 301)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 303)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 314)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 319)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 326)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 328)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 331)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 334)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 301)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 303)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 314)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 319)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 326)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 328)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 331)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 334)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i13_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lchar var_character = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 345)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCharacterInputArgumentAST::constructor_new (var_character  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 346)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 345)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 345)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_luint var_unsignedValue = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 353)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (var_unsignedValue  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 354)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 353)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 353)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_location var_currentLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (var_currentLocation  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 363)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lstring var_idf = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 370)) ;
  nt_function_5F_call_5F_or_5F_attribute_ (var_idf, outArgument_outEffectiveArgument, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 370)) ;
  nt_function_5F_call_5F_or_5F_attribute_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 370)) ;
  nt_function_5F_call_5F_or_5F_attribute_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i17_ (const GALGAS_lstring constinArgument_inIdf,
                                                                                                                               GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outArgument,
                                                                                                                               C_Lexique_galgas_33_Scanner * /* inCompiler */) {
  outArgument_outArgument.drop () ; // Release 'out' argument
  outArgument_outArgument = GALGAS_lexicalAttributeInputArgumentAST::constructor_new (constinArgument_inIdf  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 377)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i17_indexing (C_Lexique_galgas_33_Scanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i18_ (const GALGAS_lstring constinArgument_inIdf,
                                                                                                                               GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outArgument,
                                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outArgument.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 383)) ;
  GALGAS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 384)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 387)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '!'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 389)) ;
      }
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg, inCompiler) ;
      var_functionActualArgumentList.addAssign_operation (var_arg  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 393)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 395)) ;
  outArgument_outArgument = GALGAS_lexicalFunctionInputArgumentAST::constructor_new (constinArgument_inIdf, var_functionActualArgumentList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 396)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 383)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 387)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 395)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 383)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 387)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 395)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 402)) ;
  GALGAS_lstring var_errorMessageName ;
  var_errorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 404)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalErrorInstructionAST::constructor_new (var_errorMessageName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 405))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 405)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 402)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 404)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 402)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 404)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 411)) ;
  GALGAS_lstring var_warningMessageName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 412)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalWarningInstructionAST::constructor_new (var_warningMessageName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 413))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 413)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 411)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 412)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 411)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 412)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 419)) ;
  GALGAS_lstring var_terminalName ;
  var_terminalName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 421)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalDropInstructionAST::constructor_new (var_terminalName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 422))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 422)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 419)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 421)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 419)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 421)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_tag) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 428)) ;
  GALGAS_lstring var_tagName ;
  var_tagName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 430)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalTagInstructionAST::constructor_new (var_tagName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 431))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 431)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_tag) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 428)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 430)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_tag) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 428)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 430)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 437)) ;
  GALGAS_lstring var_tagName ;
  var_tagName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 439)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 440)) ;
  GALGAS_lstring var_terminalName ;
  var_terminalName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 442)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRewindInstructionAST::constructor_new (var_tagName, var_terminalName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 443))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 443)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 439)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 440)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 442)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 439)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 440)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 442)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 449)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalLogInstructionAST::constructor_new (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 450))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 450)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 449)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 449)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i25_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_term_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i26_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 465)) ;
      GALGAS_lexicalExpressionAST var_rightExpression ;
      nt_lexical_5F_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_lexicalOrExpressionAST::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 468)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 465)) ;
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 465)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_string = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 475)) ;
  outArgument_outExpression = GALGAS_lexicalStringMatchAST::constructor_new (var_string  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 476)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 475)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 475)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 482)) ;
  GALGAS_lstring var_string = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 483)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 484)) ;
  GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 485)) ;
  outArgument_outExpression = GALGAS_lexicalStringNotMatchAST::constructor_new (var_string, var_errorMessage  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 486)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 482)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 483)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 484)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 485)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 482)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 483)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 484)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 485)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_character = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 492)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_lexicalCharacterMatchAST::constructor_new (var_character  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 494)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 496)) ;
    GALGAS_lchar var_upperBound = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
    outArgument_outExpression = GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (var_character, var_upperBound  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 498)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 492)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 496)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 492)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 496)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i30_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_characterSet = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 505)) ;
  outArgument_outExpression = GALGAS_lexicalCharacterSetMatchAST::constructor_new (var_characterSet  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 506)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 505)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 505)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i31_ (GALGAS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 512)) ;
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 513)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 514)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 517)) ;
      GALGAS_lstring var_sentAttribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 518)) ;
      var_sentAttributeList.addAssign_operation (var_selector, var_sentAttribute  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 519)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle ;
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
    var_theStyle = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 524)) ;
  } break ;
  case 2: {
    var_theStyle = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 526))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 526)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 529)) ;
  GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 530)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 531)) ;
  GALGAS_lexicalListEntryListAST var_entryList = GALGAS_lexicalListEntryListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 532)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList, inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 536)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 538)) ;
  ioArgument_ioLexicalListDeclarationList.addAssign_operation (var_name, var_theStyle, var_errorMessage, var_sentAttributeList, var_entryList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 539)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 512)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 513)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 517)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 518)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 524)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 529)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 530)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 531)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 536)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 538)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 512)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 513)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 517)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 518)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 524)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 529)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 530)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 531)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 536)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 538)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i32_ (GALGAS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_entrySpelling = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 545)) ;
  GALGAS_lstringlist var_optionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 546)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 549)) ;
    var_optionList.addAssign_operation (var_optionName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 550)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_terminalSpelling ;
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 554)) ;
    var_terminalSpelling = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 555)) ;
  } break ;
  case 2: {
    var_terminalSpelling = var_entrySpelling ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssign_operation (var_entrySpelling, var_terminalSpelling, var_optionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 559)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 545)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 549)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 554)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 555)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 545)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 549)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 554)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 555)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i33_ (GALGAS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 565)) ;
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 566)) ;
  ioArgument_ioLexicalAttributeList.addAssign_operation (var_typeName, var_name  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 567)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 565)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 566)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 565)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 566)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i34_ (GALGAS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 573)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 574)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
      GALGAS_lstring var_sentAttribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 578)) ;
      var_sentAttributeList.addAssign_operation (var_selector, var_sentAttribute  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 579)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 581)) ;
  GALGAS_lstringlist var_optionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 582)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 585)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_theStyle.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 587)), GALGAS_string ("duplicated style reference")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 587)) ;
      }
      var_theStyle = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 589)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 591)) ;
      var_optionList.addAssign_operation (var_optionName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 592)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 595)) ;
  GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 596)) ;
  ioArgument_ioTerminalDeclarationList.addAssign_operation (var_name, var_sentAttributeList, var_errorMessage, var_theStyle, var_optionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 597)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 573)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 578)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 585)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 589)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 591)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 595)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 596)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 573)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 578)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 585)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 589)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 591)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 595)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 596)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i35_ (GALGAS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 603)) ;
  GALGAS_lstring var_styleIdentifier = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
  const enumGalgasBool test_0 = var_styleIdentifier.mAttribute_string.reader_containsCharacter (GALGAS_char (TO_UNICODE (95)) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 605)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_styleIdentifier.reader_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("for compatibility with latex formatting, a style name should not contain '_' character")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 606)) ;
  }
  const enumGalgasBool test_2 = var_styleIdentifier.mAttribute_string.reader_containsCharacterInRange (GALGAS_char (TO_UNICODE (48)), GALGAS_char (TO_UNICODE (57)) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 608)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (var_styleIdentifier.reader_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("for compatibility with latex formatting, a style name should not contain any digit")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 609)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 611)) ;
  GALGAS_lstring var_comment = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
  ioArgument_ioLexicalStyleList.addAssign_operation (var_styleIdentifier, var_comment  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 613)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 603)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 611)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 603)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 611)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i36_ (GALGAS_externRoutineListAST & ioArgument_ioExternRoutineList,
                                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 620)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 621)) ;
  GALGAS_lstring var_routineName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 622)) ;
  GALGAS_lexicalExternRoutineFormalArgumentListAST var_lexicalRoutineFormalArgumentList = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 623)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
    case 2: {
      GALGAS_lexicalArgumentModeAST var_lexicalArgumentMode ;
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 628)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '\?!'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 630)) ;
        }
        var_lexicalArgumentMode = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 632)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 636)) ;
        }
        var_lexicalArgumentMode = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 638)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_lexicalTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 640)) ;
      GALGAS_lstring var_formalArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 641)) ;
      var_lexicalRoutineFormalArgumentList.addAssign_operation (var_lexicalArgumentMode, var_lexicalTypeName, var_formalArgumentName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 642)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_stringlist var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 644)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 649)) ;
      var_errorMessageList.addAssign_operation (var_errorMessageName.reader_string (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 650))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 650)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 652)) ;
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
  ioArgument_ioExternRoutineList.addAssign_operation (var_routineName, var_lexicalRoutineFormalArgumentList, var_errorMessageList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 655)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 620)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 622)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 628)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 640)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 641)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 649)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 652)) ;
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 620)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 622)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 628)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 640)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 641)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 649)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 652)) ;
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i37_ (GALGAS_externFunctionListAST & ioArgument_ioExternFunctionList,
                                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 662)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 663)) ;
  GALGAS_lstring var_functionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 664)) ;
  GALGAS_lexicalExternFunctionFormalArgumentListAST var_lexicalFunctionFormalArgumentList = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 665)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_34 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 668)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 670)) ;
      }
      GALGAS_lstring var_lexicalTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 672)) ;
      GALGAS_lstring var_formalArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 673)) ;
      var_lexicalFunctionFormalArgumentList.addAssign_operation (var_lexicalTypeName, var_formalArgumentName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 674)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 676)) ;
  GALGAS_lstring var_returnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 677)) ;
  ioArgument_ioExternFunctionList.addAssign_operation (var_functionName, var_lexicalFunctionFormalArgumentList, var_returnedTypeName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 678)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 662)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 663)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 664)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 668)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 672)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 673)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 676)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 677)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 662)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 663)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 664)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 668)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 672)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 673)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 676)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 677)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 24)) ;
  GALGAS_lstring var_optionComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 26)) ;
  GALGAS_commandLineOptionListAST var_options = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_OptionComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_option_ (var_options, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 32)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool (false), var_optionComponentName, var_options  COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 33))  COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_OptionComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_option_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_OptionComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_option_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_i1_ (GALGAS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mOptionTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 42)) ;
  GALGAS_lstring var_mOptionInternalName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 43)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 44)) ;
  GALGAS_lchar var_mOptionInvocationLetter = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 46)) ;
  GALGAS_lstring var_mOptionInvocationString = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 48)) ;
  GALGAS_lstring var_mOptionComment = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 49)) ;
  GALGAS_lstring var_defaultValue = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 50))  COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 50)) ;
  GALGAS_optionDefaultValueEnumAST var_optionDefaultValueKind ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind = GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 53)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 55)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 57)) ;
      var_optionDefaultValueKind = GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 58)) ;
    } break ;
    case 2: {
      GALGAS_luint var_v = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 60)) ;
      var_defaultValue = GALGAS_lstring::constructor_new (var_v.reader_uint (SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 61)).reader_string (SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 61)), var_v.reader_location (SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 61))  COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 61)) ;
      var_optionDefaultValueKind = GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 62)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssign_operation (var_mOptionTypeName, var_mOptionInternalName, var_mOptionInvocationLetter, var_mOptionInvocationString, var_mOptionComment, var_defaultValue, var_optionDefaultValueKind  COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 43)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 44)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 46)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 49)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 55)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 57)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 60)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 43)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 44)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 46)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 49)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 55)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 57)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3OptionComponentSyntax.galgas", 60)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_gui) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 26)) ;
  GALGAS_lstring var_mGUIName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 28)) ;
  GALGAS_lstringlist var_importedOptionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 29)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 30)) ;
  GALGAS_withLexiqueListAST var_withLexiqueList = GALGAS_withLexiqueListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_mKey = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 34)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 35)) ;
      GALGAS_lstring var_mValue = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 36))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 36)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_value = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 38)) ;
        var_mValue = GALGAS_lstring::constructor_new (var_mValue.reader_string (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 39)).add_operation (var_value.reader_string (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 39)), var_value.reader_location (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 39))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 39)) ;
        switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      var_simpleGlobalAttributes.addAssign_operation (var_mKey, var_mValue  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 42)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 44)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 46)) ;
        GALGAS_lstring var_optionReference = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 47)) ;
        var_importedOptionList.addAssign_operation (var_optionReference  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 48)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 50)) ;
        GALGAS_lstring var_lexiqueReference = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 51)) ;
        GALGAS_guiLabelListAST var_labels = GALGAS_guiLabelListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 52)) ;
        GALGAS_guiSimpleAttributeListAST var_simpleAttributes = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 53)) ;
        GALGAS_guiCompoundAttributeListAST var_compoundAttributes = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 54)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 55)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 58)) ;
            GALGAS_uint var_displayStyle ;
            switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
            case 1: {
              var_displayStyle = GALGAS_uint ((uint32_t) 0U) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 63)) ;
              var_displayStyle = GALGAS_uint ((uint32_t) 1U) ;
            } break ;
            default:
              break ;
            }
            GALGAS_terminalLabelListAST var_terminalList = GALGAS_terminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 66)) ;
            bool repeatFlag_3 = true ;
            while (repeatFlag_3) {
              GALGAS_lstring var_terminal = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 68)) ;
              GALGAS_uint var_displayFlags ;
              switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
              case 1: {
                var_displayFlags = GALGAS_uint ((uint32_t) 0U) ;
              } break ;
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 73)) ;
                var_displayFlags = GALGAS_uint ((uint32_t) 65535U) ;
              } break ;
              case 3: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 76)) ;
                GALGAS_luint var_leadingStrip = inCompiler->synthetizedAttribute_uint_33__32_value () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 77)) ;
                const enumGalgasBool test_4 = GALGAS_bool (kIsSupOrEqual, var_leadingStrip.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
                if (kBoolTrue == test_4) {
                  GALGAS_location location_5 (var_leadingStrip.reader_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_5, GALGAS_string ("leading strip should be < 15")  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 79)) ;
                }
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 81)) ;
                GALGAS_luint var_endingStrip = inCompiler->synthetizedAttribute_uint_33__32_value () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 82)) ;
                const enumGalgasBool test_6 = GALGAS_bool (kIsSupOrEqual, var_endingStrip.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  GALGAS_location location_7 (var_endingStrip.reader_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_7, GALGAS_string ("tail strip should be < 15")  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 84)) ;
                }
                var_displayFlags = var_leadingStrip.mAttribute_uint.left_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 86)).operator_or (var_endingStrip.reader_uint (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 86)) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 86)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 87)) ;
              } break ;
              default:
                break ;
              }
              var_terminalList.addAssign_operation (var_terminal, var_displayFlags  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 89)) ;
              switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 91)) ;
              } break ;
              default:
                repeatFlag_3 = false ;
                break ;
              }
            }
            var_labels.addAssign_operation (var_displayStyle, var_terminalList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 93))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 93)) ;
          } break ;
          case 3: {
            GALGAS_lstring var_key = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 95)) ;
            GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 96)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 97)) ;
            GALGAS_lstring var_value = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 98))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 98)) ;
            bool repeatFlag_8 = true ;
            while (repeatFlag_8) {
              GALGAS_lstring var_v = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 100)) ;
              var_value = GALGAS_lstring::constructor_new (var_value.reader_string (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 101)).add_operation (var_v.reader_string (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 101)), var_v.reader_location (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 101))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 101)) ;
              switch (select_galgas_33_GuiComponentSyntax_7 (inCompiler)) {
              case 2: {
              } break ;
              default:
                repeatFlag_8 = false ;
                break ;
              }
            }
            var_compoundAttributes.addAssign_operation (var_key, var_name, var_value  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 104)) ;
          } break ;
          case 4: {
            GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 106)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 107)) ;
            GALGAS_lstring var_value = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 108)) ;
            var_simpleAttributes.addAssign_operation (var_name, var_value  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 109)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 111)) ;
        var_withLexiqueList.addAssign_operation (var_lexiqueReference, var_labels, var_simpleAttributes, var_compoundAttributes  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 112)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 120)) ;
  ioArgument_ioDeclarations.mAttribute_mGUIComponentList.addAssign_operation (var_mGUIName, var_importedOptionList, var_simpleGlobalAttributes, var_withLexiqueList  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 121)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_gui) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 34)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 35)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 38)) ;
        switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 44)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 46)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 47)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 50)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 51)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 55)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 58)) ;
            switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 63)) ;
            } break ;
            default:
              break ;
            }
            bool repeatFlag_3 = true ;
            while (repeatFlag_3) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 68)) ;
              switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
              case 1: {
              } break ;
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 73)) ;
              } break ;
              case 3: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 76)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 77)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 81)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 82)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 87)) ;
              } break ;
              default:
                break ;
              }
              switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 91)) ;
              } break ;
              default:
                repeatFlag_3 = false ;
                break ;
              }
            }
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 95)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 96)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 97)) ;
            bool repeatFlag_4 = true ;
            while (repeatFlag_4) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 100)) ;
              switch (select_galgas_33_GuiComponentSyntax_7 (inCompiler)) {
              case 2: {
              } break ;
              default:
                repeatFlag_4 = false ;
                break ;
              }
            }
          } break ;
          case 4: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 106)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 107)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 108)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 111)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 120)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_gui) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 34)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 35)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 38)) ;
        switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 44)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 46)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 47)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 50)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 51)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 55)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 58)) ;
            switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 63)) ;
            } break ;
            default:
              break ;
            }
            bool repeatFlag_3 = true ;
            while (repeatFlag_3) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 68)) ;
              switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
              case 1: {
              } break ;
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 73)) ;
              } break ;
              case 3: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 76)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 77)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 81)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 82)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 87)) ;
              } break ;
              default:
                break ;
              }
              switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 91)) ;
              } break ;
              default:
                repeatFlag_3 = false ;
                break ;
              }
            }
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 95)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 96)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 97)) ;
            bool repeatFlag_4 = true ;
            while (repeatFlag_4) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 100)) ;
              switch (select_galgas_33_GuiComponentSyntax_7 (inCompiler)) {
              case 2: {
              } break ;
              default:
                repeatFlag_4 = false ;
                break ;
              }
            }
          } break ;
          case 4: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 106)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 107)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 108)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 111)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 120)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_syntax) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 42)) ;
  GALGAS_lstring var_syntaxComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 43)) ;
  GALGAS_lstring var_importedLexiqueReference ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 47)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 49)) ;
    var_importedLexiqueReference = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 50)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasTranslateFeature ;
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_featureName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 58)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_featureName.mAttribute_string.objectCompare (GALGAS_string ("translate"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (var_featureName.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("only 'feature translate' can be declared here")  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 60)) ;
    }
    var_hasTranslateFeature = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 64)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 66)) ;
  GALGAS_syntaxRuleListAST var_ruleList = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 67)) ;
  GALGAS_semanticDeclarationListAST var_mSemanticDeclarations = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 68)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (var_nonterminalDeclarationList, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (var_ruleList, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 76)) ;
  ioArgument_ioDeclarations.mAttribute_mSyntaxComponentList.addAssign_operation (var_syntaxComponentName, var_importedLexiqueReference, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 80)), var_nonterminalDeclarationList, var_ruleList, GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 83)), var_hasTranslateFeature  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_syntax) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 43)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 49)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 50)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_syntax) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 43)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 49)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 50)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_syntax) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extension) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 96)) ;
  GALGAS_lstring var_syntaxComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 98)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 100)) ;
  GALGAS_syntaxRuleListAST var_ruleList = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 101)) ;
  GALGAS_semanticDeclarationListAST var_mSemanticDeclarations = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (var_nonterminalDeclarationList, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (var_ruleList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 110)) ;
  ioArgument_ioDeclarations.mAttribute_mSyntaxExtensions.addAssign_operation (var_syntaxComponentName.mAttribute_string, var_syntaxComponentName, var_nonterminalDeclarationList, var_ruleList  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_syntax) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extension) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 96)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 98)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 110)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_syntax) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extension) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 96)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 98)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 110)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_label_5F_declaration_i2_ (const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                            GALGAS_nonTerminalLabelListAST & ioArgument_ioNonTerminalLabelList,
                                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_formalParameterListAST var_mFormalParameters ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameters, inCompiler) ;
  ioArgument_ioNonTerminalLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameters, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 129))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_label_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_label_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i3_ (GALGAS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 135)) ;
  GALGAS_lstring var_mNonterminalName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_non_5F_terminal_5F_symbol) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 136)) ;
  GALGAS_nonTerminalLabelListAST var_mLabels = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 137)) ;
  nt_nonterminal_5F_label_5F_declaration_ (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 138))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 138)), var_mLabels, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 141)) ;
      GALGAS_lstring var_labelName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 142)) ;
      nt_nonterminal_5F_label_5F_declaration_ (var_labelName, var_mLabels, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssign_operation (var_mNonterminalName, var_mLabels  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 135)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_non_5F_terminal_5F_symbol) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 136)) ;
  nt_nonterminal_5F_label_5F_declaration_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 141)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 142)) ;
      nt_nonterminal_5F_label_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 135)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_non_5F_terminal_5F_symbol) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 136)) ;
  nt_nonterminal_5F_label_5F_declaration_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 141)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 142)) ;
      nt_nonterminal_5F_label_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i4_ (const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                GALGAS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_formalParameterListAST var_mFormalParameters ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameters, inCompiler) ;
  GALGAS_location var_endOfArguments = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 161)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 162)) ;
  GALGAS_syntaxInstructionList var_mSyntaxInstructionList ;
  nt_syntax_5F_instruction_5F_list_ (var_mSyntaxInstructionList, inCompiler) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameters, var_endOfArguments, var_mSyntaxInstructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 169))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 164)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 162)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 170)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 162)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i5_ (GALGAS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 176)) ;
  GALGAS_lstring var_mNonterminalName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_non_5F_terminal_5F_symbol) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 177)) ;
  GALGAS_lstring var_labelName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 178))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 178)) ;
  GALGAS_syntaxRuleLabelListAST var_mLabelList = GALGAS_syntaxRuleLabelListAST::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 179)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (var_labelName, var_mLabelList, inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 183)) ;
      var_labelName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 184)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioRuleList.addAssign_operation (var_mNonterminalName, var_mLabelList  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 176)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_non_5F_terminal_5F_symbol) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 177)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 183)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 184)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 176)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_non_5F_terminal_5F_symbol) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 177)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 183)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 184)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i6_ (GALGAS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GALGAS_syntaxInstructionList::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 198)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 201)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction ;
      nt_semantic_5F_instruction_ (var_instruction, inCompiler) ;
      outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 204)) ;
    } break ;
    case 4: {
      GALGAS_syntaxInstructionAST var_instruction ;
      nt_syntax_5F_instruction_ (var_instruction, inCompiler) ;
      outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 207)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 201)) ;
    } break ;
    case 3: {
      nt_semantic_5F_instruction_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_syntax_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 201)) ;
    } break ;
    case 3: {
      nt_semantic_5F_instruction_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_syntax_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mLabelName ;
  switch (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler)) {
  case 1: {
    var_mLabelName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 225))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 225)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 227)) ;
    var_mLabelName = GALGAS_lstring::constructor_new (GALGAS_string ("parse"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 228))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 228)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 230)) ;
    var_mLabelName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 231)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mNonterminalName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_non_5F_terminal_5F_symbol) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 233)) ;
  GALGAS_actualParameterListAST var_mActualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_mActualParameterList, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult ;
  switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 238)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 240)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_nonterminalCallInstruction::constructor_new (var_mNonterminalName.reader_location (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 244)), var_mNonterminalName, var_mLabelName, var_mActualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 243)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 227)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 230)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 231)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_non_5F_terminal_5F_symbol) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 233)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 240)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 227)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 230)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 231)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_non_5F_terminal_5F_symbol) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 233)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 240)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_terminalName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 273)) ;
  GALGAS_actualInputParameterListAST var_actualInputParameterList ;
  nt_actual_5F_input_5F_parameter_5F_list_ (var_actualInputParameterList, inCompiler) ;
  GALGAS__32_lstringlist var_indexNameList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 275)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 278)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_indexName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 280)) ;
      GALGAS_lstring var_postfixName ;
      switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
      case 1: {
        var_postfixName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 283)) ;
      } break ;
      case 2: {
        var_postfixName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 285)) ;
      } break ;
      default:
        break ;
      }
      var_indexNameList.addAssign_operation (var_indexName, var_postfixName  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 287)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 289)) ;
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
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken ;
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 296)) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 297)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 299)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingToken, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_terminalCheckInstruction::constructor_new (var_terminalName.reader_location (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 304)), var_terminalName, var_actualInputParameterList, var_indexNameList, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 303)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 273)) ;
  nt_actual_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 278)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 280)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 285)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 289)) ;
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
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 299)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 273)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 278)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 280)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 285)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 289)) ;
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
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 299)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 324)) ;
  GALGAS_location var_mRepeatInstructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 325)) ;
  GALGAS_syntaxInstructionList var_mRepeatedInstructionList ;
  nt_syntax_5F_instruction_5F_list_ (var_mRepeatedInstructionList, inCompiler) ;
  GALGAS_location var_endOf_5F_repeated_5F_instructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 327)) ;
  GALGAS_listOfSyntaxInstructionList var_mRepeatBranchList = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 328)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 330)) ;
    GALGAS_syntaxInstructionList var_mInstructionList ;
    nt_syntax_5F_instruction_5F_list_ (var_mInstructionList, inCompiler) ;
    var_mRepeatBranchList.addAssign_operation (var_mInstructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 332))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 332)) ;
    switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 335)) ;
  GALGAS_location var_endOf_5F_repeat_5F_instruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 336)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 339)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("repeat"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the terminator attribute should be '%repeat'")  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 341)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_repeatInstruction::constructor_new (var_mRepeatInstructionLocation, var_mRepeatedInstructionList, var_endOf_5F_repeated_5F_instructions, var_mRepeatBranchList, var_endOf_5F_repeat_5F_instruction  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 344)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 324)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 330)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 335)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 339)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 324)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 330)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 335)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 339)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i10_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 364)) ;
  GALGAS_location var_mSelectInstructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 365)) ;
  GALGAS_listOfSyntaxInstructionList var_mSelectBranchList = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 366)) ;
  GALGAS_syntaxInstructionList var_il ;
  nt_syntax_5F_instruction_5F_list_ (var_il, inCompiler) ;
  var_mSelectBranchList.addAssign_operation (var_il, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 368))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 368)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 370)) ;
    GALGAS_syntaxInstructionList var_instructionList ;
    nt_syntax_5F_instruction_5F_list_ (var_instructionList, inCompiler) ;
    var_mSelectBranchList.addAssign_operation (var_instructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 372))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 372)) ;
    switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 375)) ;
  GALGAS_location var_endOf_5F_select_5F_instruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 376)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 379)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("select"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the terminator attribute should be '%select'")  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 381)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_selectInstruction::constructor_new (var_mSelectInstructionLocation, var_mSelectBranchList, var_endOf_5F_select_5F_instruction  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 384)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 364)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 370)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 375)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 379)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 364)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 370)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 375)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 379)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 402)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 403)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 404)) ;
  GALGAS_listOfSyntaxInstructionList var_mParseDoBranchList = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 405)) ;
  GALGAS_syntaxInstructionList var_il ;
  nt_syntax_5F_instruction_5F_list_ (var_il, inCompiler) ;
  var_mParseDoBranchList.addAssign_operation (var_il, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 407))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 407)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 409)) ;
    GALGAS_syntaxInstructionList var_instructionList ;
    nt_syntax_5F_instruction_5F_list_ (var_instructionList, inCompiler) ;
    var_mParseDoBranchList.addAssign_operation (var_instructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 411))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 411)) ;
    switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 414)) ;
  GALGAS_location var_endOfInstruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 415)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 418)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the terminator attribute should be '%parse'")  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 420)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseRewindInstruction::constructor_new (var_instructionLocation, var_mParseDoBranchList, var_endOfInstruction  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 423)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 402)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 404)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 409)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 414)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 418)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 402)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 404)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 409)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 414)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 418)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhenInstruction_i12_ (GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 436)) ;
  nt_syntax_5F_instruction_5F_list_ (outArgument_outElseInstructionList, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhenInstruction_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 436)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhenInstruction_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 436)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhenInstruction_i13_ (GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 443)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 444)) ;
  GALGAS_semanticExpressionAST var_whenExpression ;
  nt_expression_ (var_whenExpression, inCompiler) ;
  GALGAS_location var_endOfWhenExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 447)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 448)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList ;
  nt_syntax_5F_instruction_5F_list_ (var_whenInstructionList, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 451)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList ;
  nt_branchOfParseWhenInstruction_ (var_elseInstructionList, inCompiler) ;
  GALGAS_location var_endOfElseInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 455)) ;
  outArgument_outElseInstructionList = GALGAS_syntaxInstructionList::constructor_emptyList (SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 456)) ;
  outArgument_outElseInstructionList.addAssign_operation (GALGAS_parseWhenInstruction::constructor_new (var_instructionLocation, var_whenExpression, var_endOfWhenExpression, var_whenInstructionList, var_endOfWhenInstructions, var_elseInstructionList, var_endOfElseInstructions  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 457))  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 457)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhenInstruction_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 443)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 448)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhenInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhenInstruction_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 443)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 448)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhenInstruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i14_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 471)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 472)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 473)) ;
  GALGAS_semanticExpressionAST var_whenExpression ;
  nt_expression_ (var_whenExpression, inCompiler) ;
  GALGAS_location var_endOfWhenExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 475)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 476)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList ;
  nt_syntax_5F_instruction_5F_list_ (var_whenInstructionList, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 478)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList ;
  nt_branchOfParseWhenInstruction_ (var_elseInstructionList, inCompiler) ;
  GALGAS_location var_endOfElseInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 481)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 482)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 485)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the terminator attribute should be '%parse'")  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 487)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseWhenInstruction::constructor_new (var_instructionLocation, var_whenExpression, var_endOfWhenExpression, var_whenInstructionList, var_endOfWhenInstructions, var_elseInstructionList, var_endOfElseInstructions  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 490)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 471)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 473)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 476)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhenInstruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 482)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 485)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 471)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 473)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 476)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhenInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 482)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 485)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 508)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 509)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 510)) ;
  GALGAS_semanticExpressionAST var_variantExpression ;
  nt_expression_ (var_variantExpression, inCompiler) ;
  GALGAS_location var_endOfVariantExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 512)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 513)) ;
  GALGAS_semanticExpressionAST var_whileExpression ;
  nt_expression_ (var_whileExpression, inCompiler) ;
  GALGAS_location var_endOfWhileExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 515)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 516)) ;
  GALGAS_syntaxInstructionList var_instructionList ;
  nt_syntax_5F_instruction_5F_list_ (var_instructionList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 518)) ;
  GALGAS_location var_endOfInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 519)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 522)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the terminator attribute should be '%parse'")  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 524)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseLoopInstruction::constructor_new (var_instructionLocation, var_variantExpression, var_endOfVariantExpression, var_whileExpression, var_endOfWhileExpression, var_instructionList, var_endOfInstructionList  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 527)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 508)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 510)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 513)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 516)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 518)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 522)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_parse) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 508)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 510)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 513)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 516)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 518)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 522)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 549)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 550)) ;
  GALGAS_semanticExpressionAST var_sentExpression ;
  nt_expression_ (var_sentExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_syntaxSendInstruction::constructor_new (var_instructionLocation, var_sentExpression  COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 552)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 549)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3SyntaxComponentSyntax.galgas", 549)) ;
  nt_expression_indexing (inCompiler) ;
}

