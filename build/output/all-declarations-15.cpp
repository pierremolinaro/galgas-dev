#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                             GGS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticInstructionAST var_instruction_3346 ;
      nt_semantic_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_3346, inCompiler) ;
      outArgument_outInstructionsList.addAssignOperation (var_instruction_3346  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 61)) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 64)) ;
        } break ;
        case 2: {
          GGS_string var_separator_3469 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 66)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_3469.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 67)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 67)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 68)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 68)) ;
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
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 76)) ;
    GGS_location var_instructionLocation_3753 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 77)) ;
    GGS_CommaSeparatedExpressionList var_testExpression_3854 ;
    nt_comma_5F_separated_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_testExpression_3854, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 79)) ;
    GGS_semanticInstructionListAST var_else_5F_instructionList_3946 ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_else_5F_instructionList_3946, inCompiler) ;
    GGS_location var_endOf_5F_else_5F_branch_3978 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 81)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 82)) ;
    GGS_semanticInstructionListAST var_then_5F_instructionList_4088 ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_then_5F_instructionList_4088, inCompiler) ;
    GGS_location var_endOf_5F_then_5F_branch_4120 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 84)) ;
    GGS_ifInstructionAST var_instruction_4165 = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_3753, var_testExpression_3854, var_then_5F_instructionList_4088, var_endOf_5F_then_5F_branch_4120, var_else_5F_instructionList_3946, var_endOf_5F_else_5F_branch_3978, inCompiler COMMA_HERE) ;
    outArgument_outInstructionsList.addAssignOperation (var_instruction_4165  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 93)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_5F_ggs_33__indexing (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 64)) ;
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
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 76)) ;
    nt_comma_5F_separated_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 79)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 82)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 102)) ;
  GGS_bool var_isOnce_4768 = GGS_bool (false) ;
  GGS_bool var_isUsefull_4791 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 107)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isOnce_4768.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 109)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 109)) ;
        }
      }
      var_isOnce_4768 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 113)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_4791.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 115)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 115)) ;
        }
      }
      var_isUsefull_4791 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_functionName_5130 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 119)) ;
  nt_function_5F_declaration_5F_ggs_33__ (var_isOnce_4768, var_isUsefull_4791, GGS_bool (false), var_functionName_5130, ioArgument_ioDeclarations, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 107)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 113)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 119)) ;
  nt_function_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_ (const GGS_bool constinArgument_inIsOnce,
                                                                                                                     const GGS_bool constinArgument_inIsUsefull,
                                                                                                                     const GGS_bool constinArgument_inIsPrivate,
                                                                                                                     const GGS_lstring constinArgument_inFunctionName,
                                                                                                                     GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  GGS_formalInputParameterListAST var_formalInputParameterList_5806 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_5806, inCompiler) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsOnce.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::greaterThan, var_formalInputParameterList_5806.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 131)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inFunctionName.readProperty_location (), GGS_string ("an 'once' function should has no argument"), fixItArray1  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 132)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 134)) ;
  GGS_lstring var_resultTypeName_6042 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_resultTypeName_6042, inCompiler) ;
  GGS_lstring var_resultVariableName_6066 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 136)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 137)) ;
  GGS_semanticInstructionListAST var_functionInstructionList_6184 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_functionInstructionList_6184, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 139)) ;
  GGS_location var_endOfFunctionInstructionList_6225 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 140)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inIsOnce.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), constinArgument_inFunctionName, var_resultTypeName_6042, var_resultVariableName_6066, var_functionInstructionList_6184, var_endOfFunctionInstructionList_6225, constinArgument_inIsPrivate, constinArgument_inIsUsefull, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 142)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (GGS_bool (false), constinArgument_inFunctionName, var_formalInputParameterList_5806, var_resultTypeName_6042, constinArgument_inIsUsefull, var_resultVariableName_6066, var_functionInstructionList_6184, var_endOfFunctionInstructionList_6225, constinArgument_inIsPrivate, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 153)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 134)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 137)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 139)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 171)) ;
  GGS_bool var_isOnce_7158 = GGS_bool (false) ;
  GGS_bool var_isUsefull_7181 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 176)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isOnce_7158.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 178)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 178)) ;
        }
      }
      var_isOnce_7158 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 182)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_7181.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 184)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 184)) ;
        }
      }
      var_isUsefull_7181 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_functionName_7520 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 188)) ;
  nt_function_5F_declaration_5F_ggs_33__ (var_isOnce_7158, var_isUsefull_7181, GGS_bool (true), var_functionName_7520, ioArgument_ioDeclarations, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 171)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 176)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 182)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 188)) ;
  nt_function_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 197)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 198)) ;
  GGS_bool var_isUsefull_8055 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 202)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_8055.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 204)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 204)) ;
        }
      }
      var_isUsefull_8055 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_8258 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 208)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_8365 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_8365, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 210)) ;
  GGS_lstring var_resultTypeName_8460 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_resultTypeName_8460, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externFunctionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc (GGS_bool (false), var_mActionName_8258, var_formalInputParameterList_8365, var_resultTypeName_8460, var_isUsefull_8055, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 212)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 197)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 198)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 202)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 208)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 210)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 233)) ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 235)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 236)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_lstring var_actualParameterTypeName_9578 ;
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterTypeName_9578, inCompiler) ;
    GGS_lstring var_actualParameterName_9628 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 239)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::init_21__21_ (var_actualParameterTypeName_9578, var_actualParameterName_9628, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 242)) ;
    GGS_lstring var_actualParameterTypeName_9857 ;
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterTypeName_9857, inCompiler) ;
    GGS_lstring var_actualParameterName_9907 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 244)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::init_21__21_ (var_actualParameterTypeName_9857, var_actualParameterName_9907, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_lstring var_actualParameterName_10089 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 247)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::init_21_ (var_actualParameterName_10089, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 233)) ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 235)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 239)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 242)) ;
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 244)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 247)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GGS_actualInputParameterListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 259)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_10634 ;
      switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
      case 1: {
        var_selector_10634 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 263)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 265)) ;
        var_selector_10634 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 266)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 269)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_10634, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 270)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 272)) ;
        GGS_lstring var_actualParameterTypeName_10926 ;
        switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_10926 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 275)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterTypeName_10926, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_11151 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 279)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_10634, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_10926, var_actualParameterName_11151, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 280)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 284)) ;
        GGS_lstring var_actualParameterTypeName_11378 ;
        switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_11378 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 287)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterTypeName_11378, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_11604 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 291)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_10634, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_11378, var_actualParameterName_11604, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 292)) ;
      } break ;
      case 4: {
        GGS_lstring var_actualParameterName_11821 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 296)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_10634, GGS_inputParameterVariable::init_21_ (var_actualParameterName_11821, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 297)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 300)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 302)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 259)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 263)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 265)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 269)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 272)) ;
        switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 279)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 284)) ;
        switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 291)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 296)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 300)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 302)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas3", 44)) ;
  GGS_location var_instructionLocation_2136 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas3", 45)) ;
  GGS_logListAST var_logList_2193 = GGS_logListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 1: {
      GGS_lstring var_loggedVariableName_2258 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 49)) ;
      var_logList_2193.addAssignOperation (var_loggedVariableName_2258, GGS_varInExpressionAST::init_21_ (var_loggedVariableName_2258, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas3", 50)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas3", 52)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 53)) ;
      GGS_lstring var_propertyName_2423 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 54)) ;
      var_logList_2193.addAssignOperation (var_propertyName_2423, GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_propertyName_2423.readProperty_location (), GGS_selfInExpressionAST::init_21_ (var_propertyName_2423.readProperty_location (), inCompiler COMMA_HERE), var_propertyName_2423, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas3", 55)) ;
    } break ;
    case 3: {
      GGS_lstring var_logMessage_2644 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 59)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 60)) ;
      GGS_semanticExpressionAST var_logExpression_2718 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_logExpression_2718, inCompiler) ;
      var_logList_2193.addAssignOperation (var_logMessage_2644, var_logExpression_2718  COMMA_SOURCE_FILE ("instruction-log.galgas3", 62)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_logInstructionAST::init_21__21_ (var_instructionLocation_2136, var_logList_2193, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas3", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas3", 52)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 53)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 54)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 59)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 60)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 28)) ;
  GGS_location var_instructionLocation_1622 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 30)) ;
  GGS_lstring var_methodName_1690 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 31)) ;
  GGS_actualParameterListAST var_actualParameterList_1784 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_actualParameterList_1784, inCompiler) ;
  outArgument_outInstruction = GGS_superMethodCallInstructionAST::init_21__21__21_ (var_instructionLocation_1622, var_methodName_1690, var_actualParameterList_1784, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 31)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_fixitListAST & outArgument_outFixitListAST,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GGS_fixitListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas3", 57)) ;
    GGS_bool var_hasFixItRemove_2645 = GGS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas3", 61)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_hasFixItRemove_2645.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 63)), GGS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas3", 63)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas3", 65))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 65)) ;
          var_hasFixItRemove_2645 = GGS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas3", 69)) ;
        GGS_location var_errorLocation_2942 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 70)) ;
        GGS_semanticExpressionAST var_expression_3046 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3046, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItReplace (var_expression_3046, var_errorLocation_2942  COMMA_SOURCE_FILE ("instruction-error.galgas3", 72))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 72)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas3", 74)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas3", 74)) ;
        GGS_location var_errorLocation_3199 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 75)) ;
        GGS_semanticExpressionAST var_expression_3303 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3303, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItInsertAfter (var_expression_3303, var_errorLocation_3199  COMMA_SOURCE_FILE ("instruction-error.galgas3", 77))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 77)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas3", 79)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas3", 79)) ;
        GGS_location var_errorLocation_3461 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 80)) ;
        GGS_semanticExpressionAST var_expression_3565 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3565, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItInsertBefore (var_expression_3565, var_errorLocation_3461  COMMA_SOURCE_FILE ("instruction-error.galgas3", 82))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 82)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas3", 57)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas3", 61)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas3", 69)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas3", 74)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas3", 74)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas3", 79)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas3", 79)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
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

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas3", 91)) ;
  GGS_location var_instructionLocation_3972 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 93)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_4086 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReceiverExpression_4086, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 95)) ;
  GGS_semanticExpressionAST var_mErrorExpression_4184 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mErrorExpression_4184, inCompiler) ;
  GGS_lstringlist var_mBuiltVariableList_4210 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas3", 100)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_builtVariableName_4318 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas3", 102)) ;
      var_mBuiltVariableList_4210.addAssignOperation (var_builtVariableName_4318  COMMA_SOURCE_FILE ("instruction-error.galgas3", 103)) ;
      if (select_galgas_33_InstructionsSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 105)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_fixitListAST var_fixitListAST_4483 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_4483, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 109)) ;
  outArgument_outInstruction = GGS_errorInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_3972, var_mReceiverExpression_4086, var_mErrorExpression_4184, var_mBuiltVariableList_4210, var_fixitListAST_4483, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 93)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 95)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas3", 100)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas3", 102)) ;
      if (select_galgas_33_InstructionsSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 105)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 28)) ;
  GGS_location var_instructionLocation_1621 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 30)) ;
  GGS_actualOutputArgumentList var_expressionList_1761 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_1761, inCompiler) ;
  outArgument_outInstruction = GGS_selfPlusEqualElementsInstructionAST::init_21__21_ (var_instructionLocation_1621, var_expressionList_1761, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 30)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 42)) ;
  GGS_location var_instructionLocation_2173 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 44)) ;
  GGS_semanticExpressionAST var_expression_2288 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2288, inCompiler) ;
  outArgument_outInstruction = GGS_selfPlusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_2173, var_expression_2288, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 44)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 56)) ;
  GGS_location var_instructionLocation_2694 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 58)) ;
  GGS_semanticExpressionAST var_expression_2809 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2809, inCompiler) ;
  outArgument_outInstruction = GGS_selfMinusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_2694, var_expression_2809, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 58)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 70)) ;
  GGS_location var_instructionLocation_3216 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 72)) ;
  GGS_semanticExpressionAST var_expression_3331 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3331, inCompiler) ;
  outArgument_outInstruction = GGS_selfMulEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_3216, var_expression_3331, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 72)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 84)) ;
  GGS_location var_instructionLocation_3736 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 86)) ;
  GGS_semanticExpressionAST var_expression_3851 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3851, inCompiler) ;
  outArgument_outInstruction = GGS_selfDivEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_3736, var_expression_3851, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 86)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas3", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 36)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas3", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 36)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                              const GGS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_receiverName_2545 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 45)) ;
  GGS_location var_instructionLocation_2567 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 46)) ;
  GGS_lstringlist var_propertyList_2625 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 50)) ;
      GGS_lstring var_attributeName_2700 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 51)) ;
      var_propertyList_2625.addAssignOperation (var_attributeName_2700  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 52)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 55)) ;
    GGS_semanticExpressionAST var_expression_2853 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2853, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2567, constinArgument_inHasSelfPrefix, var_receiverName_2545, var_propertyList_2625, GGS_opAssignmentOperator::class_func_minusAssign (SOURCE_FILE ("instruction-concat.galgas3", 62)), var_expression_2853, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 66)) ;
    GGS_semanticExpressionAST var_expression_3162 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3162, inCompiler) ;
    outArgument_outInstruction = GGS_plusPlusEqualElementInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_2567, constinArgument_inHasSelfPrefix, var_receiverName_2545, var_propertyList_2625, var_expression_3162, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 76)) ;
    switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
    case 1: {
      GGS_actualOutputArgumentList var_expressionList_3490 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_3490, inCompiler) ;
      outArgument_outInstruction = GGS_plusEqualElementsInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_2567, constinArgument_inHasSelfPrefix, var_receiverName_2545, var_propertyList_2625, var_expressionList_3490, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_semanticExpressionAST var_expression_3790 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3790, inCompiler) ;
      outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2567, constinArgument_inHasSelfPrefix, var_receiverName_2545, var_propertyList_2625, GGS_opAssignmentOperator::class_func_plusAssign (SOURCE_FILE ("instruction-concat.galgas3", 93)), var_expression_3790, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 98)) ;
    GGS_semanticExpressionAST var_expression_4123 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_4123, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2567, constinArgument_inHasSelfPrefix, var_receiverName_2545, var_propertyList_2625, GGS_opAssignmentOperator::class_func_mulAssign (SOURCE_FILE ("instruction-concat.galgas3", 105)), var_expression_4123, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 109)) ;
    GGS_semanticExpressionAST var_expression_4429 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_4429, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2567, constinArgument_inHasSelfPrefix, var_receiverName_2545, var_propertyList_2625, GGS_opAssignmentOperator::class_func_andAssign (SOURCE_FILE ("instruction-concat.galgas3", 116)), var_expression_4429, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 120)) ;
    GGS_semanticExpressionAST var_expression_4735 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_4735, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2567, constinArgument_inHasSelfPrefix, var_receiverName_2545, var_propertyList_2625, GGS_opAssignmentOperator::class_func_orAssign (SOURCE_FILE ("instruction-concat.galgas3", 127)), var_expression_4735, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 131)) ;
    GGS_semanticExpressionAST var_expression_5040 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_5040, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2567, constinArgument_inHasSelfPrefix, var_receiverName_2545, var_propertyList_2625, GGS_opAssignmentOperator::class_func_xorAssign (SOURCE_FILE ("instruction-concat.galgas3", 138)), var_expression_5040, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 142)) ;
    GGS_semanticExpressionAST var_expression_5346 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_5346, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2567, constinArgument_inHasSelfPrefix, var_receiverName_2545, var_propertyList_2625, GGS_opAssignmentOperator::class_func_divAssign (SOURCE_FILE ("instruction-concat.galgas3", 149)), var_expression_5346, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    GGS_actualParameterListAST var_actualParameterList_5654 ;
    nt_actual_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_actualParameterList_5654, inCompiler) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inHasSelfPrefix.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_propertyList_2625.getter_count (SOURCE_FILE ("instruction-concat.galgas3", 155)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2567, GGS_selfInExpressionAST::init_21_ (var_instructionLocation_2567, inCompiler COMMA_HERE), var_receiverName_2545, var_actualParameterList_5654, inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GGS_lstring var_methodName_6013 ;
          {
          var_propertyList_2625.setter_popLast (var_methodName_6013, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas3", 163)) ;
          }
          GGS_semanticExpressionAST var_receiverExpression_6062 = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 164)), inCompiler COMMA_HERE) ;
          var_receiverExpression_6062 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_receiverName_2545.readProperty_location (), var_receiverExpression_6062, var_receiverName_2545, inCompiler COMMA_HERE) ;
          UpEnumerator_lstringlist enumerator_6262 (var_propertyList_2625) ;
          while (enumerator_6262.hasCurrentObject ()) {
            var_receiverExpression_6062 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_6262.current_mValue (HERE).readProperty_location (), var_receiverExpression_6062, enumerator_6262.current_mValue (HERE), inCompiler COMMA_HERE) ;
            enumerator_6262.gotoNextObject () ;
          }
          outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2567, var_receiverExpression_6062, var_methodName_6013, var_actualParameterList_5654, inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_propertyList_2625.getter_count (SOURCE_FILE ("instruction-concat.galgas3", 176)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outInstruction = GGS_procCallInstructionAST::init_21__21__21_ (var_receiverName_2545.readProperty_location (), var_receiverName_2545, var_actualParameterList_5654, inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GGS_lstring var_methodName_6875 ;
        {
        var_propertyList_2625.setter_popLast (var_methodName_6875, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas3", 183)) ;
        }
        GGS_semanticExpressionAST var_receiverExpression_6922 = GGS_varInExpressionAST::init_21_ (var_receiverName_2545, inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_6992 (var_propertyList_2625) ;
        while (enumerator_6992.hasCurrentObject ()) {
          var_receiverExpression_6922 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_6992.current_mValue (HERE).readProperty_location (), var_receiverExpression_6922, enumerator_6992.current_mValue (HERE), inCompiler COMMA_HERE) ;
          enumerator_6992.gotoNextObject () ;
        }
        outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2567, var_receiverExpression_6922, var_methodName_6875, var_actualParameterList_5654, inCompiler COMMA_HERE) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 50)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 51)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 55)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 66)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 76)) ;
    switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 98)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 109)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 120)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 131)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 142)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 9: {
    nt_actual_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                           GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_selector_7706 ;
    switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
    case 1: {
      var_selector_7706 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 206)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 208)) ;
      var_selector_7706 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas3", 209)) ;
    } break ;
    default:
      break ;
    }
    GGS_semanticExpressionAST var_expression_7890 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_7890, inCompiler) ;
    outArgument_outExpressionList.addAssignOperation (var_selector_7706, var_expression_7890, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 212))  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 212)) ;
    if (select_galgas_33_InstructionsSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 206)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 208)) ;
    } break ;
    default:
      break ;
    }
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas3", 38)) ;
  GGS_location var_instructionLocation_2053 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas3", 39)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_2159 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReceiverExpression_2159, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas3", 41)) ;
  GGS_semanticExpressionAST var_mWarningExpression_2257 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mWarningExpression_2257, inCompiler) ;
  GGS_fixitListAST var_fixitListAST_2333 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_2333, inCompiler) ;
  outArgument_outInstruction = GGS_warningInstructionAST::init_21__21__21__21_ (var_instructionLocation_2053, var_mReceiverExpression_2159, var_mWarningExpression_2257, var_fixitListAST_2333, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas3", 38)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas3", 41)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                               GGS_CommaSeparatedExpressionList & outArgument_outExpressionList,
                                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_CommaSeparatedExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
      GGS_lstring var_varName_1696 ;
      GGS_bool var_isConstant_1722 ;
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 34)) ;
        var_varName_1696 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 35)) ;
        var_isConstant_1722 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 38)) ;
        var_isConstant_1722 = GGS_bool (true) ;
        switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
        case 1: {
          var_varName_1696 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 41)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 43)) ;
          var_varName_1696 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 44)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 47)) ;
      GGS_semanticExpressionAST var_expression_2088 ;
      nt_expression_5F_or_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2088, inCompiler) ;
      GGS_location var_endOfReceiverExpression_2112 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 49)) ;
      switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_letVarExp (var_varName_1696, var_isConstant_1722, var_expression_2088, var_endOfReceiverExpression_2112, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 56))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 51))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 51)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 59)) ;
        GGS_lstring var_typeName_2485 ;
        nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_2485, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_letVarExp (var_varName_1696, var_isConstant_1722, var_expression_2088, var_endOfReceiverExpression_2112, var_typeName_2485  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 61))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 61)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      GGS_semanticExpressionAST var_expression_2801 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2801, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_regularExp (var_expression_2801, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 71))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 71))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 71)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 34)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 38)) ;
        switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 41)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 43)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 47)) ;
      nt_expression_5F_or_5F_ggs_33__indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 59)) ;
        nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 97)) ;
  GGS_location var_instructionLocation_4730 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 98)) ;
  GGS_lstring var_grammarComponentName_4799 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 99)) ;
  GGS_lstring var_labelName_4875 ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    var_labelName_4875 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 102)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 104)) ;
    var_labelName_4875 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 105)) ;
  } break ;
  default:
    break ;
  }
  GGS_actualParameterListAST var_actualParameterList_5088 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_actualParameterList_5088, inCompiler) ;
  nt_grammar_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instructionLocation_4730, var_actualParameterList_5088, var_grammarComponentName_4799, var_labelName_4875, outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 97)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 99)) ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 104)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 105)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 119)) ;
  GGS_semanticExpressionAST var_sourceExpression_5886 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_5886, inCompiler) ;
  GGS_location var_endOfSourceExpression_5912 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 121)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6072 ;
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6072 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 127)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_6072, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInFileInstructionAST::init_21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_5886, var_endOfSourceExpression_5912, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_6072, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 119)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 127)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 149)) ;
  GGS_semanticExpressionAST var_sourceExpression_7293 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_7293, inCompiler) ;
  GGS_location var_endOfSourceExpression_7329 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 151)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 152)) ;
  GGS_semanticExpressionAST var_nameExpression_7436 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_nameExpression_7436, inCompiler) ;
  GGS_location var_endOfNameExpression_7470 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 154)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_7619 ;
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_7619 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 160)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_7619, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInStringInstructionAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_7293, var_endOfSourceExpression_7329, var_nameExpression_7436, var_endOfNameExpression_7470, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_7619, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 149)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 152)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 160)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 44)) ;
  GGS_location var_instructionLocation_2365 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 47)) ;
  GGS_semanticExpressionAST var_variantExpression_2495 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_variantExpression_2495, inCompiler) ;
  GGS_location var_endOfVariantExpression_2522 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 50)) ;
  GGS_semanticInstructionListAST var_firstInstructions_2667 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_firstInstructions_2667, inCompiler) ;
  GGS_location var_endOfFirstInstructions_2702 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 55)) ;
  GGS_semanticExpressionAST var_loopExpression_2823 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_loopExpression_2823, inCompiler) ;
  GGS_location var_endOfLoopExpression_2847 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 58)) ;
  GGS_semanticInstructionListAST var_secondInstructions_2982 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_secondInstructions_2982, inCompiler) ;
  GGS_location var_endOfSecondInstructions_3010 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 61)) ;
  GGS_location var_endOfLoopInstruction_3069 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 62)) ;
  outArgument_outInstruction = GGS_loopInstructionWithVariantAST::init_21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_2365, var_variantExpression_2495, var_endOfVariantExpression_2522, var_firstInstructions_2667, var_endOfFirstInstructions_2702, var_loopExpression_2823, var_endOfLoopExpression_2847, var_secondInstructions_2982, var_endOfSecondInstructions_3010, var_endOfLoopInstruction_3069, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 47)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 55)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 58)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_1836 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 33)) ;
  GGS_CommaSeparatedExpressionList var_testExpression_1935 ;
  nt_comma_5F_separated_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_testExpression_1935, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas3", 35)) ;
  GGS_semanticInstructionListAST var_then_5F_instructionList_2023 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_then_5F_instructionList_2023, inCompiler) ;
  GGS_location var_endOf_5F_then_5F_branchLocation_2053 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 37)) ;
  GGS_semanticInstructionListAST var_else_5F_instructionList_2132 ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_2132 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 42)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_else_5F_instructionList_2132, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas3", 45)) ;
    GGS_semanticInstructionAST var_instruction_2398 ;
    nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instruction_2398, inCompiler) ;
    GGS_semanticInstructionListAST temp_0 = GGS_semanticInstructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 47)) ;
    temp_0.plusPlusAssignOperation (GGS_semanticInstructionListAST_2E_element::init_21_ (var_instruction_2398, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas3", 47)) ;
    var_else_5F_instructionList_2132 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_1836, var_testExpression_1935, var_then_5F_instructionList_2023, var_endOf_5F_then_5F_branchLocation_2053, var_else_5F_instructionList_2132, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 55)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_comma_5F_separated_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas3", 35)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 42)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas3", 45)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 63)) ;
  nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 63)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 28)) ;
  GGS_location var_instructionLocation_1623 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 29)) ;
  GGS_semanticExpressionAST var_switchExpression_1706 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_switchExpression_1706, inCompiler) ;
  GGS_location var_endOfSwitchExpression_1732 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 31)) ;
  GGS_switchBranchesAST var_switchBranches_1798 = GGS_switchBranchesAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 34)) ;
    GGS__5B_lstring_5D_ var_constantNameList_1915 ;
    GGS_switchExtractedValuesListAST var_associatedValuesExtraction_1976 ;
    nt_switch_5F_case_ (ioArgument_ioDeclarations, var_constantNameList_1915, var_associatedValuesExtraction_1976, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 40)) ;
    GGS_semanticInstructionListAST var_instructions_2084 ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructions_2084, inCompiler) ;
    var_switchBranches_1798.addAssignOperation (var_constantNameList_1915, var_associatedValuesExtraction_1976, var_instructions_2084, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 42))  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 42)) ;
    if (select_galgas_33_InstructionsSyntax_34 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas3", 45)) ;
  GGS_location var_endOfSwitchInstruction_2234 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 46)) ;
  outArgument_outInstruction = GGS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1623, var_switchExpression_1706, var_endOfSwitchExpression_1732, var_switchBranches_1798, var_endOfSwitchInstruction_2234, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 28)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 34)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 40)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_34 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas3", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                                                  GGS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_constantName_2842 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 63)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_2842, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 64)) ;
    }
    if (select_galgas_33_InstructionsSyntax_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GGS_switchExtractedValuesListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 71)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
      case 1: {
        GGS_lbigint var_n_3060 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas3", 74)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 75)) ;
        UpEnumerator_range enumerator_3104 (GGS_range (GGS_uint (uint32_t (0U)), var_n_3060.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 76)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 76)))) ;
        while (enumerator_3104.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssignOperation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 77)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 77)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 77)) ;
          enumerator_3104.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 80)) ;
        outArgument_outAssociatedValuesExtraction.addAssignOperation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 81)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 81)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 81)) ;
      } break ;
      case 3: {
        GGS_lstring var_typeName_3327 ;
        switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_3327, inCompiler) ;
        } break ;
        case 2: {
          var_typeName_3327 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 87)) ;
        } break ;
        default:
          break ;
        }
        GGS_bool var_constantMarkedAsUnused_3496 ;
        switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3496 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas3", 93)) ;
          var_constantMarkedAsUnused_3496 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_constantName_3707 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 96)) ;
        outArgument_outAssociatedValuesExtraction.addAssignOperation (var_typeName_3327, var_constantName_3707, var_constantMarkedAsUnused_3496  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 97)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 100)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 102)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 63)) ;
    if (select_galgas_33_InstructionsSyntax_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 71)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas3", 74)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 75)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 80)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas3", 93)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 96)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 100)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 102)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i30_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                 GGS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lbigint var_count_4196 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 86)) ;
  GGS_uint var_n_4219 = var_count_4196.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 87)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_n_4219.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_4196.readProperty_location (), GGS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas3", 89)) ;
    }
  }
  if (var_n_4219.isValid ()) {
    uint32_t variant_4320 = var_n_4219.uintValue () ;
    bool loop_4320 = true ;
    while (loop_4320) {
      loop_4320 = GGS_bool (ComparisonKind::greaterThan, var_n_4219.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_4320) {
        loop_4320 = GGS_bool (ComparisonKind::greaterThan, var_n_4219.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_4320 && (0 == variant_4320)) {
        loop_4320 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas3", 91)) ;
      }
      if (loop_4320) {
        variant_4320 -= 1 ;
        ioArgument_ioElementList.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 92)), GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 92))  COMMA_SOURCE_FILE ("instruction-for.galgas3", 92)) ;
        var_n_4219.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 93)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_typeName_4715 ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_typeName_4715 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 103)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_4715, inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 108)) ;
    ioArgument_ioElementList.addAssignOperation (var_typeName_4715, GGS_bool (true), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 109))  COMMA_SOURCE_FILE ("instruction-for.galgas3", 109)) ;
  } break ;
  case 2: {
    GGS_bool var_isUnused_4929 ;
    switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
    case 1: {
      var_isUnused_4929 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas3", 115)) ;
      var_isUnused_4929 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_constantName_5070 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 118)) ;
    ioArgument_ioElementList.addAssignOperation (var_typeName_4715, var_isUnused_4929, var_constantName_5070  COMMA_SOURCE_FILE ("instruction-for.galgas3", 119)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 108)) ;
  } break ;
  case 2: {
    switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas3", 115)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 118)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 127)) ;
  GGS_forInstructionEnumeratedObjectElementListAST var_elementList_5457 = GGS_forInstructionEnumeratedObjectElementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (ioArgument_ioDeclarations, var_elementList_5457, inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_44 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_location var_location_5623 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 135)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_5735 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_enumeratedExpression_5735, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionCstListInExpAST::init_21__21__21_ (var_elementList_5457, var_enumeratedExpression_5735, var_location_5623, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_44 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 135)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_6200 ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
    var_typeName_6200 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 150)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_6200, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_enumerationVariable_6339 ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 156)) ;
    var_enumerationVariable_6339 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 157)) ;
  } break ;
  case 2: {
    var_enumerationVariable_6339 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 161)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_6551 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_enumeratedExpression_6551, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionVarInExpAST::init_21__21__21__21_ (var_typeName_6200, var_enumerationVariable_6339, var_enumeratedExpression_6551, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 167)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 156)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 161)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas3", 175)) ;
  GGS_location var_instructionLocation_7013 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 176)) ;
  GGS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_7058 = GGS_forInstructionEnumeratedObjectListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_bool var_ascending_7151 ;
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      var_ascending_7151 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 183)) ;
      var_ascending_7151 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_abstractEnumeratedCollectionAST var_enumeratedObject_7355 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (ioArgument_ioDeclarations, var_enumeratedObject_7355, inCompiler) ;
    var_mEnumeratedObjectList_7058.addAssignOperation (var_ascending_7151, var_enumeratedObject_7355  COMMA_SOURCE_FILE ("instruction-for.galgas3", 187)) ;
    if (select_galgas_33_InstructionsSyntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_semanticExpressionAST var_mWhileExpression_7492 ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    var_mWhileExpression_7492 = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 193)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas3", 195)) ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mWhileExpression_7492, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_while_5F_expression_7682 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 198)) ;
  GGS_semanticInstructionListAST var_mBeforeInstructionList_7758 ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_7758 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas3", 203)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mBeforeInstructionList_7758, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_before_5F_branch_7975 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 206)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas3", 207)) ;
  GGS_lstring var_indexVariableName_8038 ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
    var_indexVariableName_8038 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 210)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 212)) ;
    var_indexVariableName_8038 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 213)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 214)) ;
  } break ;
  default:
    break ;
  }
  GGS_semanticInstructionListAST var_mDoInstructionList_8261 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mDoInstructionList_8261, inCompiler) ;
  GGS_location var_endof_5F_do_5F_branch_8289 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 217)) ;
  GGS_semanticInstructionListAST var_mBetweenInstructionList_8358 ;
  switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_8358 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas3", 222)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mBetweenInstructionList_8358, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_between_5F_branch_8579 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 225)) ;
  GGS_semanticInstructionListAST var_mAfterInstructionList_8653 ;
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_8653 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas3", 230)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mAfterInstructionList_8653, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_after_5F_branch_8866 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 233)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas3", 234)) ;
  GGS_location var_endof_5F_foreach_5F_instruction_8920 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 235)) ;
  outArgument_outInstruction = GGS_forInstructionAST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_7013, var_mEnumeratedObjectList_7058, var_indexVariableName_8038, var_mWhileExpression_7492, var_endof_5F_while_5F_expression_7682, var_mBeforeInstructionList_7758, var_endof_5F_before_5F_branch_7975, var_mBetweenInstructionList_8358, var_endof_5F_between_5F_branch_8579, var_mDoInstructionList_8261, var_endof_5F_do_5F_branch_8289, var_mAfterInstructionList_8653, var_endof_5F_after_5F_branch_8866, var_endof_5F_foreach_5F_instruction_8920, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas3", 175)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 183)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas3", 195)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas3", 203)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas3", 207)) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 212)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 213)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 214)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas3", 222)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas3", 230)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas3", 234)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas3", 36)) ;
  GGS_location var_instructionLocation_1950 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas3", 37)) ;
  GGS_semanticExpressionAST var_expression_2056 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2056, inCompiler) ;
  outArgument_outInstruction = GGS_messageInstructionAST::init_21__21_ (var_instructionLocation_1950, var_expression_2056, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas3", 36)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_2378 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 48)) ;
  GGS_bool var_prefixedBySelf_2438 ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_2438 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 54)) ;
    var_prefixedBySelf_2438 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mReceiverName_2582 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 57)) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    GGS_actualParameterListAST var_actualParameterList_2692 ;
    nt_actual_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_actualParameterList_2692, inCompiler) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_prefixedBySelf_2438.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outInstruction = GGS_selfSetterCallInstructionAST::init_21__21__21_ (var_instructionLocation_2378, var_mReceiverName_2582, var_actualParameterList_2692, inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_instructionLocation_2378, GGS_string ("invalid mutating proc call"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 67)) ;
      outArgument_outInstruction.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    GGS_lstringlist var_receiverStructProperties_3022 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 72)) ;
      GGS_lstring var_structProperty_3117 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 73)) ;
      var_receiverStructProperties_3022.addAssignOperation (var_structProperty_3117  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 74)) ;
      if (select_galgas_33_InstructionsSyntax_56 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GGS_lstring var_setterName_3254 ;
    {
    var_receiverStructProperties_3022.setter_popLast (var_setterName_3254, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 77)) ;
    }
    GGS_actualParameterListAST var_actualParameterList_3350 ;
    nt_actual_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_actualParameterList_3350, inCompiler) ;
    outArgument_outInstruction = GGS_setterCallInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2378, var_prefixedBySelf_2438, var_mReceiverName_2582, var_receiverStructProperties_3022, var_setterName_3254, var_actualParameterList_3350, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 48)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 57)) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    nt_actual_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 73)) ;
      if (select_galgas_33_InstructionsSyntax_56 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_actual_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 28)) ;
  GGS_location var_instructionLocation_1621 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 29)) ;
  GGS_semanticInstructionListAST var_firstInstructions_1747 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_firstInstructions_1747, inCompiler) ;
  GGS_location var_endOfFirstInstructions_1782 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 32)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 33)) ;
  GGS_CommaSeparatedExpressionList var_loopExpression_1896 ;
  nt_comma_5F_separated_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_loopExpression_1896, inCompiler) ;
  GGS_location var_endOfLoopExpression_1920 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 36)) ;
  GGS_semanticInstructionListAST var_secondInstructions_2055 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_secondInstructions_2055, inCompiler) ;
  GGS_location var_endOfSecondInstructions_2083 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 39)) ;
  GGS_location var_endOfLoopInstruction_2142 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 40)) ;
  outArgument_outInstruction = GGS_loopInstructionWithoutVariantAST::init_21__21__21__21__21__21__21__21_ (var_instructionLocation_1621, var_firstInstructions_1747, var_endOfFirstInstructions_1782, var_loopExpression_1896, var_endOfLoopExpression_1920, var_secondInstructions_2055, var_endOfSecondInstructions_2083, var_endOfLoopInstruction_2142, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 28)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 33)) ;
  nt_comma_5F_separated_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 36)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 53)) ;
  GGS_lstring var_typeName_2676 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_2676, inCompiler) ;
  GGS_lstring var_constantName_2709 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 55)) ;
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_undefinedLocalConstantDeclarationAST::init_21__21__21_ (var_typeName_2676.readProperty_location (), var_typeName_2676, var_constantName_2709, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 63)) ;
    GGS_semanticExpressionAST var_sourceExpression_2960 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_2960, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_2676.readProperty_location (), GGS_bool (true), var_typeName_2676, var_constantName_2709, var_sourceExpression_2960, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 53)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 55)) ;
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 63)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 79)) ;
  GGS_lstring var_variableName_3474 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 81)) ;
  GGS_semanticExpressionAST var_sourceExpression_3565 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_3565, inCompiler) ;
  outArgument_outInstruction = GGS_localConstantDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_3474.readProperty_location (), var_variableName_3474, var_sourceExpression_3565, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i39_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 81)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas3", 36)) ;
  GGS_location var_instructionLocation_1939 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas3", 37)) ;
  GGS_lstringlist var_dropList_1997 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_variableName_2048 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas3", 40)) ;
    var_dropList_1997.addAssignOperation (var_variableName_2048  COMMA_SOURCE_FILE ("instruction-drop.galgas3", 41)) ;
    if (select_galgas_33_InstructionsSyntax_58 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas3", 43)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_dropInstructionAST::init_21__21_ (var_instructionLocation_1939, var_dropList_1997, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas3", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas3", 40)) ;
    if (select_galgas_33_InstructionsSyntax_58 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas3", 43)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 44)) ;
  GGS_lstring var_variableName_2280 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 46)) ;
  GGS_semanticExpressionAST var_sourceExpression_2371 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_2371, inCompiler) ;
  outArgument_outInstruction = GGS_localVariableDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_2280.readProperty_location (), var_variableName_2280, var_sourceExpression_2371, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 46)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 59)) ;
  GGS_lstring var_typeName_2857 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_2857, inCompiler) ;
  GGS_lstring var_variableName_2890 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 61)) ;
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_localVariableDeclarationNoAssignmentAST::init_21__21__21_ (var_typeName_2857.readProperty_location (), var_typeName_2857, var_variableName_2890, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 69)) ;
    GGS_semanticExpressionAST var_sourceExpression_3144 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_3144, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_2857.readProperty_location (), GGS_bool (false), var_typeName_2857, var_variableName_2890, var_sourceExpression_3144, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 59)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 61)) ;
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 69)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 36)) ;
  GGS_location var_instructionLocation_1962 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 38)) ;
  GGS_semanticExpressionAST var_sourceExpression_2076 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_2076, inCompiler) ;
  outArgument_outInstruction = GGS_selfAssignmentInstructionAST::init_21__21_ (var_instructionLocation_1962, var_sourceExpression_2076, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 38)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_2021 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 38)) ;
  GGS_lstring var_mTypeName_2085 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 40)) ;
  GGS_lstring var_mMethodName_2173 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 41)) ;
  GGS_actualParameterListAST var_actualParameterList_2268 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_actualParameterList_2268, inCompiler) ;
  outArgument_outInstruction = GGS_typeMethodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2021, var_mTypeName_2085, var_mMethodName_2173, var_actualParameterList_2268, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 41)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 44)) ;
  GGS_location var_instructionLocation_2174 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 48)) ;
  GGS_actualOutputArgumentList var_actualParameterList_2297 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_actualParameterList_2297, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 50)) ;
  outArgument_outInstruction = GGS_superInitInstructionAST::init_21__21_ (var_instructionLocation_2174, var_actualParameterList_2297, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 48)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mTargetVariableName_1628 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 29)) ;
  GGS_lstring var_optionalProperty_1666 ;
  switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
    var_optionalProperty_1666 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas3", 32)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 34)) ;
    GGS_lstring var_attributeName_1772 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 35)) ;
    var_optionalProperty_1666 = var_attributeName_1772 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 38)) ;
  GGS_semanticExpressionAST var_mSourceExpression_1911 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSourceExpression_1911, inCompiler) ;
  outArgument_outInstruction = GGS_assignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_1628.readProperty_location (), var_mTargetVariableName_1628, var_optionalProperty_1666, var_mSourceExpression_1911, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 29)) ;
  switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 34)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 38)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 53)) ;
  GGS_lstring var_mTargetVariableName_2402 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 54)) ;
  GGS_lstring var_optionalProperty_2440 ;
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
    var_optionalProperty_2440 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas3", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 59)) ;
    GGS_lstring var_attributeName_2546 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 60)) ;
    var_optionalProperty_2440 = var_attributeName_2546 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 63)) ;
  GGS_semanticExpressionAST var_mSourceExpression_2685 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSourceExpression_2685, inCompiler) ;
  outArgument_outInstruction = GGS_selfPropertyAssignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_2402.readProperty_location (), var_mTargetVariableName_2402, var_optionalProperty_2440, var_mSourceExpression_2685, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 54)) ;
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 59)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 63)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i48_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 32)) ;
  GGS_bool var_isUsefull_1766 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 36)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_1766.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 38)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 38)) ;
        }
      }
      var_isUsefull_1766 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_1979 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 42)) ;
  GGS_formalParameterListAST var_formalParameterList_2079 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2079, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_semanticDeclarationListAST_2E_element::init_21_ (GGS_externProcedureDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (GGS_bool (false), GGS_bool (false), var_mActionName_1979, var_formalParameterList_2079, var_isUsefull_1766, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 36)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 42)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i49_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 31)) ;
  GGS_bool var_isUsefull_1723 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 35)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_1723.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 37)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 37)) ;
        }
      }
      var_isUsefull_1723 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mRoutineName_1926 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 41)) ;
  GGS_formalParameterListAST var_formalParameterList_2027 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2027, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 43)) ;
  GGS_semanticInstructionListAST var_mRoutineInstructionList_2145 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mRoutineInstructionList_2145, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 45)) ;
  GGS_location var_endOfInstructionList_2186 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (false), var_mRoutineName_1926, var_formalParameterList_2027, var_isUsefull_1723, var_mRoutineInstructionList_2145, var_endOfInstructionList_2186, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 41)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 43)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i50_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 62)) ;
  GGS_bool var_isUsefull_2699 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 66)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_2699.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 68)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 68)) ;
        }
      }
      var_isUsefull_2699 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mRoutineName_2902 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 72)) ;
  GGS_formalParameterListAST var_formalParameterList_3003 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_3003, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 74)) ;
  GGS_semanticInstructionListAST var_mRoutineInstructionList_3121 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mRoutineInstructionList_3121, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 76)) ;
  GGS_location var_endOfInstructionList_3162 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 77)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (true), var_mRoutineName_2902, var_formalParameterList_3003, var_isUsefull_2699, var_mRoutineInstructionList_3121, var_endOfInstructionList_3162, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 72)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 74)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 76)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 60)) ;
  GGS_lstring var_mFilewrapperName_3203 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 62)) ;
  GGS_lstring var_mFilewrapperPath_3293 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 63)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_3346 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_3346, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_3417 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_3417, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_3505 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_3505, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_semanticDeclarationListAST_2E_element::init_21_ (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (false), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 70)), var_mFilewrapperName_3203, var_mFilewrapperPath_3293, var_filewrapperTextFileExtensionList_3346, var_filewrapperBinaryFileExtensionList_3417, var_filewrapperTemplateList_3505, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 60)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 63)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 83)) ;
  GGS_lstring var_mFilewrapperName_4128 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 85)) ;
  GGS_lstring var_mFilewrapperPath_4218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 86)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_4271 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_4271, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_4342 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_4342, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_4430 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_4430, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_semanticDeclarationListAST_2E_element::init_21_ (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 93)), var_mFilewrapperName_4128, var_mFilewrapperPath_4218, var_filewrapperTextFileExtensionList_4271, var_filewrapperBinaryFileExtensionList_4342, var_filewrapperTemplateList_4430, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 83)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 86)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 106)) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_5125 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 110)) ;
      outArgument_outFilewrapperTextFileExtensionList.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_pathExtension_5125, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 111)) ;
      if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 106)) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 110)) ;
      if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 123)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_5574 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 127)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_pathExtension_5574, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 128)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 130)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 123)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 127)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 130)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 140)) ;
  outArgument_outFilewrapperTemplateList = GGS_filewrapperTemplateListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 144)) ;
      GGS_lstring var_mFilewrapperTemplateName_6085 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 145)) ;
      GGS_lstring var_mFilewrapperTemplatePath_6134 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 146)) ;
      GGS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_6207 = GGS_formalTemplateInputParameterListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
        case 2: {
          GGS_lstring var_selector_6306 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 150)) ;
          GGS_lstring var_typeName_6371 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_6371, inCompiler) ;
          GGS_bool var_isUnused_6399 ;
          switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
          case 1: {
            var_isUnused_6399 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 156)) ;
            var_isUnused_6399 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_argumentName_6545 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 159)) ;
          var_filewrapperTemplateFormalInputParameters_6207.plusPlusAssignOperation (GGS_formalTemplateInputParameterListAST_2E_element::init_21__21__21__21_ (var_selector_6306, var_typeName_6371, var_argumentName_6545, var_isUnused_6399, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 160)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 162)) ;
          GGS_lstring var_selector_6694 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 163)) ;
          GGS_lstring var_typeName_6768 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_6768, inCompiler) ;
          GGS_bool var_isUnused_6796 ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
            var_isUnused_6796 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 169)) ;
            var_isUnused_6796 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_argumentName_6942 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 172)) ;
          var_filewrapperTemplateFormalInputParameters_6207.plusPlusAssignOperation (GGS_formalTemplateInputParameterListAST_2E_element::init_21__21__21__21_ (var_selector_6694, var_typeName_6768, var_argumentName_6942, var_isUnused_6796, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 173)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.plusPlusAssignOperation (GGS_filewrapperTemplateListAST_2E_element::init_21__21__21_ (var_mFilewrapperTemplateName_6085, var_mFilewrapperTemplatePath_6134, var_filewrapperTemplateFormalInputParameters_6207, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 175)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 181)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 140)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 145)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 146)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 150)) ;
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 156)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 159)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 162)) ;
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 169)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 172)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 181)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 42)) ;
  GGS_lstring var_typeName_2292 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_9 (inCompiler) == 2) {
      GGS_lstring var_t_2399 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 47)) ;
      var_typeName_2292 = function_makeEmbeddedTypeLName (var_typeName_2292, var_t_2399, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 48)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 49)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_2520 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 51)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2614 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2614, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 54)) ;
  GGS_lstring var_mReturnedTypeName_2785 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_2785, inCompiler) ;
  GGS_lstring var_resultVariableName_2821 ;
  switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
    var_resultVariableName_2821 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 58)) ;
  } break ;
  case 2: {
    var_resultVariableName_2821 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 60)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 62)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3023 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3023, inCompiler) ;
  GGS_location var_endOfInstructionList_3065 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 65)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_2292, var_getterName_2520, var_formalInputParameterList_2614, var_mReturnedTypeName_2785, var_resultVariableName_2821, var_routineInstructionList_3023, var_endOfInstructionList_3065, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 42)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 47)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 49)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 51)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 54)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 58)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 62)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i7_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                   GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 82)) ;
  GGS_lstring var_typeName_3634 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_11 (inCompiler) == 2) {
      GGS_lstring var_t_3697 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 86)) ;
      var_typeName_3634 = function_makeEmbeddedTypeLName (var_typeName_3634, var_t_3697, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 87)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 88)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_3818 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 90)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_3912 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_3912, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 93)) ;
  GGS_lstring var_mReturnedTypeName_4083 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_4083, inCompiler) ;
  GGS_lstring var_resultVariableName_4119 ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    var_resultVariableName_4119 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 97)) ;
  } break ;
  case 2: {
    var_resultVariableName_4119 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 99)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 101)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4349 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_4349, inCompiler) ;
  GGS_location var_endOfInstructionList_4391 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 104)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_3634, var_getterName_3818, var_formalInputParameterList_3912, var_mReturnedTypeName_4083, var_resultVariableName_4119, var_routineInstructionList_4349, var_endOfInstructionList_4391, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 86)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 88)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 90)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 93)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 97)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 101)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 39)) ;
  GGS_lstring var_typeName_2037 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      GGS_lstring var_t_2153 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 44)) ;
      var_typeName_2037 = function_makeEmbeddedTypeLName (var_typeName_2037, var_t_2153, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 45)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2274 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 48)) ;
  GGS_formalParameterListAST var_formalParameterList_2397 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2397, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2037, var_methodName_2274, var_formalParameterList_2397, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 44)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 48)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i9_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                   GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 63)) ;
  GGS_lstring var_methodName_2874 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 64)) ;
  GGS_formalParameterListAST var_formalParameterList_2997 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2997, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_2874, var_formalParameterList_2997, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 63)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 64)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 29)) ;
  GGS_lstring var_className_1585 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 31)) ;
  GGS_lstring var_setterName_1684 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 32)) ;
  GGS_formalParameterListAST var_formalParameterList_1799 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1799, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_className_1585, var_setterName_1684, var_formalParameterList_1799, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 31)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 32)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i11_ (const GGS_lstring constinArgument_inClassName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 48)) ;
  GGS_lstring var_setterName_2276 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 49)) ;
  GGS_formalParameterListAST var_formalParameterList_2391 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2391, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inClassName, var_setterName_2276, var_formalParameterList_2391, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 48)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 49)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 40)) ;
  GGS_lstring var_typeName_2117 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_14 (inCompiler) == 2) {
      GGS_lstring var_t_2216 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 45)) ;
      var_typeName_2117 = function_makeEmbeddedTypeLName (var_typeName_2117, var_t_2216, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas3", 46)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2337 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 49)) ;
  GGS_formalParameterListAST var_formalParameterList_2444 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2444, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 51)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2534 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2534, inCompiler) ;
  GGS_location var_endOfSetterLocation_2576 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_2117, var_setterName_2337, var_formalParameterList_2444, var_routineInstructionList_2534, var_endOfSetterLocation_2576, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas3", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 45)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 49)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 51)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i13_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 69)) ;
  GGS_lstring var_typeName_3077 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_15 (inCompiler) == 2) {
      GGS_lstring var_t_3140 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 73)) ;
      var_typeName_3077 = function_makeEmbeddedTypeLName (var_typeName_3077, var_t_3140, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas3", 74)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_3261 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 77)) ;
  GGS_formalParameterListAST var_formalParameterList_3368 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_3368, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 79)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3486 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3486, inCompiler) ;
  GGS_location var_endOfSetterLocation_3528 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 82)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_3077, var_setterName_3261, var_formalParameterList_3368, var_routineInstructionList_3486, var_endOfSetterLocation_3528, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas3", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 77)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 79)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas3", 25)) ;
  GGS_lstring var_typeName_1447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_16 (inCompiler) == 2) {
      GGS_lstring var_t_1546 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas3", 30)) ;
      var_typeName_1447 = function_makeEmbeddedTypeLName (var_typeName_1447, var_t_1546, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas3", 31)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 34)) ;
  GGS_formalInputParameterListAST var_formalParameterList_1710 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1710, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 36)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_1800 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1800, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 38)) ;
  GGS_location var_endOfMethodLocation_1840 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 39)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_1447, var_formalParameterList_1710, var_routineInstructionList_1800, var_endOfMethodLocation_1840, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas3", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas3", 30)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 34)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 36)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i15_ (const GGS_lstring constinArgument_inClassName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 53)) ;
  GGS_formalInputParameterListAST var_formalParameterList_2387 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2387, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 55)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2477 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2477, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 57)) ;
  GGS_location var_endOfMethodLocation_2517 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 58)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inClassName, var_formalParameterList_2387, var_routineInstructionList_2477, var_endOfMethodLocation_2517, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 53)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 55)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 41)) ;
  GGS_lstring var_typeName_2172 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_17 (inCompiler) == 2) {
      GGS_lstring var_t_2289 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 46)) ;
      var_typeName_2172 = function_makeEmbeddedTypeLName (var_typeName_2172, var_t_2289, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 47)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 48)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2410 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 50)) ;
  GGS_formalParameterListAST var_formalParameterList_2525 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2525, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 52)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2615 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2615, inCompiler) ;
  GGS_location var_endOfSetterLocation_2657 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 55)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_2172, var_setterName_2410, var_formalParameterList_2525, var_routineInstructionList_2615, var_endOfSetterLocation_2657, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 41)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 46)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 48)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 50)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 52)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i17_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 72)) ;
  GGS_lstring var_typeName_3217 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_18 (inCompiler) == 2) {
      GGS_lstring var_t_3280 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 76)) ;
      var_typeName_3217 = function_makeEmbeddedTypeLName (var_typeName_3217, var_t_3280, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 77)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_3401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 80)) ;
  GGS_formalParameterListAST var_formalParameterList_3516 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_3516, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 82)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3634 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3634, inCompiler) ;
  GGS_location var_endOfSetterLocation_3676 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 85)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_3217, var_setterName_3401, var_formalParameterList_3516, var_routineInstructionList_3634, var_endOfSetterLocation_3676, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 76)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 80)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 82)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 85)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 25)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 26)) ;
  GGS_lstring var_typeName_1448 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 30)) ;
      GGS_lstring var_t_1557 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 31)) ;
      var_typeName_1448 = function_makeEmbeddedTypeLName (var_typeName_1448, var_t_1557, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_1659 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 34)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_1753 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_1753, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 37)) ;
  GGS_lstring var_returnedTypeName_1933 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_1933, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_1448, var_getterName_1659, var_formalInputParameterList_1753, var_returnedTypeName_1933, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 25)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 26)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 30)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 34)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 37)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i19_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 53)) ;
  GGS_lstring var_typeName_2421 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 57)) ;
      GGS_lstring var_t_2494 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 58)) ;
      var_typeName_2421 = function_makeEmbeddedTypeLName (var_typeName_2421, var_t_2494, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mGetterName_2596 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 61)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2691 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2691, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 64)) ;
  GGS_lstring var_returnedTypeName_2871 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_2871, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_2421, var_mGetterName_2596, var_formalInputParameterList_2691, var_returnedTypeName_2871, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 57)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 61)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 64)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 27)) ;
  GGS_lstring var_typeName_1546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
      GGS_lstring var_t_1645 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas3", 32)) ;
      var_typeName_1546 = function_makeEmbeddedTypeLName (var_typeName_1546, var_t_1645, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas3", 33)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_1766 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 36)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_1852 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_1852, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 39)) ;
  GGS_lstring var_mReturnedTypeName_2023 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_2023, inCompiler) ;
  GGS_lstring var_resultVariableName_2059 ;
  switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
  case 1: {
    var_resultVariableName_2059 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 43)) ;
  } break ;
  case 2: {
    var_resultVariableName_2059 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 45)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 47)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2289 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2289, inCompiler) ;
  GGS_location var_endOfInstructionList_2331 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 50)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_1546, var_getterName_1766, var_formalInputParameterList_1852, var_mReturnedTypeName_2023, var_resultVariableName_2059, var_routineInstructionList_2289, var_endOfInstructionList_2331, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas3", 32)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 36)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 39)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 43)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 47)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i21_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 66)) ;
  GGS_lstring var_getterName_2899 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 67)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2985 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2985, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 70)) ;
  GGS_lstring var_mReturnedTypeName_3156 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_3156, inCompiler) ;
  GGS_lstring var_resultVariableName_3192 ;
  switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    var_resultVariableName_3192 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 74)) ;
  } break ;
  case 2: {
    var_resultVariableName_3192 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 76)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 78)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3422 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3422, inCompiler) ;
  GGS_location var_endOfInstructionList_3464 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_getterName_2899, var_formalInputParameterList_2985, var_mReturnedTypeName_3156, var_resultVariableName_3192, var_routineInstructionList_3422, var_endOfInstructionList_3464, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 66)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 67)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 70)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 74)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 78)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 28)) ;
  GGS_lstring var_typeName_1561 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      GGS_lstring var_t_1678 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 33)) ;
      var_typeName_1561 = function_makeEmbeddedTypeLName (var_typeName_1561, var_t_1678, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 34)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1799 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 37)) ;
  GGS_formalParameterListAST var_formalParameterList_1914 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1914, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 39)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2004 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2004, inCompiler) ;
  GGS_location var_endOfMethodLocation_2036 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 42)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_1561, var_methodName_1799, var_formalParameterList_1914, var_routineInstructionList_2004, var_endOfMethodLocation_2036, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 33)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 37)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 39)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i23_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 57)) ;
  GGS_lstring var_typeName_2547 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_25 (inCompiler) == 2) {
      GGS_lstring var_t_2610 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 61)) ;
      var_typeName_2547 = function_makeEmbeddedTypeLName (var_typeName_2547, var_t_2610, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 62)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 63)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2731 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 65)) ;
  GGS_formalParameterListAST var_formalParameterList_2846 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2846, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 67)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2964 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2964, inCompiler) ;
  GGS_location var_endOfMethodLocation_3006 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 70)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_2547, var_methodName_2731, var_formalParameterList_2846, var_routineInstructionList_2964, var_endOfMethodLocation_3006, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 61)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 63)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 65)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 67)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 40)) ;
  GGS_lstring var_typeName_2110 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_26 (inCompiler) == 2) {
      GGS_lstring var_t_2225 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 45)) ;
      var_typeName_2110 = function_makeEmbeddedTypeLName (var_typeName_2110, var_t_2225, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 46)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_2337 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 49)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2439 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2439, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 52)) ;
  GGS_lstring var_returnedTypeName_2610 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_2610, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_2110, var_getterName_2337, var_formalInputParameterList_2439, var_returnedTypeName_2610, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 45)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 49)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 52)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i25_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 68)) ;
  GGS_lstring var_typeName_3089 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      GGS_lstring var_t_3152 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 72)) ;
      var_typeName_3089 = function_makeEmbeddedTypeLName (var_typeName_3089, var_t_3152, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_3264 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 76)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_3366 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_3366, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 79)) ;
  GGS_lstring var_returnedTypeName_3537 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_3537, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_3089, var_getterName_3264, var_formalInputParameterList_3366, var_returnedTypeName_3537, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 76)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 79)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 30)) ;
  GGS_lstring var_typeName_1591 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_28 (inCompiler) == 2) {
      GGS_lstring var_t_1706 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 35)) ;
      var_typeName_1591 = function_makeEmbeddedTypeLName (var_typeName_1591, var_t_1706, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 36)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 37)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_1827 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 39)) ;
  GGS_formalParameterListAST var_formalParameterList_1950 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1950, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_1591, var_setterName_1827, var_formalParameterList_1950, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 30)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 35)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 37)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 39)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i27_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 55)) ;
  GGS_lstring var_typeName_2418 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      GGS_lstring var_t_2481 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 59)) ;
      var_typeName_2418 = function_makeEmbeddedTypeLName (var_typeName_2418, var_t_2481, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 60)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 61)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2602 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 63)) ;
  GGS_formalParameterListAST var_formalParameterList_2725 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2725, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2418, var_setterName_2602, var_formalParameterList_2725, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 55)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 59)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 61)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 63)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 25)) ;
  GGS_lstring var_typeName_1447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 27)) ;
  GGS_equatableComparableExtension var_theExtension_1543 ;
  switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 30)) ;
    var_theExtension_1543 = GGS_equatableComparableExtension::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas3", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 33)) ;
    var_theExtension_1543 = GGS_equatableComparableExtension::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas3", 34)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_equatableExtensionAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_typeName_1447, var_theExtension_1543, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 30)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 33)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 28)) ;
  GGS_lstring var_typeName_1561 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 32)) ;
      GGS_lstring var_t_1670 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 33)) ;
      var_typeName_1561 = function_makeEmbeddedTypeLName (var_typeName_1561, var_t_1670, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1781 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 36)) ;
  GGS_formalParameterListAST var_formalParameterList_1896 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1896, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_1561, var_methodName_1781, var_formalParameterList_1896, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 32)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 33)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 36)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i30_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 50)) ;
  GGS_lstring var_typeName_2324 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_32 (inCompiler) == 2) {
      GGS_lstring var_t_2387 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 54)) ;
      var_typeName_2324 = function_makeEmbeddedTypeLName (var_typeName_2324, var_t_2387, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 56)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2508 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 58)) ;
  GGS_formalParameterListAST var_formalParameterList_2623 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2623, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2324, var_methodName_2508, var_formalParameterList_2623, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_32 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 54)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 56)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 58)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 25)) ;
  GGS_lstring var_typeName_1433 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 29)) ;
      GGS_lstring var_t_1534 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 30)) ;
      var_typeName_1433 = function_makeEmbeddedTypeLName (var_typeName_1433, var_t_1534, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas3", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1645 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 33)) ;
  GGS_formalParameterListAST var_formalParameterList_1752 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1752, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 35)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_1842 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1842, inCompiler) ;
  GGS_location var_endOfMethodLocation_1874 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 38)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_1433, var_methodName_1645, var_formalParameterList_1752, var_routineInstructionList_1842, var_endOfMethodLocation_1874, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 29)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 30)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 33)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 35)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i32_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 53)) ;
  GGS_lstring var_typeName_2394 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_34 (inCompiler) == 2) {
      GGS_lstring var_t_2457 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 57)) ;
      var_typeName_2394 = function_makeEmbeddedTypeLName (var_typeName_2394, var_t_2457, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas3", 58)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2578 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 61)) ;
  GGS_formalParameterListAST var_formalParameterList_2685 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2685, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 63)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2803 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2803, inCompiler) ;
  GGS_location var_endOfMethodLocation_2835 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas3", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 66)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_2394, var_methodName_2578, var_formalParameterList_2685, var_routineInstructionList_2803, var_endOfMethodLocation_2835, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 57)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 61)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 63)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i33_ (GGS_AccessControlAST & outArgument_outAccessControl,
                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas4", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas4", 31)) ;
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas4", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas4", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedAccess (SOURCE_FILE ("accessControl.galgas4", 36)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 38)) ;
      GGS_lstring var_value_1794 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 39)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::notEqual, var_value_1794.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_1794.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas4", 41)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 43)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedSetAccess (SOURCE_FILE ("accessControl.galgas4", 44)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas4", 47)) ;
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateAccess (SOURCE_FILE ("accessControl.galgas4", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 51)) ;
      GGS_lstring var_value_2110 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 52)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_value_2110.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_2110.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas4", 54)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 56)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateSetAccess (SOURCE_FILE ("accessControl.galgas4", 57)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas4", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas4", 62))  COMMA_SOURCE_FILE ("accessControl.galgas4", 62)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 64)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas4", 65))  COMMA_SOURCE_FILE ("accessControl.galgas4", 65)) ;
      GGS_lstring var_value_2541 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 66)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, var_value_2541.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_2541.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas4", 68)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 70)) ;
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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas4", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas4", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 43)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas4", 47)) ;
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 51)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 52)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 56)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas4", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 64)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 66)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 70)) ;
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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 28)) ;
  GGS_lstring var_elementTypeName_1634 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_elementTypeName_1634, inCompiler) ;
  outArgument_outTypeName = function_makeArrayTypeLName (var_elementTypeName_1634, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 30)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outTypeName.readProperty_string () COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 31)).operator_not (SOURCE_FILE ("declaration-type-array.galgas3", 31)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 32)) ;
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21__21__21_isUsefull_21_equatable (GGS_bool (false), outArgument_outTypeName, var_elementTypeName_1634, GGS_bool (true), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 33)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 28)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 25)) ;
  GGS_lstring var_structTypeName_1444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 26)) ;
  GGS_structComparison var_comparison_1514 ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    var_comparison_1514 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-struct.galgas3", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 31)) ;
    var_comparison_1514 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas3", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 34)) ;
    var_comparison_1514 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas3", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 37)) ;
  GGS_propertyInCollectionListAST var_propertyList_1728 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_1728, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_structTypeName_1444, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 45)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_structTypeName_1444, var_propertyList_1728, GGS_string::makeEmptyString (), var_comparison_1514, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 26)) ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 38)) ;
  GGS_lstring var_listTypeName_2014 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 39)) ;
  GGS_bool var_isUsefull_2091 = GGS_bool (false) ;
  GGS_bool var_isEquatable_2117 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 44)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isEquatable_2117.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 46)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 46)) ;
        }
      }
      var_isEquatable_2117 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 50)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_2091.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 52)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 52)) ;
        }
      }
      var_isUsefull_2091 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 56)) ;
  GGS_propertyInCollectionListAST var_propertyList_2493 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2493, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_listTypeName_2014, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_propertyList_2493.getter_count (SOURCE_FILE ("declaration-type-list.galgas3", 64)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 65)), GGS_string ("a list declaration must declare at least one property"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 65)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 67)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (false), var_listTypeName_2014, var_propertyList_2493, var_isUsefull_2091, var_isEquatable_2117, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 38)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 50)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 56)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_1822 ;
  nt_acces_5F_control_ (var_accessControl_1822, inCompiler) ;
  GGS_propertyMutability var_mutability_1865 ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 34)) ;
    var_mutability_1865 = GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-property.galgas3", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 37)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_1822, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas3", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas3", 38)) ;
    var_mutability_1865 = GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-property.galgas3", 39)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_2105 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyTypeName_2105, inCompiler) ;
  GGS_lstring var_propertyName_2146 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 42)) ;
  GGS_bool var_selectorAttribute_2174 ;
  GGS_propertyInCollectionInitializationAST var_initialization_2239 ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    var_initialization_2239 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 46)) ;
    var_selectorAttribute_2174 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 49)) ;
    var_initialization_2239 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 50)) ;
    var_selectorAttribute_2174 = GGS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 53)) ;
    GGS_semanticExpressionAST var_expression_2480 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2480, inCompiler) ;
    var_initialization_2239 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_2480  COMMA_SOURCE_FILE ("declaration-property.galgas3", 55)) ;
    var_selectorAttribute_2174 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssignOperation (var_mutability_1865, var_propertyTypeName_2105, var_propertyName_2146, var_accessControl_1822, var_selectorAttribute_2174, var_initialization_2239  COMMA_SOURCE_FILE ("declaration-property.galgas3", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 42)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 49)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 53)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_3100 ;
  nt_acces_5F_control_ (var_accessControl_3100, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas3", 72)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 76)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas3", 77)), GGS_string ("a weak property is mutable, and should be declared with 'var'"), fixItArray0  COMMA_SOURCE_FILE ("declaration-property.galgas3", 77)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_3313 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyTypeName_3313, inCompiler) ;
  GGS_lstring var_propertyName_3354 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 80)) ;
  GGS_bool var_selectorAttribute_3382 ;
  GGS_propertyInCollectionInitializationAST var_initialization_3447 ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    var_initialization_3447 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 84)) ;
    var_selectorAttribute_3382 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 87)) ;
    var_initialization_3447 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 88)) ;
    var_selectorAttribute_3382 = GGS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 91)) ;
    GGS_semanticExpressionAST var_expression_3688 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3688, inCompiler) ;
    var_initialization_3447 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_3688  COMMA_SOURCE_FILE ("declaration-property.galgas3", 93)) ;
    var_selectorAttribute_3382 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyWeakTypeName_3803 = function_makeWeakTypeLName (var_propertyTypeName_3313, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas3", 96)) ;
  ioArgument_ioAttributeInCollectionList.addAssignOperation (GGS_propertyMutability::class_func_weakProperty (SOURCE_FILE ("declaration-property.galgas3", 98)), var_propertyWeakTypeName_3803, var_propertyName_3354, var_accessControl_3100, var_selectorAttribute_3382, var_initialization_3447  COMMA_SOURCE_FILE ("declaration-property.galgas3", 97)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas3", 72)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 76)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 80)) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 87)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 91)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 27)) ;
  GGS_lstring var_enumTypeName_1546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 28)) ;
  GGS_structComparison var_comparison_1612 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 32)) ;
      switch (var_comparison_1612.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_1612 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas3", 35)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 37)), GGS_string ("duplicated attribute"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 37)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 39)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 39)) ;
        }
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 42)) ;
      switch (var_comparison_1612.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_1612 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas3", 45)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 47)), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 47)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 49)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 49)) ;
        }
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 52)) ;
  GGS_enumConstantList var_constantList_2252 = GGS_enumConstantList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 56)) ;
      GGS_lstring var_constantName_2330 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 57)) ;
      GGS__5B_associatedValue_5D_ var_associatedValueTypeList_2373 = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_HERE) ;
      switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 61)) ;
        bool repeatFlag_6 = true ;
        while (repeatFlag_6) {
          GGS_bool var_weakQualifier_2472 ;
          switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
          case 1: {
            var_weakQualifier_2472 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 67)) ;
            var_weakQualifier_2472 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_associatedValueType_2673 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_associatedValueType_2673, inCompiler) ;
          GGS_lstring var_associatedValueName_2723 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 71)) ;
          {
          var_associatedValueTypeList_2373.setter_append (GGS_associatedValue::init_21__21__21_ (var_weakQualifier_2472, var_associatedValueType_2673, var_associatedValueName_2723, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 72)) ;
          }
          if (select_galgas_33_DeclarationsSyntax_50 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 74)) ;
          }else{
            repeatFlag_6 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 76)) ;
      } break ;
      default:
        break ;
      }
      var_constantList_2252.addAssignOperation (var_constantName_2330, var_associatedValueTypeList_2373  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 78)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_enumTypeName_1546, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 82)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, var_constantList_2252.getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 83)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (var_enumTypeName_1546.readProperty_location (), GGS_string ("an enumerated type must define at least one case constant"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 84)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_enumDeclarationAST::init_21_isPredefined_21__21__21_comparison (GGS_bool (false), var_enumTypeName_1546, var_constantList_2252, var_comparison_1612, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 32)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 52)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 56)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 57)) ;
      switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 61)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 67)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 71)) ;
          if (select_galgas_33_DeclarationsSyntax_50 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 74)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 76)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 27)) ;
  GGS_lstring var_graphTypeName_1556 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 29)) ;
  GGS_lstring var_associatedListTypeName_1657 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_associatedListTypeName_1657, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 32)) ;
  GGS_graphInsertModifierList var_graphInsertModifierList_1705 = GGS_graphInsertModifierList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 36)) ;
      GGS_lstring var_insertName_1829 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 37)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 39)) ;
      GGS_lstring var_errorMessage_1903 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 40)) ;
      var_graphInsertModifierList_1705.addAssignOperation (var_insertName_1829, var_errorMessage_1903  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 41)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 43)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_graphDeclarationAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_graphTypeName_1556, var_associatedListTypeName_1657, var_graphInsertModifierList_1705, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 29)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 36)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 37)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 40)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i41_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_53 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 107)) ;
      GGS_lstring var_typeName_4993 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 108)) ;
      outArgument_outTypeName = function_makeEmbeddedTypeLName (outArgument_outTypeName, var_typeName_4993, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 109)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_53 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 107)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 108)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 117)) ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 119)) ;
  GGS_lstring joker_5448 ; // Joker input parameter
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, joker_5448, inCompiler) ;
  joker_5448.drop () ; // Release temporary input variables (joker in source)
  GenericArray <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 121)), GGS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 122)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 117)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 119)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 122)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 130)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_t_5864 ;
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_t_5864, inCompiler) ;
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_t_5864.readProperty_location (), GGS_string ("not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 133)) ;
    if (select_galgas_33_DeclarationsSyntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 135)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 137)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 130)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 135)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 137)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 145)) ;
  GGS_lstring var_unwrappedTypeName_6249 = outArgument_outTypeName ;
  {
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, outArgument_outTypeName, var_unwrappedTypeName_6249, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 147)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 154)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_55 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 158)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 160)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 154)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_55 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 158)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 27)) ;
  GGS_lstring var_mapTypeName_1554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 28)) ;
  GGS_bool var_isEquatable_1635 ;
  switch (select_galgas_33_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
    var_isEquatable_1635 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 33)) ;
    var_isEquatable_1635 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 36)) ;
  GGS_propertyInCollectionListAST var_propertyList_1759 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertSetterListAST var_mInsertSetterList_1814 = GGS_insertSetterListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mSearchMethodList_1886 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mRemoveSetterList_1938 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_replaceMethodList_1990 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_2057 = GGS_insertOrReplaceDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_searchSubscriptListAST_2125 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_57 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_1759, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertSetterList_1814, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_ (var_mSearchMethodList_1886, inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subscript_5F_declaration_ (var_searchSubscriptListAST_2125, inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_ (var_mRemoveSetterList_1938, inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_ (var_replaceMethodList_1990, inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_2057, inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mapTypeName_1554, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_mapDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (GGS_bool (false), var_mapTypeName_1554, var_propertyList_1759, var_mInsertSetterList_1814, var_mSearchMethodList_1886, var_searchSubscriptListAST_2125, var_mRemoveSetterList_1938, var_replaceMethodList_1990, var_insertOrReplaceDeclarationListAST_2057, var_isEquatable_1635, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_57 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
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
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 62)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i47_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 80)) ;
  GGS_lstring var_methodName_3340 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 82)) ;
  GGS_lstring var_errorMessage_3406 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 83)) ;
  ioArgument_ioMapSearchMethodListAST.addAssignOperation (var_methodName_3340, var_errorMessage_3406  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 84)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i47_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i48_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchSubscriptListAST,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 90)) ;
  GGS_lstring var_methodName_3755 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 92)) ;
  GGS_lstring var_errorMessage_3821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 93)) ;
  ioArgument_ioMapSearchSubscriptListAST.addAssignOperation (var_methodName_3755, var_errorMessage_3821  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i48_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i49_ (GGS_mapAccessorListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 100)) ;
  GGS_lstring var_mMethodName_4157 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 103)) ;
  GGS_lstring var_mErrorMessage_4226 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 104)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssignOperation (var_mMethodName_4157, var_mErrorMessage_4226  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i49_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i50_ (GGS_mapAccessorListAST & ioArgument_ioMapReplaceMethodListAST,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 111)) ;
  GGS_lstring var_mMethodName_4543 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 114)) ;
  GGS_lstring var_mErrorMessage_4612 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 115)) ;
  ioArgument_ioMapReplaceMethodListAST.addAssignOperation (var_mMethodName_4543, var_mErrorMessage_4612  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i50_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i51_ (GGS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 124)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssignOperation (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 125))  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 125)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i51_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i52_ (GGS_insertSetterListAST & ioArgument_ioMapMethodList,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 131)) ;
  GGS_lstring var_mMethodName_5242 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 134)) ;
  GGS_lstring var_mErrorMessage_5311 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 135)) ;
  GGS_lstring var_mShadowErrorMessage_5343 ;
  switch (select_galgas_33_DeclarationsSyntax_58 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5343 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 138)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 140)) ;
    var_mShadowErrorMessage_5343 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 141)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssignOperation (var_mMethodName_5242, var_mErrorMessage_5311, var_mShadowErrorMessage_5343  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i52_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 135)) ;
  switch (select_galgas_33_DeclarationsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 140)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 141)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 27)) ;
  GGS_lstring var_boolsetTypeName_1558 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 28)) ;
  GGS_bool var_isEquatable_1617 ;
  switch (select_galgas_33_DeclarationsSyntax_59 (inCompiler)) {
  case 1: {
    var_isEquatable_1617 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 33)) ;
    var_isEquatable_1617 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 36)) ;
  GGS_lstringlist var_slotList_1754 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 40)) ;
      GGS_lstring var_slotName_1828 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 41)) ;
      var_slotList_1754.addAssignOperation (var_slotName_1828  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 42)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_boolsetTypeName_1558, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 46)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_slotList_1754.getter_count (SOURCE_FILE ("declaration-type-boolset.galgas3", 47)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_boolsetTypeName_1558.readProperty_location (), GGS_string ("a boolset type must define at least one case constant"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 48)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_boolsetDeclarationAST::init_21_isPredefined_21__21__21_isEquatable (GGS_bool (false), var_boolsetTypeName_1558, var_slotList_1754, var_isEquatable_1617, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 40)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 41)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  GGS_bool var_isAbstract_1532 ;
  GGS_bool var_clonable_1557 ;
  GGS_bool var_finalClass_1580 ;
  switch (select_galgas_33_DeclarationsSyntax_61 (inCompiler)) {
  case 1: {
    var_isAbstract_1532 = GGS_bool (false) ;
    var_clonable_1557 = GGS_bool (false) ;
    var_finalClass_1580 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 35)) ;
    var_isAbstract_1532 = GGS_bool (true) ;
    var_clonable_1557 = GGS_bool (false) ;
    var_finalClass_1580 = GGS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 40)) ;
    var_isAbstract_1532 = GGS_bool (false) ;
    var_clonable_1557 = GGS_bool (false) ;
    var_finalClass_1580 = GGS_bool (true) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 45)) ;
    var_isAbstract_1532 = GGS_bool (false) ;
    var_clonable_1557 = GGS_bool (true) ;
    var_finalClass_1580 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 50)) ;
  GGS_lstring var_className_2008 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 51)) ;
  GGS_lstring var_superClassName_2063 ;
  switch (select_galgas_33_DeclarationsSyntax_62 (inCompiler)) {
  case 1: {
    var_superClassName_2063 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas3", 54)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 56)) ;
    var_superClassName_2063 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 57)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_generateInSeparateFile_2261 ;
  switch (select_galgas_33_DeclarationsSyntax_63 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_2261 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 63)) ;
    var_generateInSeparateFile_2261 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 66)) ;
  GGS_propertyInCollectionListAST var_propertyList_2486 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_64 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2486, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_className_2008, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 75)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_classDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_isAbstract_1532, var_finalClass_1580, var_className_2008, var_superClassName_2063, var_generateInSeparateFile_2261, var_propertyList_2486, var_clonable_1557, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 76)) ;
  GGS_lstring temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_superClassName_2063.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = var_superClassName_2063 ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = function_makeWeakTypeLName (var_superClassName_2063, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 92)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_weakReferenceDeclarationAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_className_2008, function_makeWeakTypeLName (var_className_2008, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 89)), temp_1, var_generateInSeparateFile_2261, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 35)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 40)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 50)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 51)) ;
  switch (select_galgas_33_DeclarationsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 56)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 57)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_64 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 44)) ;
  GGS_lstring var_mDictTypeName_2231 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 46)) ;
  GGS_bool var_equatable_2314 ;
  switch (select_galgas_33_DeclarationsSyntax_65 (inCompiler)) {
  case 1: {
    var_equatable_2314 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 51)) ;
    var_equatable_2314 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 54)) ;
  GGS_lstring var_keyTypeName_2475 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_keyTypeName_2475, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 57)) ;
  GGS_propertyInCollectionListAST var_propertyList_2527 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_66 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2527, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mDictTypeName_2231, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 65)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_dictDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_mDictTypeName_2231, var_keyTypeName_2475, var_propertyList_2527, var_equatable_2314, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 46)) ;
  switch (select_galgas_33_DeclarationsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 54)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_66 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i56_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 27)) ;
  GGS_lstring var_sortedListTypeName_1552 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 28)) ;
  GGS_bool var_isEquatable_1647 ;
  switch (select_galgas_33_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
    var_isEquatable_1647 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 33)) ;
    var_isEquatable_1647 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 36)) ;
  GGS_propertyInCollectionListAST var_attributeList_1800 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_68 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_attributeList_1800, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 43)) ;
  GGS_sortedListSortDescriptorListAST var_sortDescriptorList_1976 = GGS_sortedListSortDescriptorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_1976, inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_69 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 50)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_sortedListDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_sortedListTypeName_1552, var_attributeList_1800, var_sortDescriptorList_1976, var_isEquatable_1647, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_68 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 43)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_69 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i57_ (GGS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mSortedAttributeName_2558 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 63)) ;
  GGS_bool var_mAscending_2594 ;
  switch (select_galgas_33_DeclarationsSyntax_70 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 66)) ;
    var_mAscending_2594 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 69)) ;
    var_mAscending_2594 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssignOperation (var_mSortedAttributeName_2558, var_mAscending_2594  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i57_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 63)) ;
  switch (select_galgas_33_DeclarationsSyntax_70 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 66)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 69)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i58_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 27)) ;
  GGS_lstring var_externTypeName_1557 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 28)) ;
  GGS_string var_cppPredeclarationCode_1647 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_1647, inCompiler) ;
  GGS_string var_cppClassCode_1714 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_1714, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 31)) ;
  GGS_externTypeConstructorList var_externTypeConstructorList_1771 = GGS_externTypeConstructorList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeGetterList var_externTypeGetterList_1833 = GGS_externTypeGetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeSetterList var_externTypeSetterList_1890 = GGS_externTypeSetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeMethodList var_externTypeMethodList_1947 = GGS_externTypeMethodList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_71 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeConstructorList_1771, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeGetterList_1833, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeSetterList_1890, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeMethodList_1947, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externTypeDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_externTypeName_1557, var_cppPredeclarationCode_1647, var_cppClassCode_1714, var_externTypeConstructorList_1771, var_externTypeGetterList_1833, var_externTypeSetterList_1890, var_externTypeMethodList_1947, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 28)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_71 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i59_ (GGS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 62)) ;
  outArgument_outCppPredeclarationCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_72 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_2916 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 66)) ;
      outArgument_outCppPredeclarationCode.plusAssignOperation(var_cppPredeclarationCodeElement_2916.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i59_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_72 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i60_ (GGS_string & outArgument_outCppClassCode,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 75)) ;
  outArgument_outCppClassCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_73 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_3296 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 79)) ;
      outArgument_outCppClassCode.plusAssignOperation(var_cppPredeclarationCodeElement_3296.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 80)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i60_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_73 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i61_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GGS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 90)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_3746 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_74 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_3815 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 94)) ;
      GGS_lstring var_argumentTypeName_3878 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_3878, inCompiler) ;
      GGS_lstring var_argumentName_3930 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 96)) ;
      var_argumentTypeList_3746.addAssignOperation (var_selector_3815, var_argumentTypeName_3878, var_argumentName_3930  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 97)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 99)) ;
      GGS_lstring var_selector_4042 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 100)) ;
      GGS_lstring var_argumentTypeName_4114 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_4114, inCompiler) ;
      GGS_lstring var_argumentName_4166 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 102)) ;
      var_argumentTypeList_3746.addAssignOperation (var_selector_4042, var_argumentTypeName_4114, var_argumentName_4166  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 105)) ;
  ioArgument_ioExternTypeConstructorList.addAssignOperation (var_argumentTypeList_3746  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i61_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_74 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 94)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 96)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 99)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 102)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i62_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 113)) ;
  GGS_lstring var_getterName_4623 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 114)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_4676 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_75 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_4745 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 118)) ;
      GGS_lstring var_argumentTypeName_4808 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_4808, inCompiler) ;
      GGS_lstring var_argumentName_4860 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 120)) ;
      var_argumentTypeList_4676.addAssignOperation (var_selector_4745, var_argumentTypeName_4808, var_argumentName_4860  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 121)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 123)) ;
      GGS_lstring var_selector_4972 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 124)) ;
      GGS_lstring var_argumentTypeName_5044 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_5044, inCompiler) ;
      GGS_lstring var_argumentName_5096 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 126)) ;
      var_argumentTypeList_4676.addAssignOperation (var_selector_4972, var_argumentTypeName_5044, var_argumentName_5096  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 129)) ;
  GGS_lstring var_resultTypeName_5255 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_resultTypeName_5255, inCompiler) ;
  ioArgument_ioExternTypeGetterList.addAssignOperation (var_getterName_4623, var_resultTypeName_5255, var_argumentTypeList_4676  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_75 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 118)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 120)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 123)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 126)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 129)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i63_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 139)) ;
  GGS_lstring var_setterName_5668 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 140)) ;
  GGS_formalParameterListAST var_formalParameterList_5738 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_5738, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssignOperation (var_setterName_5668, var_formalParameterList_5738  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 142)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i63_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 139)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 140)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i64_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 149)) ;
  GGS_lstring var_methodName_6128 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 150)) ;
  GGS_formalParameterListAST var_formalParameterList_6198 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_6198, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssignOperation (var_methodName_6128, var_formalParameterList_6198, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 152))  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i64_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 150)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 45)) ;
  GGS_lstring var_lexiqueComponentName_2479 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 48)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_2570 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_2634 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_2697 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_2753 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_2812 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_2884 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_2959 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_3020 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_3067 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_2570, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_2634, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (var_lexicalAttributeList_2697, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__ (var_lexicalStyleList_2753, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__ (var_terminalDeclarationList_2812, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (var_lexicalListDeclarationList_2959, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_3020, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_3020, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (var_lexicalMessageDeclarationList_2884, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (var_indexingListAST_3067, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_2479, GGS_bool (false), var_templateDelimitorList_2570, var_templateReplacementList_2634, var_lexicalAttributeList_2697, var_lexicalStyleList_2753, var_terminalDeclarationList_2812, var_lexicalMessageDeclarationList_2884, var_lexicalListDeclarationList_2959, var_lexicalRuleList_3020, var_indexingListAST_3067, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 102)) ;
  GGS_lstring var_lexiqueComponentName_4542 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 105)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_4633 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_4697 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_4760 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_4816 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_4875 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_4947 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_5022 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_5083 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_5130 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_4633, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_4697, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (var_lexicalAttributeList_4760, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__ (var_lexicalStyleList_4816, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__ (var_terminalDeclarationList_4875, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (var_lexicalListDeclarationList_5022, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_5083, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_5083, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (var_lexicalMessageDeclarationList_4947, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (var_indexingListAST_5130, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 138)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_4542, GGS_bool (true), var_templateDelimitorList_4633, var_templateReplacementList_4697, var_lexicalAttributeList_4760, var_lexicalStyleList_4816, var_terminalDeclarationList_4875, var_lexicalMessageDeclarationList_4947, var_lexicalListDeclarationList_5022, var_lexicalRuleList_5083, var_indexingListAST_5130, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 139)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_ (GGS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas3", 158)) ;
  GGS_lstring var_indexName_6575 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 160)) ;
  GGS_lstring var_indexComment_6658 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 161)) ;
  ioArgument_ioIndexingListAST.addAssignOperation (var_indexName_6575, var_indexComment_6658  COMMA_SOURCE_FILE ("lexique-component.galgas3", 162)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas3", 158)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_ (GGS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 169)) ;
  GGS_lstring var_messageName_6994 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 171)) ;
  GGS_lstring var_messageValue_7045 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 172)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssignOperation (var_messageName_6994, var_messageValue_7045  COMMA_SOURCE_FILE ("lexique-component.galgas3", 173)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 169)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 171)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 172)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 180)) ;
  GGS_lstring var_listName_7375 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 181)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssignOperation (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_7375, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 182)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 180)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 181)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 188)) ;
  GGS_lexicalExpressionAST var_lexicalRuleExpression_7715 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_7715, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 190)) ;
  GGS_lexicalInstructionListAST var_instructionList_7781 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_7781, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 196)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssignOperation (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_7715, var_instructionList_7781, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 197)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 188)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 190)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 196)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas3", 203)) ;
  GGS_lexicalInstructionAST var_instruction_8247 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_8247, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_instruction_8247  COMMA_SOURCE_FILE ("lexique-component.galgas3", 205)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas3", 203)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_ (GGS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas3", 211)) ;
  GGS_lexicalExpressionAST var_whileExpression_8558 ;
  nt_lexical_5F_expression_ (var_whileExpression_8558, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 213)) ;
  GGS_lexicalInstructionListAST var_whileInstructionList_8618 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_8618, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssignOperation (var_whileExpression_8558, var_whileInstructionList_8618  COMMA_SOURCE_FILE ("lexique-component.galgas3", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas3", 211)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 213)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lchar var_character_9049 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 225)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_9049, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 225)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lbigint var_unsignedValue_9382 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas3", 232)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_9382, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas3", 232)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_location var_currentLocation_9707 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 239)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 240)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_9707, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 240)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lstring var_idf_10083 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 247)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_10083, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 251)) ;
    GGS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_10238 = GGS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 255)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_10406 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_10406, inCompiler) ;
        var_functionActualArgumentList_10238.addAssignOperation (var_arg_10406  COMMA_SOURCE_FILE ("lexique-component.galgas3", 257)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 259)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_10083, var_functionActualArgumentList_10238, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 247)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 251)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 255)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 259)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 276)) ;
      GGS_lexicalExpressionAST var_rightExpression_11061 ;
      nt_lexical_5F_factor_ (var_rightExpression_11061, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_11061, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 276)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_string_11359 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 285)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_11359, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 285)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 292)) ;
  GGS_lstring var_string_11622 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 294)) ;
  GGS_lstring var_errorMessage_11665 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 295)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_11622, var_errorMessage_11665, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 295)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_character_11948 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 302)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_11948, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 306)) ;
    GGS_lchar var_upperBound_12077 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 307)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_11948, var_upperBound_12077, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 302)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 306)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 307)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_characterSet_12383 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 315)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_12383, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 315)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_ (GGS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 322)) ;
  GGS_lstring var_name_12709 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 323)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_12752 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      GGS_lstring var_selector_12822 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 327)) ;
      GGS_lstring var_sentAttribute_12857 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 328)) ;
      var_sentAttributeList_12752.addAssignOperation (var_selector_12822, var_sentAttribute_12857  COMMA_SOURCE_FILE ("lexique-component.galgas3", 329)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_theStyle_12949 ;
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 333)) ;
    var_theStyle_12949 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 334)) ;
  } break ;
  case 2: {
    var_theStyle_12949 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 336)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 338)) ;
  GGS_lstring var_errorMessage_13160 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 339)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 340)) ;
  GGS_lexicalListEntryListAST var_entryList_13190 = GGS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_13190, inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 345)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 347)) ;
  ioArgument_ioLexicalListDeclarationList.addAssignOperation (var_name_12709, var_theStyle_12949, var_errorMessage_13160, var_sentAttributeList_12752, var_entryList_13190  COMMA_SOURCE_FILE ("lexique-component.galgas3", 348)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 322)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 323)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 327)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 328)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 333)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 334)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 339)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 340)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 345)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 347)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_ (GGS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_entrySpelling_13634 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 354)) ;
  GGS_bool var_isTemplateEndMark_13657 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_13691 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 359)) ;
      var_isTemplateEndMark_13657 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 362)) ;
      var_nonAtomicSelection_13691 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_13890 ;
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 367)) ;
    var_terminalSpelling_13890 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 368)) ;
  } break ;
  case 2: {
    var_terminalSpelling_13890 = var_entrySpelling_13634 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssignOperation (var_entrySpelling_13634, var_terminalSpelling_13890, var_nonAtomicSelection_13691, var_isTemplateEndMark_13657  COMMA_SOURCE_FILE ("lexique-component.galgas3", 372)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 354)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 359)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 362)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 367)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 368)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_ (GGS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_typeName_14425 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas3", 382)) ;
  GGS_lstring var_name_14467 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 383)) ;
  ioArgument_ioLexicalAttributeList.addAssignOperation (var_typeName_14425, var_name_14467  COMMA_SOURCE_FILE ("lexique-component.galgas3", 384)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas3", 382)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 383)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_ (GGS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_name_14756 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 390)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_14801 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 394)) ;
      GGS_lstring var_selector_14894 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas3", 395)) ;
      GGS_lstring var_sentAttribute_14938 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 396)) ;
      var_sentAttributeList_14801.addAssignOperation (var_selector_14894, var_sentAttribute_14938  COMMA_SOURCE_FILE ("lexique-component.galgas3", 397)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_theStyle_15030 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas3", 399)) ;
  GGS_bool var_nonAtomicSelection_15088 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_15123 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 404)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_15030.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 406)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas3", 406)) ;
        }
      }
      var_theStyle_15030 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 408)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 410)) ;
      var_nonAtomicSelection_15088 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 413)) ;
      var_templateEndMark_15123 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 416)) ;
  GGS_lstring var_errorMessage_15518 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 417)) ;
  ioArgument_ioTerminalDeclarationList.addAssignOperation (var_name_14756, var_sentAttributeList_14801, var_errorMessage_15518, var_theStyle_15030, var_nonAtomicSelection_15088, var_templateEndMark_15123  COMMA_SOURCE_FILE ("lexique-component.galgas3", 418)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 390)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 394)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 396)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 404)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 408)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 410)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 413)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 417)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_ (GGS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 430)) ;
  GGS_lstring var_styleIdentifier_15958 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 431)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_styleIdentifier_15958.readProperty_string ().getter_containsCharacter (GGS_char (utf32 (95)) COMMA_SOURCE_FILE ("lexique-component.galgas3", 432)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_15958.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas3", 433)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_styleIdentifier_15958.readProperty_string ().getter_containsCharacterInRange (GGS_char (utf32 (48)), GGS_char (utf32 (57)) COMMA_SOURCE_FILE ("lexique-component.galgas3", 435)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_15958.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas3", 436)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 438)) ;
  GGS_lstring var_comment_16401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 439)) ;
  ioArgument_ioLexicalStyleList.addAssignOperation (var_styleIdentifier_15958, var_comment_16401  COMMA_SOURCE_FILE ("lexique-component.galgas3", 440)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 430)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 431)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 438)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 439)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i23_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lexicalSendSearchListAST var_lexicalSendSearchList_1987 = GGS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_attributeName_2073 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 41)) ;
    GGS_lstring var_searchListName_2133 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 42)) ;
    var_lexicalSendSearchList_1987.addAssignOperation (var_attributeName_2073, var_searchListName_2133  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 43)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 44)) ;
    if (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_2297 ;
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    GGS_lstring var_defaultSentTerminal_2369 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 50)) ;
    var_lexicalSendDefaultAction_2297 = GGS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_2369, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 53)) ;
    GGS_lstring var_defaultErrorMessageName_2534 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 54)) ;
    var_lexicalSendDefaultAction_2297 = GGS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_2534, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_1987, var_lexicalSendDefaultAction_2297, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 41)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 42)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 44)) ;
    if (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 54)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_actionName_2995 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 62)) ;
  GGS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_3056 = GGS_lexicalRoutineCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 67)) ;
      GGS_location var_passingModeLocation_3130 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 68)) ;
      GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_3263 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_3263, inCompiler) ;
      var_actualArgumentList_3056.addAssignOperation (GGS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_3130, var_arg_3263, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 70)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 72)) ;
      GGS_location var_passingModeLocation_3387 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 73)) ;
      GGS_lstring var_attributeName_3458 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 74)) ;
      GGS_lexicalAttributeInputOutputArgumentAST var_arg_3483 = GGS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_3387, var_attributeName_3458, inCompiler COMMA_HERE) ;
      var_actualArgumentList_3056.addAssignOperation (var_arg_3483  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 76)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstringlist var_errorMessageList_3629 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 81)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_errorMessageName_3733 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 83)) ;
      var_errorMessageList_3629.addAssignOperation (var_errorMessageName_3733  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 84)) ;
      if (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 86)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 89)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_2995, var_actualArgumentList_3056, var_errorMessageList_3629, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 67)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 74)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 81)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 83)) ;
      if (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 86)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i25_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 36)) ;
  GGS_lstring var_tagName_1885 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalTagInstructionAST::init_21_ (var_tagName_1885, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i26_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 37)) ;
  GGS_lexicalSelectBranchListAST var_lexicalWhileBranchList_1997 = GGS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 40)) ;
    GGS_lexicalExpressionAST var_selectExpression_2105 ;
    nt_lexical_5F_expression_ (var_selectExpression_2105, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 42)) ;
    GGS_lexicalInstructionListAST var_selectInstructionList_2170 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_2170, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_1997.addAssignOperation (var_selectExpression_2105, var_selectInstructionList_2170  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 48)) ;
    if (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 51)) ;
  GGS_lexicalInstructionListAST var_defaultInstructionList_2429 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_2429, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 57)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_1997, var_defaultInstructionList_2429, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 40)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 42)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler) == 2) {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 51)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i27_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_sentTerminal_1888 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas3", 36)) ;
  outArgument_outInstruction = GGS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_1888, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 35)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 37)) ;
  GGS_lstring var_tagName_1928 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 39)) ;
  GGS_lstring var_terminalName_1973 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 40)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_1928, var_terminalName_1973, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 38)) ;
  GGS_lexicalInstructionListAST var_repeatedInstructionList_2029 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  GGS_location var_location_2067 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_2029, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalWhileBranchListAST var_lexicalWhileBranchList_2213 = GGS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_2213, inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 50)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_2029, var_lexicalWhileBranchList_2213, var_location_2067, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 36)) ;
  GGS_lstring var_terminalName_1887 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalDropInstructionAST::init_21_ (var_terminalName_1887, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 36)) ;
  GGS_lstring var_warningMessageName_1897 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_1897, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 36)) ;
  GGS_lstring var_errorMessageName_1891 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_1891, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 39)) ;
  GGS_lstring var_lexiqueComponentName_2056 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 42)) ;
  GGS_lstring var_lexiqueSuperComponentName_2118 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 45)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_2214 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_2278 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_2214, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_2278, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_2056, var_lexiqueSuperComponentName_2118, var_templateDelimitorList_2214, var_templateReplacementList_2278, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i35_ (GGS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                            Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 67)) ;
  GGS_lstring var_startString_2944 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 68)) ;
  GGS_bool var_nonAtomicSelection_2965 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_3000 = GGS_bool (false) ;
  GGS_bool var_preserved_3032 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 74)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_nonAtomicSelection_2965.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 76)), GGS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 76)) ;
        }
      }
      var_nonAtomicSelection_2965 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 80)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_templateEndMark_3000.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 82)), GGS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 82)) ;
        }
      }
      var_templateEndMark_3000 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 86)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_preserved_3032.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 88)), GGS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 88)) ;
        }
      }
      var_preserved_3032 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 92)) ;
  GGS_lstring var_endString_3601 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 93)) ;
  ioArgument_ioTemplateDelimitorList.addAssignOperation (var_startString_2944, var_nonAtomicSelection_2965, var_templateEndMark_3000, var_preserved_3032, var_endString_3601  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 74)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 80)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 86)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i36_ (GGS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 105)) ;
  GGS_lstring var_matchString_4008 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 106)) ;
  GGS_lstring var_replacementString_4038 ;
  GGS_lstring var_replacementFunction_4073 ;
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 110)) ;
    var_replacementString_4038 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 112)) ;
    var_replacementFunction_4073 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 115)) ;
    var_replacementString_4038 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 116)) ;
    var_replacementFunction_4073 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 117)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssignOperation (var_matchString_4008, var_replacementString_4038, var_replacementFunction_4073  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 106)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 112)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 116)) ;
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas3", 29)) ;
  GGS_lstring var_optionComponentName_1575 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 31)) ;
  GGS_commandLineOptionListAST var_options_1638 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_1638, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 37)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_1575, var_options_1638, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_2105 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas3", 48)) ;
  GGS_lstring var_mOptionInternalName_2154 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 50)) ;
  GGS_lchar var_mOptionInvocationLetter_2209 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 52)) ;
  GGS_lstring var_mOptionInvocationString_2272 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 54)) ;
  GGS_lstring var_mOptionComment_2336 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 55)) ;
  GGS_lstring var_defaultValue_2360 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 56)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_2441 ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_2441 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 59)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas3", 61)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_2360 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 63)) ;
      var_optionDefaultValueKind_2441 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 64)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_2683 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas3", 66)) ;
      var_defaultValue_2360 = GGS_lstring::init_21__21_ (var_v_2683.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas3", 67)), var_v_2683.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_2441 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 68)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_2105, var_mOptionInternalName_2154, var_mOptionInvocationLetter_2209, var_mOptionInvocationString_2272, var_mOptionComment_2336, var_defaultValue_2360, var_optionDefaultValueKind_2441  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas3", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 55)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas3", 61)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 63)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas3", 66)) ;
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

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas3", 122)) ;
  GGS_lstring var_mGUIName_4677 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 124)) ;
  GGS_lstringlist var_importedOptionList_4716 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleGlobalAttributes_4776 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_withLexiqueListAST var_withLexiqueList_4833 = GGS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GGS_projectIndexingDescriptorList var_projectExtensionList_4894 = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas3", 131)) ;
      GGS_lstring var_fileExtension_4981 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas3", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas3", 134)) ;
      GGS_lstring var_indexingPathSuffix_5047 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 135)) ;
      var_projectExtensionList_4894.addAssignOperation (var_fileExtension_4981, var_indexingPathSuffix_5047  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 136)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_4776, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_4716, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_4833, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 145)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssignOperation (var_mGUIName_4677, var_importedOptionList_4716, var_simpleGlobalAttributes_4776, var_withLexiqueList_4833, var_projectExtensionList_4894  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 146)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 124)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas3", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas3", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas3", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 135)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas3", 158)) ;
  GGS_lstring var_lexiqueReference_5761 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 159)) ;
  GGS_guiLabelListAST var_labels_5804 = GGS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleAttributes_5852 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiCompoundAttributeListAST var_compoundAttributes_5912 = GGS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas3", 166)) ;
      GGS_uint var_displayStyle_5996 ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_5996 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 171)) ;
        var_displayStyle_5996 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS_terminalLabelListAST var_terminalList_6135 = GGS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_6206 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 176)) ;
        GGS_uint var_displayFlags_6234 ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_6234 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 181)) ;
          var_displayFlags_6234 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 184)) ;
          GGS_lbigint var_leadingStrip_6428 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 185)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_6428.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 186)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_6428.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 187)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 189)) ;
          GGS_lbigint var_endingStrip_6607 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 190)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_6607.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 191)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_6607.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 192)) ;
            }
          }
          var_displayFlags_6234 = var_leadingStrip_6428.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 194)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 194)).operator_or (var_endingStrip_6607.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas3", 194)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 194)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 195)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_6135.addAssignOperation (var_terminal_6206, var_displayFlags_6234  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 197)) ;
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 199)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_5804.addAssignOperation (var_displayStyle_5996, var_terminalList_6135, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 201))  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 201)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_7014 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 203)) ;
      GGS_lstring var_name_7051 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 204)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 205)) ;
      GGS_lstring var_value_7077 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 206)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_7163 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 208)) ;
        var_value_7077 = GGS_lstring::init_21__21_ (var_value_7077.readProperty_string ().add_operation (var_v_7163.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 209)), var_v_7163.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_5912.addAssignOperation (var_key_7014, var_name_7051, var_value_7077  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 212)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_7342 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 215)) ;
      GGS_lstring var_value_7390 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 216)) ;
      var_simpleAttributes_5852.addAssignOperation (var_name_7342, var_value_7390  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 217)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 219)) ;
  ioArgument_ioWithLexiqueList.addAssignOperation (var_lexiqueReference_5761, var_labels_5804, var_simpleAttributes_5852, var_compoundAttributes_5912  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 220)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas3", 158)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas3", 166)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 171)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 176)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 181)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 184)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 185)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 189)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 190)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 195)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 199)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 203)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 204)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 205)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 208)) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 215)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 216)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas3", 227)) ;
  GGS_lstring var_optionReference_7782 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 228)) ;
  ioArgument_ioImportedOptionList.addAssignOperation (var_optionReference_7782  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 229)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas3", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 228)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mKey_8065 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 236)) ;
  GGS_lstring var_mValue_8087 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 237)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_8161 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 239)) ;
    var_mValue_8087 = GGS_lstring::init_21__21_ (var_mValue_8087.readProperty_string ().add_operation (var_value_8161.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 240)), var_value_8161.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssignOperation (var_mKey_8065, var_mValue_8087  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 243)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 239)) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 46)) ;
  GGS_lstring var_syntaxComponentName_2607 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 47)) ;
  GGS_lstring var_importedLexiqueReference_2670 ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_2670 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 53)) ;
    var_importedLexiqueReference_2670 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 54)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 55)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasTranslateFeature_2874 ;
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2874 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 62)) ;
    var_hasTranslateFeature_2874 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 65)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3051 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_3122 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_3051, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_3122, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 76)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssignOperation (var_syntaxComponentName_2607, var_importedLexiqueReference_2670, var_nonterminalDeclarationList_3051, var_ruleList_3122, var_hasTranslateFeature_2874  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 77)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 47)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 54)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 55)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 62)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 65)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 91)) ;
  GGS_lstring var_syntaxComponentName_3919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 93)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3985 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_4056 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_3985, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_4056, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 104)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_3919.readProperty_string (), var_syntaxComponentName_3919, var_nonterminalDeclarationList_3985, var_ruleList_4056, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 105)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 93)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 119)) ;
  GGS_lstring var_mNonterminalName_4947 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 120)) ;
  GGS_nonTerminalLabelListAST var_labels_5024 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_firstBranchFormalParameters_5095 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_5095, inCompiler) ;
  var_labels_5024.addAssignOperation (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 123)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_5095, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 123))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 126)) ;
      GGS_lstring var_labelName_5258 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 127)) ;
      GGS_formalParameterListAST var_formalParameters_5353 ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameters_5353, inCompiler) ;
      var_labels_5024.addAssignOperation (var_labelName_5258, var_formalParameters_5353, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 129))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssignOperation (var_mNonterminalName_4947, var_labels_5024  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 119)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 120)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 127)) ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                const GGS_lstring constinArgument_inLabelName,
                                                                                                                GGS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                Lexique_galgasScanner_33_ * inCompiler) {
  GGS_formalParameterListAST var_formalParameters_6008 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameters_6008, inCompiler) ;
  GGS_location var_endOfArguments_6034 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 143)) ;
  GGS_syntaxInstructionList var_mSyntaxInstructionList_6156 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_6156, inCompiler) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_formalParameters_6008, var_endOfArguments_6034, var_mSyntaxInstructionList_6156, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 150))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 143)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 157)) ;
  GGS_lstring var_mNonterminalName_6588 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 158)) ;
  GGS_lstring var_labelName_6640 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 159)), inCompiler COMMA_HERE) ;
  GGS_syntaxRuleLabelListAST var_mLabelList_6691 = GGS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_6640, var_mLabelList_6691, inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 164)) ;
      var_labelName_6640 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 165)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssignOperation (var_mNonterminalName_6588, var_mLabelList_6691  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 167)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 157)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 158)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 164)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 165)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                 GGS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GGS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        GGS_semanticInstructionAST var_instruction_7537 ;
        nt_semantic_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7537, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_7537  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 184)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_7672 ;
        nt_syntax_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7672, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_7672  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 187)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 191)) ;
        } break ;
        case 2: {
          GGS_string var_separator_7814 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 193)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_7814.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 194)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 194)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 195)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 195)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        nt_semantic_5F_instruction_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        nt_syntax_5F_instruction_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 191)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 26)) ;
  GGS_location var_instructionLocation_1506 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 27)) ;
  GGS_semanticExpressionAST var_sentExpression_1612 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sentExpression_1612, inCompiler) ;
  outArgument_outInstruction = GGS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_1506, var_sentExpression_1612, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 26)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mNonterminalName_1523 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 26)) ;
  GGS_actualParameterListAST var_mActualParameterList_1648 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_mActualParameterList_1648, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_1791 ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_1791 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 33)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_1791, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_nonterminalCallInstruction::init_21__21__21__21_ (var_mNonterminalName_1523.readProperty_location (), var_mNonterminalName_1523, var_mActualParameterList_1648, var_grammarInstructionSyntaxDirectedTranslationResult_1791, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 26)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 33)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_terminalName_1521 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 26)) ;
  GGS_actualInputParameterListAST var_actualInputParameterList_1656 ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualInputParameterList_1656, inCompiler) ;
  GGS__32_lstringlist var_indexNameList_1724 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_1724, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1860 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1990 ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1860 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1990 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1860, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1990, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_1521.readProperty_location (), var_terminalName_1521, var_actualInputParameterList_1656, var_indexNameList_1724, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1860, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1990, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 26)) ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_ (GGS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                            Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 56)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 57)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_3189 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 59)) ;
      GGS_lstring var_postfixName_3254 ;
      switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
        var_postfixName_3254 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas3", 62)) ;
      } break ;
      case 2: {
        var_postfixName_3254 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 64)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssignOperation (var_indexName_3189, var_postfixName_3254  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 66)) ;
      if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 68)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 70)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 56)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 57)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 59)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 64)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 68)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 70)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas3", 37)) ;
  GGS_location var_mSelectInstructionLocation_2000 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 38)) ;
  GGS_listOfSyntaxInstructionList var_mSelectBranchList_2052 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_2186 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2186, inCompiler) ;
  var_mSelectBranchList_2052.addAssignOperation (var_il_2186, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 41))  COMMA_SOURCE_FILE ("instruction-select.galgas3", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas3", 43)) ;
    GGS_syntaxInstructionList var_instructionList_2341 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2341, inCompiler) ;
    var_mSelectBranchList_2052.addAssignOperation (var_instructionList_2341, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 45))  COMMA_SOURCE_FILE ("instruction-select.galgas3", 45)) ;
    if (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas3", 48)) ;
  GGS_location var_endOf_5F_select_5F_instruction_2454 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 49)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_2000, var_mSelectBranchList_2052, var_endOf_5F_select_5F_instruction_2454, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas3", 37)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas3", 43)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas3", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 39)) ;
  GGS_location var_mRepeatInstructionLocation_2124 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 40)) ;
  GGS_syntaxInstructionList var_mRepeatedInstructionList_2250 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_2250, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_2284 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 42)) ;
  GGS_listOfSyntaxInstructionList var_mRepeatBranchList_2337 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 45)) ;
    GGS_syntaxInstructionList var_mInstructionList_2498 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_2498, inCompiler) ;
    var_mRepeatBranchList_2337.addAssignOperation (var_mInstructionList_2498, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 47))  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 47)) ;
    if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 50)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_2614 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 51)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_2124, var_mRepeatedInstructionList_2250, var_endOf_5F_repeated_5F_instructions_2284, var_mRepeatBranchList_2337, var_endOf_5F_repeat_5F_instruction_2614, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 39)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 50)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lbool var_hasIndexing_1956 ;
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_1956 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 37)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_1956 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 39)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 42)) ;
  GGS_lstring var_mGrammarName_2160 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 43)) ;
  GGS_lstring var_mGrammarClass_2242 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 44)) ;
  GGS_bool var_hasTranslateFeature_2297 ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2297 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 50)) ;
    var_hasTranslateFeature_2297 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 53)) ;
  GGS_lstringlist var_syntaxComponents_2474 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 57)) ;
    GGS_lstring var_syntaxComponent_2557 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 58)) ;
    var_syntaxComponents_2474.addAssignOperation (var_syntaxComponent_2557  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 59)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mStartSymbol_2692 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 63)) ;
  GGS_nonTerminalLabelListAST var_mLabelList_2739 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 65)), inCompiler COMMA_HERE), var_mLabelList_2739, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 68)) ;
      GGS_lstring var_labelName_2953 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 69)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, var_labelName_2953, var_mLabelList_2739, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstringlist var_mUnusedNonterminalList_3102 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 76)) ;
      GGS_lstring var_nonterminalSymbolName_3217 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 77)) ;
      var_mUnusedNonterminalList_3102.addAssignOperation (var_nonterminalSymbolName_3217  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 78)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_1956, var_mGrammarName_2160, var_mGrammarClass_2242, var_syntaxComponents_2474, var_mStartSymbol_2692, var_mLabelList_2739, var_mUnusedNonterminalList_3102, var_hasTranslateFeature_2297, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 42)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 44)) ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 50)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 57)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 58)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 63)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 68)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 69)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 76)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 77)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                         const GGS_lstring constinArgument_inLabelName,
                                                                                                                                         GGS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GGS_stringset var_argumentNameSet_3957 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_mFormalParameterList_4011 = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      GGS_lstring var_argumentName_4119 ;
      nt_label_5F_formal_5F_parameter_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentName_4119, var_mFormalParameterList_4011, inCompiler) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_argumentNameSet_3957.getter_hasKey (var_argumentName_4119.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 104)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_4119.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_4119.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 105)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 105)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 105)) ;
        }
      }
      var_argumentNameSet_3957.plusPlusAssignOperation (var_argumentName_4119.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 107)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_mFormalParameterList_4011, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 109))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      nt_label_5F_formal_5F_parameter_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_4803 ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
    var_selector_4803 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 119)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 121)) ;
    var_selector_4803 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 122)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 126)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mTypeName_5002 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_5002, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 131)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 133)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_4803, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 136)), var_mTypeName_5002, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 119)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 121)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 126)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_5601 ;
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
    var_selector_5601 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 149)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 151)) ;
    var_selector_5601 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 152)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 154)) ;
  GGS_lstring var_mTypeName_5772 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_5772, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 158)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 160)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (var_selector_5601, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 163)), var_mTypeName_5772, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 149)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 151)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 154)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_6380 ;
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_selector_6380 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 177)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 179)) ;
    var_selector_6380 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 180)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mTypeName_6543 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_6543, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 185)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 187)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_6380, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 190)), var_mTypeName_6543, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 188)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 177)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 179)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 185)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 187)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_7167 ;
  switch (select_galgas_33_GrammarComponentSyntax_13 (inCompiler)) {
  case 1: {
    var_selector_7167 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 203)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 205)) ;
    var_selector_7167 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 206)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mTypeName_7328 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_7328, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 209)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_7167, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 212)), var_mTypeName_7328, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 210)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 203)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 205)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 209)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 38)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_2141 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_prologueInstructionList_2141, inCompiler) ;
  GGS_location var_endOfPrologue_2176 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 41)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssignOperation (var_prologueInstructionList_2141, var_endOfPrologue_2176  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 38)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 53)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_2723 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_prologueInstructionList_2723, inCompiler) ;
  GGS_location var_endOfPrologue_2756 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 56)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssignOperation (var_prologueInstructionList_2723, var_endOfPrologue_2756  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 53)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 68)) ;
  GGS_lstring var_mSourceFileExtension_3250 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 70)) ;
  GGS_lstring var_mSourceFileHelp_3316 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 71)) ;
  GGS_lstring var_referenceGrammar_3376 ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_3376 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas3", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 77)) ;
    var_referenceGrammar_3376 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 78)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_3553 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 81)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_3553.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3553.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 83)) ;
    }
  }
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_3759 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 87)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_3759.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3759.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 89)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_bool var_isUnused_3914 ;
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_3914 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 96)) ;
    var_isUnused_3914 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mSourceFileVariableName_4041 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 101)) ;
  GGS_semanticInstructionListAST var_mInstructionList_4171 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_4171, inCompiler) ;
  GGS_location var_endOfInstructionList_4197 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 104)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssignOperation (var_mSourceFileExtension_3250, var_mSourceFileHelp_3316, var_mSourceFileVariableName_4041, var_isUnused_3914, var_referenceGrammar_3376, var_mInstructionList_4171, var_endOfInstructionList_4197  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 71)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 78)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 81)) ;
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 87)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 96)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 101)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 104)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 66)) ;
  nt_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 66)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_classFuncName_3132 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas4", 76)) ;
  GGS_location var_startOfExpression_3180 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 78)) ;
  GGS_actualOutputArgumentList var_expressionList_3249 ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    var_expressionList_3249 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 83)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3249, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 85)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_3412 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 87)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startOfExpression_3180, inCompiler COMMA_HERE), var_classFuncName_3132, var_expressionList_3249, var_startOfExpression_3180.getter_union (var_endOfExpression_3412, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 92)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas4", 76)) ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 83)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 85)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                                const GGS_lstring constinArgument_inClassFunctionName,
                                                                                                                                GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_actualOutputArgumentList var_expressionList_4093 ;
  GGS_location var_startOfExpression_4116 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 104)) ;
  switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
    var_expressionList_4093 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 108)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4093, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 110)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_4299 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 112)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (constinArgument_inTypeName, constinArgument_inClassFunctionName, var_expressionList_4093, var_startOfExpression_4116.getter_union (var_endOfExpression_4299, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 117)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 108)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 110)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_startLocation_2348 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 55)) ;
  GGS_collectionValueElementList var_expressionList_2423 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_2543 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_2543, inCompiler) ;
      var_expressionList_2423.plusPlusAssignOperation (GGS_collectionValueElementList_2E_element::init_21__21_ (var_expression_2543, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 61)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 61)) ;
      if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startLocation_2348, inCompiler COMMA_HERE), var_expressionList_2423, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 66)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 55)) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                 GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 75)) ;
  GGS_collectionValueElementList var_expressionList_3104 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_3224 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_3224, inCompiler) ;
      var_expressionList_3104.plusPlusAssignOperation (GGS_collectionValueElementList_2E_element::init_21__21_ (var_expression_3224, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 81)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 81)) ;
      if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_3104, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 86)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 75)) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_2061 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 42)) ;
  outArgument_outExpression = GGS_varInExpressionAST::init_21_ (var_identifier_2061, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_4909 ;
      switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        var_selector_4909 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 126)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 128)) ;
        var_selector_4909 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 129)) ;
      } break ;
      case 3: {
        var_selector_4909 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 131)) ;
      } break ;
      default:
        break ;
      }
      GGS_semanticExpressionAST var_expression_5142 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_5142, inCompiler) ;
      outArgument_outExpressionList.plusPlusAssignOperation (GGS_actualOutputArgumentList_2E_element::init_21__21__21_ (var_selector_4909, var_expression_5142, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 134)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 134)) ;
      if (select_galgas_34_ExpressionSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 136)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 126)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 128)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 136)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                           GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_selector_5603 ;
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      var_selector_5603 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 150)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 152)) ;
      var_selector_5603 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 153)) ;
    } break ;
    case 3: {
      var_selector_5603 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 155)) ;
    } break ;
    default:
      break ;
    }
    GGS_semanticExpressionAST var_expression_5818 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_5818, inCompiler) ;
    outArgument_outExpressionList.plusPlusAssignOperation (GGS_actualOutputArgumentList_2E_element::init_21__21__21_ (var_selector_5603, var_expression_5818, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 158)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 158)) ;
    if (select_galgas_34_ExpressionSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 150)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 152)) ;
    } break ;
    case 3: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 74)) ;
  GGS_lstring var_optionComponentName_3228 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 76)) ;
  GGS_lstring var_optionName_3316 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 78)) ;
  GGS_lstring var_getterName_3359 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 79)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (var_optionComponentName_3228, var_optionName_3316, var_getterName_3359, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 74)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 89)) ;
  GGS_lstring var_optionName_3742 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 91)) ;
  GGS_lstring var_getterName_3785 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 92)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("galgas_builtin_options"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 93)), inCompiler COMMA_HERE), var_optionName_3742, var_getterName_3785, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_2500 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 52)) ;
  outArgument_outExpression = GGS_literalCharExpressionAST::init_21_ (var_literalChar_2500, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_2510 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 52)) ;
  outArgument_outExpression = GGS_literalBigIntExpressionAST::init_21_ (var_literalInt_2510, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_stringlist var_literalStringList_2688 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_literalString_2746 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 60)) ;
    var_literalStringList_2688.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_literalString_2746.readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 61)) ;
    if (select_galgas_34_ExpressionSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GGS_literalStringExpressionAST::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 64)), var_literalStringList_2688, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 60)) ;
    if (select_galgas_34_ExpressionSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i13_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 59)) ;
  GGS_lstring var_lexiqueName_2674 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 61)) ;
  GGS_lstring var_getterName_2718 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 62)) ;
  outArgument_outExpression = GGS_lexiqueIntrospectionExpressionAST::init_21__21_ (var_lexiqueName_2674, var_getterName_2718, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2605 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryMinusExpressionAST::init_21__21_ (var_operatorLocation_2605, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2593 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_notExpressionAST::init_21__21_ (var_operatorLocation_2593, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2622 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryWrappingMinusExpressionAST::init_21__21_ (var_operatorLocation_2622, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 92)) ;
  GGS_lstring var_filewrapperName_3769 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_filewrapperObjectInstanciationInExpressionAST::init_21_ (var_filewrapperName_3769, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
    case 1: {
      GGS_lstring var_filePath_3981 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 99)) ;
      outArgument_outExpression = GGS_filewrapperInExpressionAST::init_21__21_ (var_filewrapperName_3769, var_filePath_3981, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_filewrapperTemplateName_4147 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 106)) ;
      GGS_actualOutputArgumentList var_expressionList_4267 ;
      nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4267, inCompiler) ;
      outArgument_outExpression = GGS_filewrapperTemplateInExpressionAST::init_21__21__21_ (var_filewrapperName_3769, var_filewrapperTemplateName_4147, var_expressionList_4267, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 92)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 99)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 106)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_3095 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3095, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_ (var_typeName_3095, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 71)) ;
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 1: {
      GGS_lstring var_classFuncName_3262 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas4", 73)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (var_typeName_3095, var_classFuncName_3262, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (var_typeName_3095, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 71)) ;
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas4", 73)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (inCompiler) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i19_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                               GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                               GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_t_3913 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3913, inCompiler) ;
  GGS_lstring var_typeName_3924 = function_makeEmbeddedTypeLName (constinArgument_inTypeName, var_t_3913, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 88)) ;
  switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_ (var_typeName_3924, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 92)) ;
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      GGS_lstring var_classFuncName_4146 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas4", 94)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (var_typeName_3924, var_classFuncName_4146, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (var_typeName_3924, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 92)) ;
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas4", 94)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (inCompiler) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 108)) ;
  GGS_location var_initLocation_4758 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 109)) ;
  GGS_actualOutputArgumentList var_expressionList_4841 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4841, inCompiler) ;
  GGS_location var_endOfExpression_4865 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 112)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_initLocation_4758, inCompiler COMMA_HERE), var_expressionList_4841, var_endOfExpression_4865, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 108)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 126)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 126)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i22_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                  GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 135)) ;
  GGS_actualOutputArgumentList var_expressionList_5842 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_5842, inCompiler) ;
  GGS_location var_endOfExpression_5866 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 138)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_5842, var_endOfExpression_5866, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 135)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 150)) ;
  GGS_location var_endOfExpression_6265 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 151)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 152)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_endOfExpression_6265, inCompiler COMMA_HERE), GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE), var_endOfExpression_6265, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                    GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5224 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5278 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5368 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5368, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionAST::init_21__21__21_ (var_operatorLocation_5224, var_leftOperand_5278, var_rightOperand_5368, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5500 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5555 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5645 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5645, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_5500, var_leftOperand_5555, var_rightOperand_5645, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5787 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5841 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5908 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5908, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionAST::init_21__21__21_ (var_operatorLocation_5787, var_leftOperand_5841, var_rightOperand_5908, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6034 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6089 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6156 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6156, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6034, var_leftOperand_6089, var_rightOperand_6156, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6292 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6348 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6415 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6415, inCompiler) ;
      outArgument_outExpression = GGS_moduloExpressionAST::init_21__21__21_ (var_operatorLocation_6292, var_leftOperand_6348, var_rightOperand_6415, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 121)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 127)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 133)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 139)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 145)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 52)) ;
  outArgument_outExpression = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 53)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 66)) ;
  outArgument_outExpression = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 67)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 74)) ;
  outArgument_outExpression = GGS_falseExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 75)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2603 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryPlusExpressionAST::init_21__21_ (var_operatorLocation_2603, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2607 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 56)) ;
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 58)) ;
  outArgument_outExpression = GGS_bangExpressionAST::init_21__21_ (var_operatorLocation_2607, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                          GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_location var_endOfReceiverExpression_3939 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 108)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas4", 109)) ;
    GGS_lstring var_typeName_4011 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas4", 110)) ;
    outArgument_outExpression = GGS_testDynamicClassInExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_3939, GGS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("expression-is-as.galgas4", 114)), var_typeName_4011, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_location var_endOfReceiverExpression_4197 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 118)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas4", 119)) ;
    GGS_lstring var_typeName_4269 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas4", 120)) ;
    outArgument_outExpression = GGS_castInExpressionAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_4197, var_typeName_4269, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas4", 109)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas4", 110)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas4", 119)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas4", 120)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5742 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 135)) ;
      GGS_semanticExpressionAST var_leftOperand_5797 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5862 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_5862, inCompiler) ;
      outArgument_outExpression = GGS_leftShiftExpressionAST::init_21__21__21_ (var_operatorLocation_5742, var_leftOperand_5797, var_rightOperand_5862, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5989 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 140)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 141)) ;
      GGS_semanticExpressionAST var_leftOperand_6044 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6109 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6109, inCompiler) ;
      outArgument_outExpression = GGS_rightShiftExpressionAST::init_21__21__21_ (var_operatorLocation_5989, var_leftOperand_6044, var_rightOperand_6109, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_6237 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 146)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 147)) ;
      GGS_semanticExpressionAST var_leftOperand_6291 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6356 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6356, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionAST::init_21__21__21_ (var_operatorLocation_6237, var_leftOperand_6291, var_rightOperand_6356, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6477 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 152)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 153)) ;
      GGS_semanticExpressionAST var_leftOperand_6532 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6597 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6597, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6477, var_leftOperand_6532, var_rightOperand_6597, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6728 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 158)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 159)) ;
      GGS_semanticExpressionAST var_leftOperand_6782 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6847 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6847, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionAST::init_21__21__21_ (var_operatorLocation_6728, var_leftOperand_6782, var_rightOperand_6847, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_6968 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 164)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 165)) ;
      GGS_semanticExpressionAST var_leftOperand_7023 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7088 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_7088, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6968, var_leftOperand_7023, var_rightOperand_7088, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 135)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 141)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 147)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 153)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 159)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 165)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5216 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5270 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5345 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5345, inCompiler) ;
      outArgument_outExpression = GGS_orExpressionAST::init_21__21__21_ (var_operatorLocation_5216, var_leftOperand_5270, var_rightOperand_5345, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5465 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5520 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5595 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5595, inCompiler) ;
      outArgument_outExpression = GGS_orShortExpressionAST::init_21__21__21_ (var_operatorLocation_5465, var_leftOperand_5520, var_rightOperand_5595, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5720 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5774 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5849 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5849, inCompiler) ;
      outArgument_outExpression = GGS_xorExpressionAST::init_21__21__21_ (var_operatorLocation_5720, var_leftOperand_5774, var_rightOperand_5849, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_5970 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6026 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6101 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6101, inCompiler) ;
      outArgument_outExpression = GGS_closedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_5970, var_leftOperand_6026, var_rightOperand_6101, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6230 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6286 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6361 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6361, inCompiler) ;
      outArgument_outExpression = GGS_openedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_6230, var_leftOperand_6286, var_rightOperand_6361, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 121)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 127)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 133)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 139)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 145)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 98)) ;
      GGS_actualOutputArgumentList var_expressionList_3808 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3808, inCompiler) ;
      outArgument_outExpression = GGS_subscriptReadAccessExpressionAST::init_21__21__21_ (outArgument_outExpression, var_expressionList_3808, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 106)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 108)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 110)) ;
      GGS_lstring var_structFieldName_4014 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 111)) ;
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
        outArgument_outExpression = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_structFieldName_4014.readProperty_location (), outArgument_outExpression, var_structFieldName_4014, inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        GGS_lstring var_getterName_4243 = var_structFieldName_4014 ;
        GGS_location var_startLocation_4284 = GGS_location::class_func_next (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 120)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 121)) ;
        GGS_actualOutputArgumentList var_expressionList_4410 ;
        nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4410, inCompiler) ;
        GGS_location var_endLocation_4438 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 123)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 124)) ;
        outArgument_outExpression = GGS_getterCallExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_getterName_4243, var_expressionList_4410, var_startLocation_4284.getter_union (var_endLocation_4438, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 129)), inCompiler COMMA_HERE) ;
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
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 98)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 108)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 110)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 111)) ;
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 121)) ;
        nt_output_5F_expression_5F_list_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 124)) ;
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
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 53)) ;
  GGS_lstring var_typeName_2524 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 54)) ;
  outArgument_outExpression = GGS_literalTypeInExpressionAST::init_21_ (var_typeName_2524, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2117 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas4", 45)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_tildeExpressionAST::init_21__21_ (var_operatorLocation_2117, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas4", 45)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_24 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5260 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5315 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5393 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5393, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5260, var_leftOperand_5315, GGS_comparison::class_func_equal (SOURCE_FILE ("expression-comparison.galgas4", 124)), var_rightOperand_5393, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5529 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5584 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5662 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5662, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5529, var_leftOperand_5584, GGS_comparison::class_func_notEqual (SOURCE_FILE ("expression-comparison.galgas4", 130)), var_rightOperand_5662, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5801 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5856 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5934 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5934, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5801, var_leftOperand_5856, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas4", 136)), var_rightOperand_5934, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6077 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6132 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6210 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6210, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6077, var_leftOperand_6132, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas4", 142)), var_rightOperand_6210, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6355 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6409 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6487 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6487, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6355, var_leftOperand_6409, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("expression-comparison.galgas4", 148)), var_rightOperand_6487, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_6629 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 150)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 151)) ;
      GGS_semanticExpressionAST var_leftOperand_6683 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6761 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6761, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6629, var_leftOperand_6683, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("expression-comparison.galgas4", 154)), var_rightOperand_6761, inCompiler COMMA_HERE) ;
    } break ;
    case 8: {
      GGS_location var_operatorLocation_6901 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 156)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 157)) ;
      GGS_semanticExpressionAST var_leftOperand_6957 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7035 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_7035, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6901, var_leftOperand_6957, GGS_comparison::class_func_sameInstance (SOURCE_FILE ("expression-comparison.galgas4", 160)), var_rightOperand_7035, inCompiler COMMA_HERE) ;
    } break ;
    case 9: {
      GGS_location var_operatorLocation_7178 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 162)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 163)) ;
      GGS_semanticExpressionAST var_leftOperand_7234 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7312 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_7312, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_7178, var_leftOperand_7234, GGS_comparison::class_func_differentInstances (SOURCE_FILE ("expression-comparison.galgas4", 166)), var_rightOperand_7312, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 121)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 127)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 133)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 139)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 145)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 151)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 157)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 163)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i37_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ldouble var_literalDouble_2525 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 53)) ;
  outArgument_outExpression = GGS_literalDoubleExpressionAST::init_21_ (var_literalDouble_2525, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_3525 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas4", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 83)) ;
  GGS_actualOutputArgumentList var_expressionList_3650 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3650, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 85)) ;
  outArgument_outExpression = GGS_functionCallExpressionAST::init_21__21_ (var_functionName_3525, var_expressionList_3650, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas4", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 83)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 85)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_25 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3540 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 78)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas4", 79)) ;
      GGS_semanticExpressionAST var_leftOperand_3594 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3693 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_3693, inCompiler) ;
      outArgument_outExpression = GGS_andExpressionAST::init_21__21__21_ (var_operatorLocation_3540, var_leftOperand_3594, var_rightOperand_3693, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3814 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 84)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas4", 85)) ;
      GGS_semanticExpressionAST var_leftOperand_3869 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3968 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_3968, inCompiler) ;
      outArgument_outExpression = GGS_andShortExpressionAST::init_21__21__21_ (var_operatorLocation_3814, var_leftOperand_3869, var_rightOperand_3968, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas4", 79)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas4", 85)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 67)) ;
  GGS_semanticExpressionAST var_ifExpression_2964 ;
  nt_expression_ (ioArgument_ioDeclarations, var_ifExpression_2964, inCompiler) ;
  GGS_location var_operatorLocation_2986 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 70)) ;
  GGS_semanticExpressionAST var_thenExpression_3072 ;
  nt_expression_ (ioArgument_ioDeclarations, var_thenExpression_3072, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 72)) ;
  GGS_semanticExpressionAST var_elseExpression_3140 ;
  nt_expression_ (ioArgument_ioDeclarations, var_elseExpression_3140, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 74)) ;
  outArgument_outExpression = GGS_ifExpressionAST::init_21__21__21__21_ (var_operatorLocation_2986, var_ifExpression_2964, var_thenExpression_3072, var_elseExpression_3140, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 67)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 70)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 72)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i41_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 44)) ;
  outArgument_outExpression = GGS_nilExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 45)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 44)) ;
}

