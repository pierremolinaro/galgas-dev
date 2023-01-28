#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
  GALGAS_lstring var_optionComponentName_1671 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 40)) ;
  GALGAS_commandLineOptionListAST var_options_1721 = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("optionCompilation.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_OptionComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_option_5F_declaration_ (var_options_1721, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool (false), var_optionComponentName_1671, var_options_1721  COMMA_SOURCE_FILE ("optionCompilation.galgas", 47))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_OptionComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_option_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_OptionComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_option_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_ (GALGAS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_mOptionTypeName_2190 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  GALGAS_lstring var_mOptionInternalName_2241 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  GALGAS_lchar var_mOptionInvocationLetter_2298 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
  GALGAS_lstring var_mOptionInvocationString_2359 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
  GALGAS_lstring var_mOptionComment_2412 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 64)) ;
  GALGAS_lstring var_defaultValue_2433 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 65))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 65)) ;
  GALGAS_optionDefaultValueEnumAST var_optionDefaultValueKind_2527 ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_2527 = GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 70)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_2433 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 72)) ;
      var_optionDefaultValueKind_2527 = GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 73)) ;
    } break ;
    case 2: {
      GALGAS_lbigint var_v_2799 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
      var_defaultValue_2433 = GALGAS_lstring::constructor_new (var_v_2799.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 76)), var_v_2799.readProperty_location ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 76)) ;
      var_optionDefaultValueKind_2527 = GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 77)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssign_operation (var_mOptionTypeName_2190, var_mOptionInternalName_2241, var_mOptionInvocationLetter_2298, var_mOptionInvocationString_2359, var_mOptionComment_2412, var_defaultValue_2433, var_optionDefaultValueKind_2527  COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 64)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 70)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 72)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
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

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 64)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 70)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 72)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
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

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 96)) ;
  GALGAS_lstring var_mGUIName_3579 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 98)) ;
  GALGAS_lstringlist var_importedOptionList_3627 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 99)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes_3690 = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 100)) ;
  GALGAS_withLexiqueListAST var_withLexiqueList_3739 = GALGAS_withLexiqueListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 101)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_3690, inCompiler) ;
    } break ;
    case 3: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_3627, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_3739, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 111)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssign_operation (var_mGUIName_3579, var_importedOptionList_3627, var_simpleGlobalAttributes_3690, var_withLexiqueList_3739  COMMA_SOURCE_FILE ("guiCompilation.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 98)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_gui_5F_attributes_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_gui_5F_with_5F_option_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_lexique_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 111)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 98)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_gui_5F_attributes_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_gui_5F_with_5F_option_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_lexique_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GALGAS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  GALGAS_lstring var_lexiqueReference_4387 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 124)) ;
  GALGAS_guiLabelListAST var_labels_4419 = GALGAS_guiLabelListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 125)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleAttributes_4476 = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 126)) ;
  GALGAS_guiCompoundAttributeListAST var_compoundAttributes_4537 = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      GALGAS_uint var_displayStyle_4614 ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_4614 = GALGAS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 136)) ;
        var_displayStyle_4614 = GALGAS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_terminalLabelListAST var_terminalList_4753 = GALGAS_terminalLabelListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 139)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_terminal_4818 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 141)) ;
        GALGAS_uint var_displayFlags_4849 ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_4849 = GALGAS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 146)) ;
          var_displayFlags_4849 = GALGAS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 149)) ;
          GALGAS_lbigint var_leadingStrip_5040 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 150)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsSupOrEqual, var_leadingStrip_5040.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 151)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_5040.readProperty_location (), GALGAS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 152)) ;
            }
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 154)) ;
          GALGAS_lbigint var_endingStrip_5214 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 155)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsSupOrEqual, var_endingStrip_5214.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 156)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_5214.readProperty_location (), GALGAS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 157)) ;
            }
          }
          var_displayFlags_4849 = var_leadingStrip_5040.readProperty_bigint ().left_shift_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)).operator_or (var_endingStrip_5214.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 160)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_4753.addAssign_operation (var_terminal_4818, var_displayFlags_4849  COMMA_SOURCE_FILE ("guiCompilation.galgas", 162)) ;
        switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 164)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      var_labels_4419.addAssign_operation (var_displayStyle_4614, var_terminalList_4753, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 166))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 166)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_key_5609 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 168)) ;
      GALGAS_lstring var_name_5645 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 169)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 170)) ;
      GALGAS_lstring var_value_5671 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 171))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 171)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GALGAS_lstring var_v_5755 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 173)) ;
        var_value_5671 = GALGAS_lstring::constructor_new (var_value_5671.readProperty_string ().add_operation (var_v_5755.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 174)), var_v_5755.readProperty_location ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 174)) ;
        switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_6 = false ;
          break ;
        }
      }
      var_compoundAttributes_4537.addAssign_operation (var_key_5609, var_name_5645, var_value_5671  COMMA_SOURCE_FILE ("guiCompilation.galgas", 177)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_name_5939 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 179)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
      GALGAS_lstring var_value_5986 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
      var_simpleAttributes_4476.addAssign_operation (var_name_5939, var_value_5986  COMMA_SOURCE_FILE ("guiCompilation.galgas", 182)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
  ioArgument_ioWithLexiqueList.addAssign_operation (var_lexiqueReference_4387, var_labels_4419, var_simpleAttributes_4476, var_compoundAttributes_4537  COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 136)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 141)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 146)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 149)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 150)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 154)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 155)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 160)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 164)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 168)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 169)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 170)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 173)) ;
        switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 179)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 136)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 141)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 146)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 149)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 150)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 154)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 155)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 160)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 164)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 168)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 169)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 170)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 173)) ;
        switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 179)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GALGAS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 192)) ;
  GALGAS_lstring var_optionReference_6408 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)) ;
  ioArgument_ioImportedOptionList.addAssign_operation (var_optionReference_6408  COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GALGAS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_mKey_6698 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)) ;
  GALGAS_lstring var_mValue_6721 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 202))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 202)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_value_6797 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
    var_mValue_6721 = GALGAS_lstring::constructor_new (var_mValue_6721.readProperty_string ().add_operation (var_value_6797.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 205)), var_value_6797.readProperty_location ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 205)) ;
    switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssign_operation (var_mKey_6698, var_mValue_6721  COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
    switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
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

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
    switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 35)) ;
  GALGAS_lstring var_syntaxComponentName_2062 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 36)) ;
  GALGAS_lstring var_importedLexiqueReference_2128 ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_2128 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 40)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 42)) ;
    var_importedLexiqueReference_2128 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 43)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasTranslateFeature_2326 ;
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2326 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_featureName_2423 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_featureName_2423.readProperty_string ().objectCompare (GALGAS_string ("translate"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_featureName_2423.readProperty_location (), GALGAS_string ("only 'feature translate' can be declared here"), fixItArray1  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 53)) ;
      }
    }
    var_hasTranslateFeature_2326 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 57)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_2668 = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 59)) ;
  GALGAS_syntaxRuleListAST var_ruleList_2721 = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 60)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (var_nonterminalDeclarationList_2668, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (var_ruleList_2721, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 68)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssign_operation (var_syntaxComponentName_2062, var_importedLexiqueReference_2128, var_nonterminalDeclarationList_2668, var_ruleList_2721, var_hasTranslateFeature_2326  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 36)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 42)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 43)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 57)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 68)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 36)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 42)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 43)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 57)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 83)) ;
  GALGAS_lstring var_syntaxComponentName_3525 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 85)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3596 = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 87)) ;
  GALGAS_syntaxRuleListAST var_ruleList_3649 = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 88)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (var_nonterminalDeclarationList_3596, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (var_ruleList_3649, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 96)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxExtensions.addAssign_operation (var_syntaxComponentName_3525.readProperty_string (), var_syntaxComponentName_3525, var_nonterminalDeclarationList_3596, var_ruleList_3649  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 85)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 96)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 85)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GALGAS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 109)) ;
  GALGAS_lstring var_mNonterminalName_4455 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 110)) ;
  GALGAS_nonTerminalLabelListAST var_labels_4519 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 111)) ;
  GALGAS_formalParameterListAST var_firstBranchFormalParameters_4609 ;
  nt_formal_5F_parameter_5F_list_ (var_firstBranchFormalParameters_4609, inCompiler) ;
  var_labels_4519.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 113))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 113)), var_firstBranchFormalParameters_4609, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 113))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 113)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 116)) ;
      GALGAS_lstring var_labelName_4756 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 117)) ;
      GALGAS_formalParameterListAST var_formalParameters_4832 ;
      nt_formal_5F_parameter_5F_list_ (var_formalParameters_4832, inCompiler) ;
      var_labels_4519.addAssign_operation (var_labelName_4756, var_formalParameters_4832, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 119))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 119)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssign_operation (var_mNonterminalName_4455, var_labels_4519  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 121)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 109)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 110)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 117)) ;
      nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 109)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 110)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 117)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                GALGAS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  GALGAS_formalParameterListAST var_mFormalParameters_5403 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameters_5403, inCompiler) ;
  GALGAS_location var_endOfArguments_5426 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 131)) ;
  GALGAS_syntaxInstructionList var_mSyntaxInstructionList_5532 ;
  nt_syntax_5F_instruction_5F_list_ (var_mSyntaxInstructionList_5532, inCompiler) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameters_5403, var_endOfArguments_5426, var_mSyntaxInstructionList_5532, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 138))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 131)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 139)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 131)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GALGAS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 145)) ;
  GALGAS_lstring var_mNonterminalName_5934 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 146)) ;
  GALGAS_lstring var_labelName_5976 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 147))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 147)) ;
  GALGAS_syntaxRuleLabelListAST var_mLabelList_6031 = GALGAS_syntaxRuleLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (var_labelName_5976, var_mLabelList_6031, inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 152)) ;
      var_labelName_5976 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 153)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioRuleList.addAssign_operation (var_mNonterminalName_5934, var_mLabelList_6031  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 145)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 146)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 152)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 153)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 145)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 146)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 152)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 153)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GALGAS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GALGAS_syntaxInstructionList::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 165)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 168)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction_6780 ;
      nt_semantic_5F_instruction_ (var_instruction_6780, inCompiler) ;
      outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_6780  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 171)) ;
    } break ;
    case 4: {
      GALGAS_syntaxInstructionAST var_instruction_6881 ;
      nt_syntax_5F_instruction_ (var_instruction_6881, inCompiler) ;
      outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_6881  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 168)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 168)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mLabelName_1117 ;
  switch (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler)) {
  case 1: {
    var_mLabelName_1117 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 23))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 23)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 25)) ;
    var_mLabelName_1117 = GALGAS_lstring::constructor_new (GALGAS_string ("parse"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 26))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 26)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 28)) ;
    var_mLabelName_1117 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mNonterminalName_1401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 31)) ;
  GALGAS_actualParameterListAST var_mActualParameterList_1502 ;
  nt_actual_5F_parameter_5F_list_ (var_mActualParameterList_1502, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_1672 ;
  switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_1672 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 38)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_1672, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_nonterminalCallInstruction::constructor_new (var_mNonterminalName_1401.readProperty_location (), var_mNonterminalName_1401, var_mLabelName_1117, var_mActualParameterList_1502, var_grammarInstructionSyntaxDirectedTranslationResult_1672  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 25)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 28)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 31)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 38)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 25)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 28)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 31)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 38)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 22)) ;
  GALGAS_location var_mRepeatInstructionLocation_1082 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 23)) ;
  GALGAS_syntaxInstructionList var_mRepeatedInstructionList_1182 ;
  nt_syntax_5F_instruction_5F_list_ (var_mRepeatedInstructionList_1182, inCompiler) ;
  GALGAS_location var_endOf_5F_repeated_5F_instructions_1218 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 25)) ;
  GALGAS_listOfSyntaxInstructionList var_mRepeatBranchList_1261 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 28)) ;
    GALGAS_syntaxInstructionList var_mInstructionList_1397 ;
    nt_syntax_5F_instruction_5F_list_ (var_mInstructionList_1397, inCompiler) ;
    var_mRepeatBranchList_1261.addAssign_operation (var_mInstructionList_1397, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 30))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 30)) ;
    switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 33)) ;
  GALGAS_location var_endOf_5F_repeat_5F_instruction_1520 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 34)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1599 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-repeat.galgas", 37)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_1599.readProperty_string ().objectCompare (GALGAS_string ("repeat"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%repeat")) ;
        inCompiler->emitSemanticError (var_terminator_1599.readProperty_location (), GALGAS_string ("the terminator attribute should be '%repeat'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 39)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_repeatInstruction::constructor_new (var_mRepeatInstructionLocation_1082, var_mRepeatedInstructionList_1182, var_endOf_5F_repeated_5F_instructions_1218, var_mRepeatBranchList_1261, var_endOf_5F_repeat_5F_instruction_1520  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 22)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 28)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 33)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-repeat.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 22)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 28)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 33)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-repeat.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 20)) ;
  GALGAS_location var_mSelectInstructionLocation_958 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 21)) ;
  GALGAS_listOfSyntaxInstructionList var_mSelectBranchList_1001 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 22)) ;
  GALGAS_syntaxInstructionList var_il_1096 ;
  nt_syntax_5F_instruction_5F_list_ (var_il_1096, inCompiler) ;
  var_mSelectBranchList_1001.addAssign_operation (var_il_1096, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 24))  COMMA_SOURCE_FILE ("instruction-select.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 26)) ;
    GALGAS_syntaxInstructionList var_instructionList_1239 ;
    nt_syntax_5F_instruction_5F_list_ (var_instructionList_1239, inCompiler) ;
    var_mSelectBranchList_1001.addAssign_operation (var_instructionList_1239, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 28))  COMMA_SOURCE_FILE ("instruction-select.galgas", 28)) ;
    switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 31)) ;
  GALGAS_location var_endOf_5F_select_5F_instruction_1360 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 32)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1439 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-select.galgas", 35)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_1439.readProperty_string ().objectCompare (GALGAS_string ("select"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%select")) ;
        inCompiler->emitSemanticError (var_terminator_1439.readProperty_location (), GALGAS_string ("the terminator attribute should be '%select'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-select.galgas", 37)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_selectInstruction::constructor_new (var_mSelectInstructionLocation_958, var_mSelectBranchList_1001, var_endOf_5F_select_5F_instruction_1360  COMMA_SOURCE_FILE ("instruction-select.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 20)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 31)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-select.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 20)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 31)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-select.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_terminalName_1286 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 22)) ;
  GALGAS_actualInputParameterListAST var_actualInputParameterList_1406 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (var_actualInputParameterList_1406, inCompiler) ;
  GALGAS__32_lstringlist var_indexNameList_1461 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_1461, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1644 ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1770 ;
  switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1644 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 29)) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1770 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 30)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 32)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1644, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1770, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_terminalCheckInstruction::constructor_new (var_terminalName_1286.readProperty_location (), var_terminalName_1286, var_actualInputParameterList_1406, var_indexNameList_1461, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1644, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1770  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 22)) ;
  nt_actual_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 32)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 22)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 32)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GALGAS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 49)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_indexName_2889 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 54)) ;
      GALGAS_lstring var_postfixName_2953 ;
      switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
        var_postfixName_2953 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 57)) ;
      } break ;
      case 2: {
        var_postfixName_2953 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 59)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssign_operation (var_indexName_2889, var_postfixName_2953  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 61)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 54)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 59)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 54)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 59)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 24)) ;
  GALGAS_location var_instructionLocation_1150 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 26)) ;
  GALGAS_semanticExpressionAST var_variantExpression_1241 ;
  nt_expression_ (var_variantExpression_1241, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_1272 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_whileExpression_1362 ;
  nt_expression_ (var_whileExpression_1362, inCompiler) ;
  GALGAS_location var_endOfWhileExpression_1391 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 32)) ;
  GALGAS_syntaxInstructionList var_instructionList_1491 ;
  nt_syntax_5F_instruction_5F_list_ (var_instructionList_1491, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 34)) ;
  GALGAS_location var_endOfInstructionList_1530 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 35)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1609 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 38)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_1609.readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%parse")) ;
        inCompiler->emitSemanticError (var_terminator_1609.readProperty_location (), GALGAS_string ("the terminator attribute should be '%parse'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 40)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseLoopInstruction::constructor_new (var_instructionLocation_1150, var_variantExpression_1241, var_endOfVariantExpression_1272, var_whileExpression_1362, var_endOfWhileExpression_1391, var_instructionList_1491, var_endOfInstructionList_1530  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 32)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 34)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 26)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 32)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 34)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 19)) ;
  GALGAS_location var_instructionLocation_955 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 21)) ;
  GALGAS_listOfSyntaxInstructionList var_mParseDoBranchList_1008 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 22)) ;
  GALGAS_syntaxInstructionList var_il_1103 ;
  nt_syntax_5F_instruction_5F_list_ (var_il_1103, inCompiler) ;
  var_mParseDoBranchList_1008.addAssign_operation (var_il_1103, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 24))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 26)) ;
    GALGAS_syntaxInstructionList var_instructionList_1251 ;
    nt_syntax_5F_instruction_5F_list_ (var_instructionList_1251, inCompiler) ;
    var_mParseDoBranchList_1008.addAssign_operation (var_instructionList_1251, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 28))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 28)) ;
    switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 31)) ;
  GALGAS_location var_endOfInstruction_1365 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 32)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1444 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 35)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_1444.readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%parse")) ;
        inCompiler->emitSemanticError (var_terminator_1444.readProperty_location (), GALGAS_string ("the terminator attribute should be '%parse'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 37)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseRewindInstruction::constructor_new (var_instructionLocation_955, var_mParseDoBranchList_1008, var_endOfInstruction_1365  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 21)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 31)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 21)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 31)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 23)) ;
  nt_syntax_5F_instruction_5F_list_ (outArgument_outElseInstructionList, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 23)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 23)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 30)) ;
  GALGAS_location var_instructionLocation_1460 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 31)) ;
  GALGAS_semanticExpressionAST var_whenExpression_1514 ;
  nt_expression_ (var_whenExpression_1514, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_1542 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 34)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_1622 ;
  nt_syntax_5F_instruction_5F_list_ (var_whenInstructionList_1622, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_1652 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 36)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_1747 ;
  nt_branchOfParseWhithInstruction_ (var_elseInstructionList_1747, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_1777 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 39)) ;
  outArgument_outElseInstructionList = GALGAS_syntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-parse-when.galgas", 40)) ;
  outArgument_outElseInstructionList.addAssign_operation (GALGAS_parseWhenInstruction::constructor_new (var_instructionLocation_1460, var_whenExpression_1514, var_endOfWhenExpression_1542, var_whenInstructionList_1622, var_endOfWhenInstructions_1652, var_elseInstructionList_1747, var_endOfElseInstructions_1777  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 34)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 30)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 34)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  GALGAS_location var_instructionLocation_2318 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 57)) ;
  GALGAS_semanticExpressionAST var_whenExpression_2406 ;
  nt_expression_ (var_whenExpression_2406, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_2434 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_2537 ;
  nt_syntax_5F_instruction_5F_list_ (var_whenInstructionList_2537, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_2567 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 62)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_2685 ;
  nt_branchOfParseWhithInstruction_ (var_elseInstructionList_2685, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_2715 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 66)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2804 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 69)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_2804.readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%parse")) ;
        inCompiler->emitSemanticError (var_terminator_2804.readProperty_location (), GALGAS_string ("the terminator attribute should be '%parse'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 71)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseWhenInstruction::constructor_new (var_instructionLocation_2318, var_whenExpression_2406, var_endOfWhenExpression_2434, var_whenInstructionList_2537, var_endOfWhenInstructions_2567, var_elseInstructionList_2685, var_endOfElseInstructions_2715  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 57)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 66)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 69)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 57)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 66)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 69)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 18)) ;
  GALGAS_location var_instructionLocation_891 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 19)) ;
  GALGAS_semanticExpressionAST var_sentExpression_968 ;
  nt_expression_ (var_sentExpression_968, inCompiler) ;
  outArgument_outInstruction = GALGAS_syntaxSendInstruction::constructor_new (var_instructionLocation_891, var_sentExpression_968  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lbool var_hasIndexing_1440 ;
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_1440 = GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 25))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
    var_hasIndexing_1440 = GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 27))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 27)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 30)) ;
  GALGAS_lstring var_mGrammarName_1652 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 31)) ;
  GALGAS_lstring var_mGrammarClass_1731 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 32)) ;
  GALGAS_bool var_hasTranslateFeature_1790 ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_1790 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_featureName_1887 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 38)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_featureName_1887.readProperty_string ().objectCompare (GALGAS_string ("translate"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_featureName_1887.readProperty_location (), GALGAS_string ("only 'feature translate' can be declared here"), fixItArray1  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 40)) ;
      }
    }
    var_hasTranslateFeature_1790 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  GALGAS_lstringlist var_syntaxComponents_2122 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 46)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 48)) ;
    GALGAS_lstring var_syntaxComponent_2202 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 49)) ;
    var_syntaxComponents_2122.addAssign_operation (var_syntaxComponent_2202  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 50)) ;
    switch (select_galgas_33_GrammarComponentSyntax_2 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_mStartSymbol_2331 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 54)) ;
  GALGAS_nonTerminalLabelListAST var_mLabelList_2373 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 55)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 56))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 56)), var_mLabelList_2373, inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_galgas_33_GrammarComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 59)) ;
      GALGAS_lstring var_labelName_2563 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 60)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (var_labelName_2563, var_mLabelList_2373, inCompiler) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_mUnusedNonterminalList_2697 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 64)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    switch (select_galgas_33_GrammarComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 67)) ;
      GALGAS_lstring var_nonterminalSymbolName_2810 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
      var_mUnusedNonterminalList_2697.addAssign_operation (var_nonterminalSymbolName_2810  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_4 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 72)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_galgas_33_GrammarComponentAST::constructor_new (GALGAS_bool (false), var_hasIndexing_1440, var_mGrammarName_1652, var_mGrammarClass_1731, var_syntaxComponents_2122, var_mStartSymbol_2331, var_mLabelList_2373, var_mUnusedNonterminalList_2697, var_hasTranslateFeature_1790  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 73))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 30)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 32)) ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 48)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 49)) ;
    switch (select_galgas_33_GrammarComponentSyntax_2 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 54)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_GrammarComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 60)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_GrammarComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 30)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 32)) ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 48)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 49)) ;
    switch (select_galgas_33_GrammarComponentSyntax_2 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 54)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_GrammarComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 60)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_GrammarComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  GALGAS_stringset var_argumentNameSet_3449 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 90)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_3507 = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 91)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GrammarComponentSyntax_5 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_argumentName_3582 ;
      nt_label_5F_formal_5F_parameter_ (var_argumentName_3582, var_mFormalParameterList_3507, inCompiler) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_argumentNameSet_3449.getter_hasKey (var_argumentName_3582.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 95)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_3582.readProperty_location (), GALGAS_string ("there is already an argument named '").add_operation (var_argumentName_3582.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 96)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 96)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 96)) ;
        }
      }
      var_argumentNameSet_3449.addAssign_operation (var_argumentName_3582.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 98)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameterList_3507, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 100))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GrammarComponentSyntax_5 (inCompiler)) {
    case 2: {
      nt_label_5F_formal_5F_parameter_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GrammarComponentSyntax_5 (inCompiler)) {
    case 2: {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4159 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 108)) ;
  GALGAS_lstring var_mTypeName_4195 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 114)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_4159, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 117)), var_mTypeName_4195, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 114)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4713 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  GALGAS_lstring var_mTypeName_4759 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 130)) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 135)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_4713, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 138)), var_mTypeName_4759, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 130)) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 135)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 130)) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_5286 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 149)) ;
  GALGAS_lstring var_mTypeName_5322 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 155)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_5286, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 158)), var_mTypeName_5322, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 156)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 155)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_5843 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 169)) ;
  GALGAS_lstring var_mTypeName_5879 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 170)) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 171)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_5843, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 174)), var_mTypeName_5879, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 169)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 171)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 169)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 171)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 30)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_1822 ;
  nt_semantic_5F_instruction_5F_list_ (var_prologueInstructionList_1822, inCompiler) ;
  GALGAS_location var_endOfPrologue_1844 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 33)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssign_operation (var_prologueInstructionList_1822, var_endOfPrologue_1844  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 30)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 30)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 45)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_2434 ;
  nt_semantic_5F_instruction_5F_list_ (var_prologueInstructionList_2434, inCompiler) ;
  GALGAS_location var_endOfPrologue_2456 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 48)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssign_operation (var_prologueInstructionList_2434, var_endOfPrologue_2456  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 45)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 45)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 61)) ;
  GALGAS_lstring var_mSourceFileExtension_3009 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 63)) ;
  GALGAS_lstring var_mSourceFileHelp_3068 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 64)) ;
  GALGAS_lstring var_referenceGrammar_3127 ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_3127 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
    var_referenceGrammar_3127 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_selector_3285 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 74)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_3285.readProperty_string ().objectCompare (GALGAS_string ("sourceFilePath"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3285.readProperty_location (), GALGAS_string ("the selector should be '?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 76)) ;
    }
  }
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_3491 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 80)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, var_typeName_3491.readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3491.readProperty_location (), GALGAS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 82)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isUnused_3643 ;
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_3643 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 89)) ;
    var_isUnused_3643 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSourceFileVariableName_3784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 94)) ;
  GALGAS_semanticInstructionListAST var_mInstructionList_3881 ;
  nt_semantic_5F_instruction_5F_list_ (var_mInstructionList_3881, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3910 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssign_operation (var_mSourceFileExtension_3009, var_mSourceFileHelp_3068, var_mSourceFileVariableName_3784, var_isUnused_3643, var_referenceGrammar_3127, var_mInstructionList_3881, var_endOfInstructionList_3910  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 64)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 74)) ;
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 80)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 89)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 94)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 64)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 74)) ;
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 80)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 89)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 94)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 39)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 39)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 39)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
  GALGAS_semanticExpressionAST var_ifExpression_1825 ;
  nt_expression_ (var_ifExpression_1825, inCompiler) ;
  GALGAS_location var_operatorLocation_1850 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_thenExpression_1915 ;
  nt_expression_ (var_thenExpression_1915, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 53)) ;
  GALGAS_semanticExpressionAST var_elseExpression_1963 ;
  nt_expression_ (var_elseExpression_1963, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation_1850, var_ifExpression_1825, var_thenExpression_1915, var_elseExpression_1963  COMMA_SOURCE_FILE ("expression-if.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 51)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 53)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 51)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 53)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i2_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1540 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation_1540, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1542 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation_1542, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i4_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_1419 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 33)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier_1419  COMMA_SOURCE_FILE ("expression-var.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-output-expression-list.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_1691 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 43)) ;
      GALGAS_semanticExpressionAST var_expression_1749 ;
      nt_expression_ (var_expression_1749, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_1691, var_expression_1749, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 45))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 43)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 43)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i6_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 46)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 47))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 53)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 54))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_1632 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-literal-string.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_1684 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 41)) ;
    var_literalStringList_1632.addAssign_operation (var_literalString_1684.readProperty_string ()  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
    switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 45)), var_literalStringList_1632  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 41)) ;
    switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 41)) ;
    switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_1441 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 33)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar_1441  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_1464 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 33)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble_1464  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_2324 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt_2324  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i12_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4011 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 102)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4061 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4121 ;
      nt_simple_5F_expression_ (var_rightOperand_4121, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4011, var_leftOperand_4061, GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression-comparison.galgas", 105)), var_rightOperand_4121  COMMA_SOURCE_FILE ("expression-comparison.galgas", 105)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4264 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4314 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4374 ;
      nt_simple_5F_expression_ (var_rightOperand_4374, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4264, var_leftOperand_4314, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression-comparison.galgas", 111)), var_rightOperand_4374  COMMA_SOURCE_FILE ("expression-comparison.galgas", 111)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_4520 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 114)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4570 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4630 ;
      nt_simple_5F_expression_ (var_rightOperand_4630, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4520, var_leftOperand_4570, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 117)), var_rightOperand_4630  COMMA_SOURCE_FILE ("expression-comparison.galgas", 117)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_4780 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 120)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4830 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4890 ;
      nt_simple_5F_expression_ (var_rightOperand_4890, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4780, var_leftOperand_4830, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 123)), var_rightOperand_4890  COMMA_SOURCE_FILE ("expression-comparison.galgas", 123)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5042 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 126)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5091 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5151 ;
      nt_simple_5F_expression_ (var_rightOperand_5151, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5042, var_leftOperand_5091, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 129)), var_rightOperand_5151  COMMA_SOURCE_FILE ("expression-comparison.galgas", 129)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_5300 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 132)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5349 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5409 ;
      nt_simple_5F_expression_ (var_rightOperand_5409, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5300, var_leftOperand_5349, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 135)), var_rightOperand_5409  COMMA_SOURCE_FILE ("expression-comparison.galgas", 135)) ;
    } break ;
    case 8: {
      GALGAS_location var_operatorLocation_5556 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 138)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5607 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5667 ;
      nt_simple_5F_expression_ (var_rightOperand_5667, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5556, var_leftOperand_5607, GALGAS_comparison::constructor_sameInstance (SOURCE_FILE ("expression-comparison.galgas", 141)), var_rightOperand_5667  COMMA_SOURCE_FILE ("expression-comparison.galgas", 141)) ;
    } break ;
    case 9: {
      GALGAS_location var_operatorLocation_5817 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 143)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 144)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5868 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5928 ;
      nt_simple_5F_expression_ (var_rightOperand_5928, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5817, var_leftOperand_5868, GALGAS_comparison::constructor_differentInstances (SOURCE_FILE ("expression-comparison.galgas", 147)), var_rightOperand_5928  COMMA_SOURCE_FILE ("expression-comparison.galgas", 147)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 102)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 108)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 114)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 120)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 126)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 132)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 138)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 144)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 102)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 108)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 114)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 120)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 126)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 132)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 138)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 144)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i13_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4606 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 115)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 116)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4656 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4703 ;
      nt_term_ (var_rightOperand_4703, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation_4606, var_leftOperand_4656, var_rightOperand_4703  COMMA_SOURCE_FILE ("expression-additive.galgas", 119)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4837 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 121)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 122)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4887 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4934 ;
      nt_term_ (var_rightOperand_4934, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation_4837, var_leftOperand_4887, var_rightOperand_4934  COMMA_SOURCE_FILE ("expression-additive.galgas", 125)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_5069 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 128)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5118 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5165 ;
      nt_term_ (var_rightOperand_5165, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation_5069, var_leftOperand_5118, var_rightOperand_5165  COMMA_SOURCE_FILE ("expression-additive.galgas", 131)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_5293 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 133)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 134)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5343 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5390 ;
      nt_term_ (var_rightOperand_5390, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation_5293, var_leftOperand_5343, var_rightOperand_5390  COMMA_SOURCE_FILE ("expression-additive.galgas", 137)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5528 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 140)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5577 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5624 ;
      nt_term_ (var_rightOperand_5624, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation_5528, var_leftOperand_5577, var_rightOperand_5624  COMMA_SOURCE_FILE ("expression-additive.galgas", 143)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_5752 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 145)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 146)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5802 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5849 ;
      nt_term_ (var_rightOperand_5849, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::constructor_new (var_operatorLocation_5752, var_leftOperand_5802, var_rightOperand_5849  COMMA_SOURCE_FILE ("expression-additive.galgas", 149)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 116)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 122)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 128)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 134)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 140)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 146)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 116)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 122)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 128)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 134)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 140)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 146)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i14_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                    C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4117 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 102)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4166 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4238 ;
      nt_factor_ (var_rightOperand_4238, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation_4117, var_leftOperand_4166, var_rightOperand_4238  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 105)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4377 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4427 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4499 ;
      nt_factor_ (var_rightOperand_4499, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation_4377, var_leftOperand_4427, var_rightOperand_4499  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 111)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_4648 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 114)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4697 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4746 ;
      nt_factor_ (var_rightOperand_4746, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation_4648, var_leftOperand_4697, var_rightOperand_4746  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 117)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_4879 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 120)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4929 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4978 ;
      nt_factor_ (var_rightOperand_4978, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation_4879, var_leftOperand_4929, var_rightOperand_4978  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 123)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5121 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 126)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5172 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5221 ;
      nt_factor_ (var_rightOperand_5221, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::constructor_new (var_operatorLocation_5121, var_leftOperand_5172, var_rightOperand_5221  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 102)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 108)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 114)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 120)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 126)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 102)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 108)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 114)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 120)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 126)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i15_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (outArgument_outExpression, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_2892 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 90)) ;
    GALGAS_dynamicTypeComparisonKind var_kind_2962 ;
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 93)) ;
      var_kind_2962 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("expression-is-as.galgas", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 96)) ;
      var_kind_2962 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 97)) ;
    } break ;
    case 3: {
      var_kind_2962 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 99)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 101)) ;
      var_kind_2962 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("expression-is-as.galgas", 102)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName_3186 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 104)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_2892, var_kind_2962, var_typeName_3186  COMMA_SOURCE_FILE ("expression-is-as.galgas", 105)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_3384 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 112)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 113)) ;
    GALGAS_lstring var_typeName_3440 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 114)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_3384, var_typeName_3440  COMMA_SOURCE_FILE ("expression-is-as.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_or_parse (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 90)) ;
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 96)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 101)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 104)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 113)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 90)) ;
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 96)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 101)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 104)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 113)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 54)) ;
  GALGAS_lstring var_optionComponentName_2123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 56)) ;
  GALGAS_lstring var_optionName_2198 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 57)) ;
  GALGAS_lstring var_getterName_2231 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 58)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName_2123, var_optionName_2198, var_getterName_2231  COMMA_SOURCE_FILE ("expression-option.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  GALGAS_lstring var_optionName_2581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 69)) ;
  GALGAS_lstring var_getterName_2614 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 70)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 71))  COMMA_SOURCE_FILE ("expression-option.galgas", 71)), var_optionName_2581, var_getterName_2614  COMMA_SOURCE_FILE ("expression-option.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 40)) ;
  GALGAS_lstring var_lexiqueName_1613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 42)) ;
  GALGAS_lstring var_getterName_1654 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 43)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName_1613, var_getterName_1654  COMMA_SOURCE_FILE ("expression-lexique.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 73)) ;
  GALGAS_lstring var_filewrapperName_2739 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 74)) ;
  switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName_2739  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 80)) ;
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_2960 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 82)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName_2739, var_filePath_2960  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 83)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_3143 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 88)) ;
      GALGAS_actualOutputExpressionList var_expressionList_3224 ;
      nt_output_5F_expression_5F_list_ (var_expressionList_3224, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::constructor_new (var_filewrapperName_2739, var_filewrapperTemplateName_3143, var_expressionList_3224  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 90)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 73)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 74)) ;
  switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 80)) ;
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 82)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 88)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 73)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 74)) ;
  switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 80)) ;
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 82)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 88)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 52)) ;
  GALGAS_location var_startLocation_2228 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 54)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_2309 ;
  nt_expression_ (var_receiverExpression_2309, inCompiler) ;
  GALGAS_lstring var_getterName_2374 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 57)) ;
  GALGAS_actualOutputExpressionList var_expressionList_2476 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_2476, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 60)) ;
  GALGAS_location var_endLocation_2504 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 61)) ;
  outArgument_outExpression = GALGAS_getterCallExpressionAST::constructor_new (GALGAS_bool (true), var_receiverExpression_2309, var_getterName_2374, var_expressionList_2476, var_startLocation_2228.getter_union (var_endLocation_2504, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 67))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 52)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 57)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 52)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 57)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i21_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 82))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 82)) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3269 ;
  nt_optional_5F_type_ (var_typeName_3269, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 93)) ;
  GALGAS_location var_startOfExpression_3303 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 94)) ;
  GALGAS_lstring var_constructorName_3391 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
  GALGAS_actualOutputExpressionList var_expressionList_3466 ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    var_expressionList_3466 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 100)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 102)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 103)), GALGAS_string ("'{' is obsolete here, use '('"), fixItArray0  COMMA_SOURCE_FILE ("expression-constructor.galgas", 103)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_3466, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 105)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 107)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_3466, inCompiler) ;
    switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 112)) ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 113)), GALGAS_string ("'}' is obsolete here, use ')'"), fixItArray1  COMMA_SOURCE_FILE ("expression-constructor.galgas", 113)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfExpression_3847 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 116)) ;
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_3269, var_constructorName_3391, var_expressionList_3466, var_startOfExpression_3303.getter_union (var_endOfExpression_3847, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 121))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 102)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 105)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 107)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 112)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 102)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 105)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 107)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 112)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_4264 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)) ;
  GALGAS_location var_startOfExpression_4326 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 130)) ;
  GALGAS_actualOutputExpressionList var_expressionList_4418 ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 133)) ;
  nt_output_5F_expression_5F_list_ (var_expressionList_4418, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 135)) ;
  GALGAS_location var_endOfExpression_4503 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 136)) ;
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_4264, GALGAS_lstring::constructor_new (GALGAS_string ("new"), var_typeName_4264.readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 139)), var_expressionList_4418, var_startOfExpression_4326.getter_union (var_endOfExpression_4503, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 141))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 133)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 135)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 133)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_4928 ;
  nt_optional_5F_type_ (var_typeName_4928, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 150)) ;
  outArgument_outExpression = GALGAS_defaultConstructorExpressionAST::constructor_new (var_typeName_4928  COMMA_SOURCE_FILE ("expression-constructor.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 150)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_1670 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1777 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_1777, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName_1670, var_expressionList_1777  COMMA_SOURCE_FILE ("expression-function-call.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  GALGAS_lstring var_typeName_1458 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 35)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName_1458  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3734 ;
  nt_optional_5F_type_ (var_typeName_3734, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 96)) ;
  GALGAS_collectionValueElementList var_elementList_3790 = GALGAS_collectionValueElementList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 97)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element_3906 ;
      nt_collection_5F_value_5F_element_ (var_element_3906, inCompiler) ;
      var_elementList_3790.addAssign_operation (var_element_3906  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 102)) ;
      switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 104)) ;
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
  outArgument_outExpression = GALGAS_collectionValueAST::constructor_new (var_typeName_3734, var_elementList_3790, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 110))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 104)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 104)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i28_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList_4357 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_4397 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 120)) ;
    GALGAS_semanticExpressionAST var_expression_4455 ;
    nt_expression_ (var_expression_4455, inCompiler) ;
    var_expressionList_4357.addAssign_operation (var_selector_4397, var_expression_4455, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 122))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 122)) ;
    switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::constructor_new (var_expressionList_4357, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 125))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 120)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 120)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i29_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_expression_4898 ;
  nt_expression_ (var_expression_4898, inCompiler) ;
  outArgument_outValueElement = GALGAS_expressionCollectionValue::constructor_new (var_expression_4898, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 132))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 33)) ;
  outArgument_outExpression = GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 34))  COMMA_SOURCE_FILE ("expression-self.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i31_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 43)) ;
      GALGAS_lstring var_structFieldName_1733 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 44)) ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionAST::constructor_new (var_structFieldName_1733.readProperty_location (), outArgument_outExpression, var_structFieldName_1733  COMMA_SOURCE_FILE ("expression-property-access.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 44)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 44)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1534 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation_1534, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-not.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1536 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_tildeExpressionAST::constructor_new (var_operatorLocation_1536, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-tilde.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1555 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 38)) ;
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 42)) ;
  outArgument_outExpression = GALGAS_bangExpressionAST::constructor_new (var_operatorLocation_1555, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-bang.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1563 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionAST::constructor_new (var_operatorLocation_1563, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i36_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4081 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 102)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4130 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4187 ;
      nt_expression_5F_and_ (var_rightOperand_4187, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation_4081, var_leftOperand_4130, var_rightOperand_4187  COMMA_SOURCE_FILE ("expression-or.galgas", 105)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4314 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4364 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4421 ;
      nt_expression_5F_and_ (var_rightOperand_4421, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation_4314, var_leftOperand_4364, var_rightOperand_4421  COMMA_SOURCE_FILE ("expression-or.galgas", 111)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_4553 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 114)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4602 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4659 ;
      nt_expression_5F_and_ (var_rightOperand_4659, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation_4553, var_leftOperand_4602, var_rightOperand_4659  COMMA_SOURCE_FILE ("expression-or.galgas", 117)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_4787 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 120)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4838 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4895 ;
      nt_expression_5F_and_ (var_rightOperand_4895, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation_4787, var_leftOperand_4838, var_rightOperand_4895  COMMA_SOURCE_FILE ("expression-or.galgas", 123)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5031 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 126)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5082 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5139 ;
      nt_expression_5F_and_ (var_rightOperand_5139, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::constructor_new (var_operatorLocation_5031, var_leftOperand_5082, var_rightOperand_5139  COMMA_SOURCE_FILE ("expression-or.galgas", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i36_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 102)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 108)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 114)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 120)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 126)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 102)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 108)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 114)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 120)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 126)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2417 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 60)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2466 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2547 ;
      nt_relation_5F_factor_ (var_rightOperand_2547, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation_2417, var_leftOperand_2466, var_rightOperand_2547  COMMA_SOURCE_FILE ("expression-and.galgas", 63)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2675 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 66)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2725 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2806 ;
      nt_relation_5F_factor_ (var_rightOperand_2806, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::constructor_new (var_operatorLocation_2675, var_leftOperand_2725, var_rightOperand_2806  COMMA_SOURCE_FILE ("expression-and.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 60)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 66)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 60)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 66)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_9303 ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode_9371 ;
      switch (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector_9303 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 273)) ;
        var_mFormalParameterPassingMode_9371 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 274)) ;
      } break ;
      case 2: {
        var_selector_9303 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 276)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 277)) ;
        var_mFormalParameterPassingMode_9371 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 278)) ;
      } break ;
      case 3: {
        var_selector_9303 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 280)) ;
        var_mFormalParameterPassingMode_9371 = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 281)) ;
      } break ;
      case 4: {
        var_selector_9303 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 283)) ;
        var_mFormalParameterPassingMode_9371 = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 284)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_9909 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 286)) ;
      GALGAS_bool var_mIsUnused_9935 ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused_9935 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 291)) ;
        var_mIsUnused_9935 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_10089 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 294)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_9303, var_mFormalParameterPassingMode_9371, var_mFormalParameterTypeName_9909, var_mFormalParameterName_10089, var_mIsUnused_9935  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 295)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 302)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 273)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 276)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 277)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 280)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 283)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 286)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 291)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 294)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 302)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 273)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 276)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 277)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 280)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 283)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 286)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 291)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 294)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 302)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 310)) ;
  nt_actual_5F_parameter_5F_list_ (outArgument_outActualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 312)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 310)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 312)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 310)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 312)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 318)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_11028 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 321)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 323)) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector_11028  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 324))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 324)) ;
      } break ;
      case 2: {
        GALGAS_lbigint var_count_11181 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 326)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 327)) ;
        GALGAS_uint var_n_11207 = var_count_11181.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 328)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_11028.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("?")) ;
            inCompiler->emitSemanticError (var_selector_11028.readProperty_location (), GALGAS_string ("the selector should be '?'"), fixItArray2  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 330)) ;
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_n_11207.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_count_11181.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 333)) ;
          }
        }
        if (kBoolFalse == test_3) {
          if (var_n_11207.isValid ()) {
            uint32_t variant_11462 = var_n_11207.uintValue () ;
            bool loop_11462 = true ;
            while (loop_11462) {
              loop_11462 = GALGAS_bool (kIsStrictSup, var_n_11207.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
              if (loop_11462) {
                loop_11462 = GALGAS_bool (kIsStrictSup, var_n_11207.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
              }
              if (loop_11462 && (0 == variant_11462)) {
                loop_11462 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 335)) ;
              }
              if (loop_11462) {
                variant_11462 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector_11028.readProperty_location (), var_n_11207  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 337))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 337)) ;
                var_n_11207.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 338)) ;
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
      GALGAS_lstring var_selector_11678 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 343)) ;
      GALGAS_lstring var_outputInputActualParameterName_11733 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 344)) ;
      GALGAS_lstringlist var_structAttributeList_11763 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 345)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 348)) ;
          GALGAS_lstring var_structAttributeName_11864 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 349)) ;
          var_structAttributeList_11763.addAssign_operation (var_structAttributeName_11864  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 350)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector_11678, var_outputInputActualParameterName_11733, var_structAttributeList_11763  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 352))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 352)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_12127 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 358)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 359)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector_12127  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 360))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 360)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_12257 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 362)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 363)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSelfParameterAST::constructor_new (var_selector_12257  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 364))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 364)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_12383 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 366)) ;
      GALGAS_lbigint var_count_12413 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 368)) ;
      GALGAS_uint var_n_12435 = var_count_12413.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 369)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_selector_12383.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("!?")) ;
          inCompiler->emitSemanticError (var_selector_12383.readProperty_location (), GALGAS_string ("the selector should be '!?'"), fixItArray7  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 371)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, var_n_12435.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_count_12413.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray9  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 374)) ;
        }
      }
      if (kBoolFalse == test_8) {
        if (var_n_12435.isValid ()) {
          uint32_t variant_12679 = var_n_12435.uintValue () ;
          bool loop_12679 = true ;
          while (loop_12679) {
            loop_12679 = GALGAS_bool (kIsStrictSup, var_n_12435.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
            if (loop_12679) {
              loop_12679 = GALGAS_bool (kIsStrictSup, var_n_12435.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
            }
            if (loop_12679 && (0 == variant_12679)) {
              loop_12679 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 376)) ;
            }
            if (loop_12679) {
              variant_12679 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector_12383.readProperty_location (), var_n_12435  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 378))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 378)) ;
              var_n_12435.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 379)) ;
            }
          }
        }
      }
    } break ;
    case 7: {
      GALGAS_lstring var_selector_12874 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 383)) ;
      GALGAS_semanticExpressionAST var_e_12923 ;
      nt_expression_ (var_e_12923, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation_12967 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 385)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_12874, var_e_12923, var_endOfExpressionLocation_12967  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 386))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 386)) ;
    } break ;
    case 8: {
      GALGAS_lstring var_selector_13190 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 392)) ;
      GALGAS_lstring var_inputActualParameterName_13239 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 393)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector_13190, var_inputActualParameterName_13239  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector_13446 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 399)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 400)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
      GALGAS_lstring var_inputActualParameterName_13518 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 402)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfPropertyParameterAST::constructor_new (var_selector_13446, var_inputActualParameterName_13518  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 403))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 403)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector_13712 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfParameterAST::constructor_new (var_selector_13712, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 412))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 410))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 410)) ;
    } break ;
    case 11: {
      GALGAS_lstring var_selector_13901 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 415)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 416)) ;
      GALGAS_lstring var_declarationTypeName_13952 ;
      switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName_13952 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 419)) ;
      } break ;
      case 2: {
        var_declarationTypeName_13952 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 421)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_14113 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 423)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_13901, var_declarationTypeName_13952, var_inputActualParameterName_14113  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 424))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 424)) ;
    } break ;
    case 12: {
      GALGAS_lstring var_selector_14359 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 430)) ;
      GALGAS_lstring var_declarationTypeName_14407 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 431)) ;
      GALGAS_lstring var_inputActualParameterName_14456 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_14359, var_declarationTypeName_14407, var_inputActualParameterName_14456  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 433))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 433)) ;
    } break ;
    case 13: {
      GALGAS_lstring var_selector_14686 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 439)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 440)) ;
      GALGAS_lstring var_declarationTypeName_14737 ;
      switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName_14737 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 443)) ;
      } break ;
      case 2: {
        var_declarationTypeName_14737 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 445)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused_14880 ;
      switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused_14880 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 451)) ;
        var_markedAsUnused_14880 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_15039 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 454)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector_14686, var_declarationTypeName_14737, var_inputActualParameterName_15039, var_markedAsUnused_14880  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 455))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 455)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 321)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 323)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 326)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 327)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 343)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 344)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 348)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 349)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 358)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 359)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 362)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 363)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 366)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 368)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 383)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 392)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 393)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 399)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 400)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 402)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 415)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 416)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 421)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 423)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 430)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 431)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 439)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 440)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 445)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 451)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 454)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 321)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 323)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 326)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 327)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 343)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 344)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 348)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 349)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 358)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 359)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 362)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 363)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 366)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 368)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 383)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 392)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 393)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 399)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 400)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 402)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 415)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 416)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 421)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 423)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 430)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 431)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 439)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 440)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 445)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 451)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 454)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_ (GALGAS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 469)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 470)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      GALGAS_bool var_isConstant_15727 ;
      GALGAS_lstring var_selector_15751 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 474)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant_15727 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 478)) ;
        var_isConstant_15727 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_15903 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 481)) ;
      GALGAS_bool var_mIsUnused_15929 ;
      switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused_15929 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 486)) ;
        var_mIsUnused_15929 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_16083 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 489)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_15751, var_mFormalParameterTypeName_15903, var_mFormalParameterName_16083, var_mIsUnused_15929, var_isConstant_15727  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 490)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 497)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 470)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 474)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 478)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 481)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 486)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 489)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 497)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 470)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 474)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 478)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 481)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 486)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 489)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 497)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 359)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction_14206 ;
      nt_semantic_5F_instruction_ (var_instruction_14206, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_14206  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 362)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 359)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 359)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 371)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 372)) ;
  GALGAS_lstring var_mActionName_14694 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 373)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 374)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_14807 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_14807, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 376)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_14694, var_mFormalParameterList_14807  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 377))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 377)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 371)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 372)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 373)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 374)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 376)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 371)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 372)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 373)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 374)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 376)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 390)) ;
  GALGAS_lstring var_mRoutineName_15410 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 391)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_15515 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_15515, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 393)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_15612 ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList_15612, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 395)) ;
  GALGAS_location var_endOfInstructionList_15649 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 396)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mRoutineName_15410, var_mFormalParameterList_15515, var_mRoutineInstructionList_15612, var_endOfInstructionList_15649  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 397))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 397)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 390)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 391)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 393)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 395)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 390)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 391)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 393)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 395)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 410)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 411)) ;
  GALGAS_lstring var_mRoutineName_16140 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 412)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_16245 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_16245, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 414)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_16342 ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList_16342, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 416)) ;
  GALGAS_location var_endOfInstructionList_16379 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 417)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_mRoutineName_16140, var_mFormalParameterList_16245, var_mRoutineInstructionList_16342, var_endOfInstructionList_16379  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 418))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 418)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 410)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 411)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 412)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 414)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 416)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 410)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 411)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 412)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 414)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 416)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 433)) ;
  GALGAS_bool var_isOnce_17009 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_17035 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_1 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_17107 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 438)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attribute_17107.readProperty_string ().objectCompare (GALGAS_string ("once"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_isOnce_17009.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attribute_17107.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray3  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 441)) ;
            }
          }
          var_isOnce_17009 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attribute_17107.readProperty_string ().objectCompare (GALGAS_string ("usefull"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_isUsefull_17035.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attribute_17107.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 446)) ;
              }
            }
            var_isUsefull_17035 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%once")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%usefull")) ;
          inCompiler->emitSemanticError (var_attribute_17107.readProperty_location (), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 450)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_17604 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 453)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_17725 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_17725, inCompiler) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_isOnce_17009.boolEnum () ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_17725.getter_length (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 455)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_functionName_17604.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray9  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 456)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 458)) ;
  GALGAS_lstring var_resultTypeName_17904 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 459)) ;
  GALGAS_lstring var_resultVariableName_17940 ;
  switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
    var_resultVariableName_17940 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 462)) ;
  } break ;
  case 2: {
    var_resultVariableName_17940 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 464))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 464)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_18153 ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList_18153, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 468)) ;
  GALGAS_location var_endOfFunctionInstructionList_18198 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 469)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_isOnce_17009.boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_17604, var_resultTypeName_17904, var_resultVariableName_17940, var_functionInstructionList_18153, var_endOfFunctionInstructionList_18198, GALGAS_bool (false), var_isUsefull_17035  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 471))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 471)) ;
    }
  }
  if (kBoolFalse == test_10) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_17604, var_formalInputParameterList_17725, var_resultTypeName_17904, var_resultVariableName_17940, var_functionInstructionList_18153, var_endOfFunctionInstructionList_18198, GALGAS_bool (false), var_isUsefull_17035  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 482))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 482)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 433)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 438)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 453)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 458)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 459)) ;
  switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 462)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 468)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 433)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 438)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 453)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 458)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 459)) ;
  switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 462)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 468)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 499)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 500)) ;
  GALGAS_bool var_isOnce_19127 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_19153 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_19225 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 505)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attribute_19225.readProperty_string ().objectCompare (GALGAS_string ("once"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_isOnce_19127.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attribute_19225.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray3  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 508)) ;
            }
          }
          var_isOnce_19127 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attribute_19225.readProperty_string ().objectCompare (GALGAS_string ("usefull"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_isUsefull_19153.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attribute_19225.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 513)) ;
              }
            }
            var_isUsefull_19153 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%once")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%usefull")) ;
          inCompiler->emitSemanticError (var_attribute_19225.readProperty_location (), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 517)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_19722 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 520)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_19843 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_19843, inCompiler) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_isOnce_19127.boolEnum () ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_19843.getter_length (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 522)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_functionName_19722.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray9  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 523)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 525)) ;
  GALGAS_lstring var_resultTypeName_20022 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 526)) ;
  GALGAS_lstring var_resultVariableName_20058 ;
  switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    var_resultVariableName_20058 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 529)) ;
  } break ;
  case 2: {
    var_resultVariableName_20058 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 531))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 531)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 533)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_20271 ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList_20271, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 535)) ;
  GALGAS_location var_endOfFunctionInstructionList_20316 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 536)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_isOnce_19127.boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_19722, var_resultTypeName_20022, var_resultVariableName_20058, var_functionInstructionList_20271, var_endOfFunctionInstructionList_20316, GALGAS_bool (true), var_isUsefull_19153  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 538))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 538)) ;
    }
  }
  if (kBoolFalse == test_10) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_19722, var_formalInputParameterList_19843, var_resultTypeName_20022, var_resultVariableName_20058, var_functionInstructionList_20271, var_endOfFunctionInstructionList_20316, GALGAS_bool (true), var_isUsefull_19153  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 549))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 549)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 499)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 500)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 505)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 520)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 525)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 526)) ;
  switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 529)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 533)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 535)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 499)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 500)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 505)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 520)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 525)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 526)) ;
  switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 529)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 533)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 535)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 568)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 569)) ;
  GALGAS_lstring var_mActionName_21495 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 570)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 571)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_21624 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_21624, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 573)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 574)) ;
  GALGAS_lstring var_resultTypeName_21673 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 575)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName_21495, var_formalInputParameterList_21624, var_resultTypeName_21673  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 576))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 576)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 568)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 569)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 570)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 571)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 573)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 574)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 575)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 568)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 569)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 570)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 571)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 573)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 574)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 575)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_22600 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 595)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_22600.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("?")) ;
      inCompiler->emitSemanticError (var_selector_22600.readProperty_location (), GALGAS_string ("the selector should be '?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 597)) ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 600)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 601))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 601)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_22879 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 603)) ;
    GALGAS_lstring var_actualParameterName_22923 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 604)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName_22879, var_actualParameterName_22923  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 605)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 607)) ;
    GALGAS_lstring var_actualParameterTypeName_23116 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 608)) ;
    GALGAS_lstring var_actualParameterName_23160 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 609)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName_23116, var_actualParameterName_23160  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 610)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_23344 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 612)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName_23344  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 613)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 595)) ;
  switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 600)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 603)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 604)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 607)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 608)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 609)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 612)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 595)) ;
  switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 600)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 603)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 604)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 607)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 608)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 609)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 612)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 620)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_23787 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 623)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 624)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_23787, GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 625))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 625)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_23916 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 627)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 628)) ;
      GALGAS_lstring var_actualParameterTypeName_23971 ;
      switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_23971 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 631)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_23971 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 633)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_24135 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 635)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_23916, GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName_23971, var_actualParameterName_24135  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 638))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 636)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_24317 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 640)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 641)) ;
      GALGAS_lstring var_actualParameterTypeName_24372 ;
      switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_24372 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 644)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_24372 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 646)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_24536 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 648)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_24317, GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName_24372, var_actualParameterName_24536  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 651))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 649)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_24718 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 653)) ;
      GALGAS_lstring var_actualParameterName_24762 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 654)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_24718, GALGAS_inputParameterVariable::constructor_new (var_actualParameterName_24762  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 655))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 655)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 623)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 624)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 627)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 628)) ;
      switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 633)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 635)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 640)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 641)) ;
      switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 646)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 648)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 653)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 654)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 623)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 624)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 627)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 628)) ;
      switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 633)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 635)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 640)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 641)) ;
      switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 646)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 648)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 653)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 654)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName_2992 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
  GALGAS_lstring var_optionalProperty_3026 ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    var_optionalProperty_3026 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 85)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 87)) ;
    GALGAS_lstring var_attributeName_3130 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88)) ;
    var_optionalProperty_3026 = var_attributeName_3130 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_3248 ;
  nt_expression_ (var_mSourceExpression_3248, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName_2992.readProperty_location (), var_mTargetVariableName_2992, var_optionalProperty_3026, var_mSourceExpression_3248  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 87)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 87)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)) ;
  GALGAS_lstring var_mTargetVariableName_3680 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 106)) ;
  GALGAS_lstring var_optionalProperty_3714 ;
  switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    var_optionalProperty_3714 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
    GALGAS_lstring var_attributeName_3818 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
    var_optionalProperty_3714 = var_attributeName_3818 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_3936 ;
  nt_expression_ (var_mSourceExpression_3936, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPropertyAssignmentInstructionAST::constructor_new (var_mTargetVariableName_3680.readProperty_location (), var_mTargetVariableName_3680, var_optionalProperty_3714, var_mSourceExpression_3936  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 106)) ;
  switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 106)) ;
  switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 163)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 163)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 163)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_ (const GALGAS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiverName_6380 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 173)) ;
  GALGAS_location var_instructionLocation_6408 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 174)) ;
  GALGAS_lstringlist var_mStructAttributeList_6467 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 175)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 178)) ;
      GALGAS_lstring var_attributeName_6541 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 179)) ;
      var_mStructAttributeList_6467.addAssign_operation (var_attributeName_6541  COMMA_SOURCE_FILE ("instruction-concat.galgas", 180)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 183)) ;
    GALGAS_semanticExpressionAST var_expression_6674 ;
    nt_expression_ (var_expression_6674, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6408, constinArgument_inHasSelfPrefix, var_receiverName_6380, var_mStructAttributeList_6467, var_expression_6674  COMMA_SOURCE_FILE ("instruction-concat.galgas", 185)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 193)) ;
    switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
    case 1: {
      GALGAS_actualOutputExpressionList var_expressionList_6995 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_6995, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualElementsInstructionAST::constructor_new (var_instructionLocation_6408, constinArgument_inHasSelfPrefix, var_receiverName_6380, var_mStructAttributeList_6467, var_expressionList_6995  COMMA_SOURCE_FILE ("instruction-concat.galgas", 196)) ;
    } break ;
    case 2: {
      GALGAS_semanticExpressionAST var_expression_7278 ;
      nt_expression_ (var_expression_7278, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6408, constinArgument_inHasSelfPrefix, var_receiverName_6380, var_mStructAttributeList_6467, var_expression_7278  COMMA_SOURCE_FILE ("instruction-concat.galgas", 205)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 214)) ;
    GALGAS_semanticExpressionAST var_expression_7576 ;
    nt_expression_ (var_expression_7576, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6408, constinArgument_inHasSelfPrefix, var_receiverName_6380, var_mStructAttributeList_6467, var_expression_7576  COMMA_SOURCE_FILE ("instruction-concat.galgas", 216)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 224)) ;
    GALGAS_semanticExpressionAST var_expression_7849 ;
    nt_expression_ (var_expression_7849, inCompiler) ;
    outArgument_outInstruction = GALGAS_divEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6408, constinArgument_inHasSelfPrefix, var_receiverName_6380, var_mStructAttributeList_6467, var_expression_7849  COMMA_SOURCE_FILE ("instruction-concat.galgas", 226)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 173)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 183)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 193)) ;
    switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 214)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 224)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 173)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 183)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 193)) ;
    switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 214)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 224)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i14_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 239)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_8336 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 241)) ;
    GALGAS_semanticExpressionAST var_expression_8394 ;
    nt_expression_ (var_expression_8394, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_8336, var_expression_8394, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 243))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 243)) ;
    switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 241)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 241)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 41)) ;
  GALGAS_location var_instructionLocation_1646 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 42)) ;
  GALGAS_lstringlist var_dropList_1693 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_1746 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 45)) ;
    var_dropList_1693.addAssign_operation (var_variableName_1746  COMMA_SOURCE_FILE ("instruction-drop.galgas", 46)) ;
    switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation_1646, var_dropList_1693  COMMA_SOURCE_FILE ("instruction-drop.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 45)) ;
    switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 45)) ;
    switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i16_ (GALGAS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 111)) ;
  switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
    GALGAS_bool var_hasFixItRemove_4008 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 119)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_hasFixItRemove_4008.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 121)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 121)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 123))  COMMA_SOURCE_FILE ("instruction-error.galgas", 123)) ;
          var_hasFixItRemove_4008 = GALGAS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 127)) ;
        GALGAS_location var_errorLocation_4308 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 128)) ;
        GALGAS_semanticExpressionAST var_expression_4385 ;
        nt_expression_ (var_expression_4385, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItReplace (var_expression_4385, var_errorLocation_4308  COMMA_SOURCE_FILE ("instruction-error.galgas", 130))  COMMA_SOURCE_FILE ("instruction-error.galgas", 130)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 132)) ;
        GALGAS_location var_errorLocation_4528 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 133)) ;
        GALGAS_semanticExpressionAST var_expression_4605 ;
        nt_expression_ (var_expression_4605, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertAfter (var_expression_4605, var_errorLocation_4528  COMMA_SOURCE_FILE ("instruction-error.galgas", 135))  COMMA_SOURCE_FILE ("instruction-error.galgas", 135)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 137)) ;
        GALGAS_location var_errorLocation_4753 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 138)) ;
        GALGAS_semanticExpressionAST var_expression_4830 ;
        nt_expression_ (var_expression_4830, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertBefore (var_expression_4830, var_errorLocation_4753  COMMA_SOURCE_FILE ("instruction-error.galgas", 140))  COMMA_SOURCE_FILE ("instruction-error.galgas", 140)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 142)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 119)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 127)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 132)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 137)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 142)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 119)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 127)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 132)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 137)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 142)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 149)) ;
  GALGAS_location var_instructionLocation_5191 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 150)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_5273 ;
  nt_expression_ (var_mReceiverExpression_5273, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 152)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_5343 ;
  nt_expression_ (var_mErrorExpression_5343, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_5370 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 154)) ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_5472 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 159)) ;
      var_mBuiltVariableList_5370.addAssign_operation (var_builtVariableName_5472  COMMA_SOURCE_FILE ("instruction-error.galgas", 160)) ;
      switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 162)) ;
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
  GALGAS_fixitListAST var_fixitListAST_5612 ;
  nt_issue_5F_fixit_ (var_fixitListAST_5612, inCompiler) ;
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_5191, var_mReceiverExpression_5273, var_mErrorExpression_5343, var_mBuiltVariableList_5370, var_fixitListAST_5612  COMMA_SOURCE_FILE ("instruction-error.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 149)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 152)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 159)) ;
      switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 162)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 149)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 152)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 159)) ;
      switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 162)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lbigint var_count_10015 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 295)) ;
  GALGAS_uint var_n_10033 = var_count_10015.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 296)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_n_10033.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_10015.readProperty_location (), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 298)) ;
    }
  }
  if (var_n_10033.isValid ()) {
    uint32_t variant_10137 = var_n_10033.uintValue () ;
    bool loop_10137 = true ;
    while (loop_10137) {
      loop_10137 = GALGAS_bool (kIsStrictSup, var_n_10033.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_10137) {
        loop_10137 = GALGAS_bool (kIsStrictSup, var_n_10033.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_10137 && (0 == variant_10137)) {
        loop_10137 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 300)) ;
      }
      if (loop_10137) {
        variant_10137 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 301)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 301))  COMMA_SOURCE_FILE ("instruction-for.galgas", 301)) ;
        var_n_10033.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 302)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 295)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 295)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i19_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_typeName_10488 ;
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    var_typeName_10488 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 311)) ;
  } break ;
  case 2: {
    var_typeName_10488 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 313)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_10488, GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 317))  COMMA_SOURCE_FILE ("instruction-for.galgas", 317)) ;
  } break ;
  case 2: {
    GALGAS_bool var_isUnused_10671 ;
    switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
    case 1: {
      var_isUnused_10671 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 323)) ;
      var_isUnused_10671 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_constantName_10815 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 326)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_10488, var_isUnused_10671, var_constantName_10815  COMMA_SOURCE_FILE ("instruction-for.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 313)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 323)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 326)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 313)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 323)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 326)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_11138 = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 335)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (var_elementList_11138, inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_location_11281 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 340)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 342)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_11381 ;
  nt_expression_ (var_enumeratedExpression_11381, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList_11138, GALGAS_bool (false), var_enumeratedExpression_11381, var_location_11281  COMMA_SOURCE_FILE ("instruction-for.galgas", 344)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_parse (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 342)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 342)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_11807 ;
  switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    var_typeName_11807 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 357)) ;
  } break ;
  case 2: {
    var_typeName_11807 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 359)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_11924 ;
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 363)) ;
    var_enumerationVariable_11924 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 364)) ;
  } break ;
  case 2: {
    var_enumerationVariable_11924 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 366)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 368)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_12113 ;
  nt_expression_ (var_enumeratedExpression_12113, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName_11807, var_enumerationVariable_11924, var_enumeratedExpression_12113, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 374))  COMMA_SOURCE_FILE ("instruction-for.galgas", 370)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 359)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 363)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 366)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 368)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 359)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 363)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 366)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 368)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 381)) ;
  GALGAS_location var_startLocation_12537 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 382)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 383)) ;
  GALGAS_lstring var_prefix_12586 ;
  switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
    var_prefix_12586 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 386)) ;
  } break ;
  case 2: {
    var_prefix_12586 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endLocation_12687 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 390)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 391)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_12779 ;
  nt_expression_ (var_enumeratedExpression_12779, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix_12586, var_enumeratedExpression_12779, var_startLocation_12537.getter_union (var_endLocation_12687, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 396))  COMMA_SOURCE_FILE ("instruction-for.galgas", 393)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 381)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 383)) ;
  switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 391)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 381)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 383)) ;
  switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 391)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
  GALGAS_location var_instructionLocation_13183 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 404)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_13230 = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 405)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_13311 ;
    switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
    case 1: {
      var_ascending_13311 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 411)) ;
      var_ascending_13311 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_13503 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject_13503, inCompiler) ;
    var_mEnumeratedObjectList_13230.addAssign_operation (var_ascending_13311, var_enumeratedObject_13503  COMMA_SOURCE_FILE ("instruction-for.galgas", 415)) ;
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 417)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_13639 ;
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
    var_mWhileExpression_13639 = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 421))  COMMA_SOURCE_FILE ("instruction-for.galgas", 421)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 423)) ;
    nt_expression_ (var_mWhileExpression_13639, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_13814 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 426)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_13890 ;
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_13890 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 429)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 431)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBeforeInstructionList_13890, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_14080 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 434)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 435)) ;
  GALGAS_lstring var_indexVariableName_14141 ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_indexVariableName_14141 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 438))  COMMA_SOURCE_FILE ("instruction-for.galgas", 438)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
    var_indexVariableName_14141 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 441)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 442)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_14343 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoInstructionList_14343, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_14367 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 445)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_14444 ;
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_14444 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 448)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 450)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBetweenInstructionList_14444, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_14638 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 453)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_14713 ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_14713 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 456)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mAfterInstructionList_14713, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_14899 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 461)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_14988 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 465)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_14988.readProperty_string ().objectCompare (GALGAS_string ("for"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%for")) ;
        inCompiler->emitSemanticError (var_terminator_14988.readProperty_location (), GALGAS_string ("the terminator attribute should be '%for'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for.galgas", 467)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_foreach_5F_instruction_15177 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 470)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation_13183, var_mEnumeratedObjectList_13230, var_indexVariableName_14141, var_mWhileExpression_13639, var_endof_5F_while_5F_expression_13814, var_mBeforeInstructionList_13890, var_endof_5F_before_5F_branch_14080, var_mBetweenInstructionList_14444, var_endof_5F_between_5F_branch_14638, var_mDoInstructionList_14343, var_endof_5F_do_5F_branch_14367, var_mAfterInstructionList_14713, var_endof_5F_after_5F_branch_14899, var_endof_5F_foreach_5F_instruction_15177  COMMA_SOURCE_FILE ("instruction-for.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 411)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 417)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 423)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 431)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 435)) ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 441)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 442)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 450)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 465)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 411)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 417)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 423)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 431)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 435)) ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 441)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 442)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 450)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 465)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  GALGAS_location var_instructionLocation_11486 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 256)) ;
  GALGAS_lstring var_grammarComponentName_11555 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 257)) ;
  GALGAS_lstring var_labelName_11617 ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    var_labelName_11617 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 260))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 260)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 262)) ;
    var_labelName_11617 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_actualParameterListAST var_actualParameterList_11827 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_actualParameterList_11827, inCompiler) ;
  nt_grammar_5F_instruction_5F_core_ (var_instructionLocation_11486, var_actualParameterList_11827, var_grammarComponentName_11555, var_labelName_11617, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 257)) ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 262)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 257)) ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 262)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 276)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_12510 ;
  nt_expression_ (var_sourceExpression_12510, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_12540 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 278)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_12727 ;
  switch (select_galgas_34_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_12727 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 282)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 284)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_12727, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_12510, var_endOfSourceExpression_12540, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_12727  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 287)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 276)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 284)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 276)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 284)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_13811 ;
  nt_expression_ (var_sourceExpression_13811, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_13851 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 307)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 308)) ;
  GALGAS_semanticExpressionAST var_nameExpression_13927 ;
  nt_expression_ (var_nameExpression_13927, inCompiler) ;
  GALGAS_location var_endOfNameExpression_13965 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 310)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_14143 ;
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_14143 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 314)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 316)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_14143, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_13811, var_endOfSourceExpression_13851, var_nameExpression_13927, var_endOfNameExpression_13965, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_14143  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 319)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 308)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 316)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 308)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 316)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i27_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_7821 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  GALGAS_ifExpressionList var_testExpression_7878 ;
  nt_if_5F_expression_ (var_testExpression_7878, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_7947 ;
  nt_semantic_5F_instruction_5F_list_ (var_then_5F_instructionList_7947, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_7981 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_8055 ;
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_8055 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 222)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 224)) ;
    nt_semantic_5F_instruction_5F_list_ (var_else_5F_instructionList_8055, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 227)) ;
    GALGAS_semanticInstructionAST var_instruction_8269 ;
    nt_if_5F_instruction_5F_core_ (var_instruction_8269, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 229)) ;
    temp_0.addAssign_operation (var_instruction_8269  COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
    var_else_5F_instructionList_8055 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_7821, var_testExpression_7878, var_then_5F_instructionList_7947, var_endOf_5F_then_5F_branchLocation_7981, var_else_5F_instructionList_8055, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 237))  COMMA_SOURCE_FILE ("instruction-if.galgas", 231)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_if_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 224)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 227)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_if_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 224)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 227)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 244)) ;
  nt_if_5F_instruction_5F_core_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 246)) ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_8858 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 249)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_8858.readProperty_string ().objectCompare (GALGAS_string ("if"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%if")) ;
        inCompiler->emitSemanticError (var_terminator_8858.readProperty_location (), GALGAS_string ("the terminator attribute should be '%if'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 251)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 244)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 246)) ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 244)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 246)) ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i29_ (GALGAS_ifExpressionList & outArgument_outExpressionList,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_ifExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 259)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 262)) ;
      GALGAS_lstring var_constantName_9298 ;
      switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
      case 1: {
        var_constantName_9298 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 265)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 267)) ;
        var_constantName_9298 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 268)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 270)) ;
      GALGAS_semanticExpressionAST var_expression_9474 ;
      nt_expression_5F_or_ (var_expression_9474, inCompiler) ;
      GALGAS_location var_endOfReceiverExpression_9510 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 272)) ;
      switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_9298, var_expression_9474, var_endOfReceiverExpression_9510, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 278))  COMMA_SOURCE_FILE ("instruction-if.galgas", 274))  COMMA_SOURCE_FILE ("instruction-if.galgas", 274)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 281)) ;
        GALGAS_lstring var_typeName_9812 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 282)) ;
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_9298, var_expression_9474, var_endOfReceiverExpression_9510, var_typeName_9812  COMMA_SOURCE_FILE ("instruction-if.galgas", 283))  COMMA_SOURCE_FILE ("instruction-if.galgas", 283)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 291)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
      GALGAS_semanticExpressionAST var_receiverExpression_10129 ;
      nt_expression_ (var_receiverExpression_10129, inCompiler) ;
      GALGAS_lstring var_optionalMethodName_10183 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 294)) ;
      GALGAS_optionalMethodActualArgumentList var_optionalMethodActualArgumentList_10262 = GALGAS_optionalMethodActualArgumentList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 295)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_10324 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 298)) ;
          GALGAS_semanticExpressionAST var_expression_10363 ;
          nt_expression_ (var_expression_10363, inCompiler) ;
          var_optionalMethodActualArgumentList_10262.addAssign_operation (var_selector_10324, GALGAS_optionalMethodActualArgument::constructor_actualOutput (var_expression_10363, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 300))  COMMA_SOURCE_FILE ("instruction-if.galgas", 300))  COMMA_SOURCE_FILE ("instruction-if.galgas", 300)) ;
        } break ;
        case 3: {
          GALGAS_lstring var_selector_10519 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 302)) ;
          switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 304)) ;
            GALGAS_lstring var_typeName_10588 ;
            switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
            case 1: {
              var_typeName_10588 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 307)) ;
            } break ;
            case 2: {
              var_typeName_10588 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 309)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_constantName_10754 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 311)) ;
            var_optionalMethodActualArgumentList_10262.addAssign_operation (var_selector_10519, GALGAS_optionalMethodActualArgument::constructor_actualLetInput (var_typeName_10588, var_constantName_10754  COMMA_SOURCE_FILE ("instruction-if.galgas", 312))  COMMA_SOURCE_FILE ("instruction-if.galgas", 312)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 314)) ;
            GALGAS_lstring var_typeName_10944 ;
            switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
            case 1: {
              var_typeName_10944 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 317)) ;
            } break ;
            case 2: {
              var_typeName_10944 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 319)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_variableName_11109 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 321)) ;
            var_optionalMethodActualArgumentList_10262.addAssign_operation (var_selector_10519, GALGAS_optionalMethodActualArgument::constructor_actualVarInput (var_typeName_10944, var_variableName_11109  COMMA_SOURCE_FILE ("instruction-if.galgas", 322))  COMMA_SOURCE_FILE ("instruction-if.galgas", 322)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 324)) ;
            var_optionalMethodActualArgumentList_10262.addAssign_operation (var_selector_10519, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 325)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("instruction-if.galgas", 325))  COMMA_SOURCE_FILE ("instruction-if.galgas", 325)) ;
          } break ;
          case 4: {
            GALGAS_lbigint var_repetitionCount_11447 = inCompiler->synthetizedAttribute_bigintValue () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 327)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 328)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsNotEqual, var_selector_10519.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("?")) ;
                inCompiler->emitSemanticError (var_selector_10519.readProperty_location (), GALGAS_string ("the selector should be '?'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 330)) ;
              }
            }
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_repetitionCount_11447.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 332)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_repetitionCount_11447.readProperty_location (), GALGAS_string ("the repetition count should be > 0"), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 333)) ;
              }
            }
            cEnumerator_range enumerator_11793 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_repetitionCount_11447.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 335)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 335))), kENUMERATION_UP) ;
            while (enumerator_11793.hasCurrentObject ()) {
              var_optionalMethodActualArgumentList_10262.addAssign_operation (var_selector_10519, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 336)), enumerator_11793.current (HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 336))  COMMA_SOURCE_FILE ("instruction-if.galgas", 336)) ;
              enumerator_11793.gotoNextObject () ;
            }
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 340)) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_optionalMethodCall (var_receiverExpression_10129, var_optionalMethodName_10183, var_optionalMethodActualArgumentList_10262  COMMA_SOURCE_FILE ("instruction-if.galgas", 341))  COMMA_SOURCE_FILE ("instruction-if.galgas", 341)) ;
    } break ;
    case 3: {
      GALGAS_semanticExpressionAST var_expression_12233 ;
      nt_expression_ (var_expression_12233, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_regularExp (var_expression_12233  COMMA_SOURCE_FILE ("instruction-if.galgas", 348))  COMMA_SOURCE_FILE ("instruction-if.galgas", 348)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 262)) ;
      switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 265)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 267)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 270)) ;
      nt_expression_5F_or_parse (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 281)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 282)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 291)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 294)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 298)) ;
          nt_expression_parse (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 302)) ;
          switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 304)) ;
            switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 309)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 311)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 314)) ;
            switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 319)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 321)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 324)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 327)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 328)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 340)) ;
    } break ;
    case 3: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 262)) ;
      switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 265)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 267)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 270)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 281)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 282)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 291)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 294)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 298)) ;
          nt_expression_indexing (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 302)) ;
          switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 304)) ;
            switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 309)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 311)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 314)) ;
            switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 319)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 321)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 324)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 327)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 328)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 340)) ;
    } break ;
    case 3: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 85)) ;
  GALGAS_lstring var_typeName_3293 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  GALGAS_lstring var_constantName_3328 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 87)) ;
  outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (var_typeName_3293.readProperty_location (), var_typeName_3293, var_constantName_3328  COMMA_SOURCE_FILE ("instruction-let.galgas", 88)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 87)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
  GALGAS_lstring var_typeName_3694 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  GALGAS_lstring var_variableName_3729 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_3799 ;
  nt_expression_ (var_sourceExpression_3799, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_3694.readProperty_location (), GALGAS_bool (true), var_typeName_3694, var_variableName_3729, var_sourceExpression_3799  COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
  GALGAS_lstring var_variableName_4240 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_4310 ;
  nt_expression_ (var_sourceExpression_4310, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName_4240.readProperty_location (), var_variableName_4240, var_sourceExpression_4310  COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 66)) ;
  GALGAS_location var_instructionLocation_2366 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 67)) ;
  GALGAS_logListAST var_logList_2411 = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_2485 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 71)) ;
      var_logList_2411.addAssign_operation (var_loggedVariableName_2485, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName_2485  COMMA_SOURCE_FILE ("instruction-log.galgas", 72))  COMMA_SOURCE_FILE ("instruction-log.galgas", 72)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 75)) ;
      GALGAS_lstring var_propertyName_2646 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 76)) ;
      var_logList_2411.addAssign_operation (var_propertyName_2646, GALGAS_structPropertyAccessExpressionAST::constructor_new (var_propertyName_2646.readProperty_location (), GALGAS_selfInExpressionAST::constructor_new (var_propertyName_2646.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-log.galgas", 79)), var_propertyName_2646  COMMA_SOURCE_FILE ("instruction-log.galgas", 79))  COMMA_SOURCE_FILE ("instruction-log.galgas", 77)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_logMessage_2871 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 82)) ;
      GALGAS_semanticExpressionAST var_logExpression_2923 ;
      nt_expression_ (var_logExpression_2923, inCompiler) ;
      var_logList_2411.addAssign_operation (var_logMessage_2871, var_logExpression_2923  COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation_2366, var_logList_2411  COMMA_SOURCE_FILE ("instruction-log.galgas", 89)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 71)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 76)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 82)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 71)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 76)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 82)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 77)) ;
  GALGAS_location var_instructionLocation_3017 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 80)) ;
  GALGAS_semanticExpressionAST var_variantExpression_3120 ;
  nt_expression_ (var_variantExpression_3120, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_3151 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 83)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_3266 ;
  nt_semantic_5F_instruction_5F_list_ (var_firstInstructions_3266, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_3304 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 87)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 88)) ;
  GALGAS_semanticExpressionAST var_loopExpression_3393 ;
  nt_expression_ (var_loopExpression_3393, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_3421 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 91)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_3531 ;
  nt_semantic_5F_instruction_5F_list_ (var_secondInstructions_3531, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_3563 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 94)) ;
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3652 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 97)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_3652.readProperty_string ().objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%loop")) ;
        inCompiler->emitSemanticError (var_terminator_3652.readProperty_location (), GALGAS_string ("the terminator attribute should be '%loop'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 99)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfLoopInstruction_3839 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 102)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithVariantAST::constructor_new (var_instructionLocation_3017, var_variantExpression_3120, var_endOfVariantExpression_3151, var_firstInstructions_3266, var_endOfFirstInstructions_3304, var_loopExpression_3393, var_endOfLoopExpression_3421, var_secondInstructions_3531, var_endOfSecondInstructions_3563, var_endOfLoopInstruction_3839  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 80)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 83)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 88)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 91)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 94)) ;
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 97)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 80)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 83)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 88)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 91)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 94)) ;
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 97)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 67)) ;
  GALGAS_location var_instructionLocation_2717 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 68)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_2817 ;
  nt_semantic_5F_instruction_5F_list_ (var_firstInstructions_2817, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_2855 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 72)) ;
  GALGAS_semanticExpressionAST var_loopExpression_2944 ;
  nt_expression_ (var_loopExpression_2944, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_2972 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 75)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_3082 ;
  nt_semantic_5F_instruction_5F_list_ (var_secondInstructions_3082, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_3114 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 78)) ;
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3203 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 81)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_3203.readProperty_string ().objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%loop")) ;
        inCompiler->emitSemanticError (var_terminator_3203.readProperty_location (), GALGAS_string ("the terminator attribute should be '%loop'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 83)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfLoopInstruction_3390 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 86)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithoutVariantAST::constructor_new (var_instructionLocation_2717, var_firstInstructions_2817, var_endOfFirstInstructions_2855, var_loopExpression_2944, var_endOfLoopExpression_2972, var_secondInstructions_3082, var_endOfSecondInstructions_3114, var_endOfLoopInstruction_3390  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 67)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 72)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 75)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 78)) ;
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 67)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 72)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 75)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 78)) ;
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
  GALGAS_location var_instructionLocation_1585 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 36)) ;
  GALGAS_semanticExpressionAST var_expression_1658 ;
  nt_expression_ (var_expression_1658, inCompiler) ;
  outArgument_outInstruction = GALGAS_messageInstructionAST::constructor_new (var_instructionLocation_1585, var_expression_1658  COMMA_SOURCE_FILE ("instruction-message.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 45)) ;
  GALGAS_location var_instructionLocation_1882 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 46)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1964 ;
  nt_expression_ (var_mReceiverExpression_1964, inCompiler) ;
  GALGAS_lstring var_mMethodName_1998 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2075 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2075, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 50)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_1882, var_mReceiverExpression_1964, var_mMethodName_1998, var_actualParameterList_2075  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 45)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 45)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName_1709 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 41)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1826 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_actualParameterList_1826, inCompiler) ;
  outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_mRoutineName_1709.readProperty_location (), var_mRoutineName_1709, var_actualParameterList_1826  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 41)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 41)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
  GALGAS_location var_instructionLocation_1641 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 42)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_1728 ;
  nt_expression_ (var_sourceExpression_1728, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation_1641, var_sourceExpression_1728  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 42)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 42)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 115)) ;
  GALGAS_location var_instructionLocation_4435 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 117)) ;
  GALGAS_actualOutputExpressionList var_expressionList_4548 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_4548, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation_4435, var_expressionList_4548  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 117)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 117)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 128)) ;
  GALGAS_location var_instructionLocation_4909 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 130)) ;
  GALGAS_semanticExpressionAST var_expression_4991 ;
  nt_expression_ (var_expression_4991, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_4909, var_expression_4991  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 130)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 130)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 141)) ;
  GALGAS_location var_instructionLocation_5350 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 143)) ;
  GALGAS_semanticExpressionAST var_expression_5432 ;
  nt_expression_ (var_expression_5432, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_5350, var_expression_5432  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 143)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 143)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
  GALGAS_location var_instructionLocation_5792 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 155)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 156)) ;
  GALGAS_semanticExpressionAST var_expression_5874 ;
  nt_expression_ (var_expression_5874, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_5792, var_expression_5874  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 158)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 156)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 156)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
  GALGAS_location var_instructionLocation_6232 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
  GALGAS_semanticExpressionAST var_expression_6314 ;
  nt_expression_ (var_expression_6314, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6232, var_expression_6314  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 104)) ;
  GALGAS_location var_instructionLocation_3570 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 105)) ;
  GALGAS_lstring var_selector_3610 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 106)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_3610.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_3610.readProperty_location (), GALGAS_string ("an empty selector '!?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 108)) ;
    }
  }
  GALGAS_bool var_prefixedBySelf_3746 ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_3746 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
    var_prefixedBySelf_3746 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mReceiverName_3888 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 118)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes_3922 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 119)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 122)) ;
      GALGAS_lstring var_structAttribute_4011 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 123)) ;
      var_mReceiverStructAttributes_3922.addAssign_operation (var_structAttribute_4011  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 124)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeNameForCasting_4107 ;
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    var_typeNameForCasting_4107 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-setter-call.galgas", 128)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 130)) ;
    var_typeNameForCasting_4107 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSetterName_4252 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
  GALGAS_actualParameterListAST var_actualParameterList_4329 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_4329, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 135)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation_3570, var_prefixedBySelf_3746, var_mReceiverName_3888, var_mReceiverStructAttributes_3922, var_typeNameForCasting_4107, var_mSetterName_4252, var_actualParameterList_4329  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 106)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 123)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 130)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 135)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 106)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 123)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 130)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 150)) ;
  GALGAS_location var_instructionLocation_4806 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 151)) ;
  GALGAS_lstring var_selector_4846 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 152)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_4846.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_4846.readProperty_location (), GALGAS_string ("an empty selector '!?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 154)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  GALGAS_lstring var_mSetterName_4998 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 157)) ;
  GALGAS_actualParameterListAST var_actualParameterList_5075 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_5075, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
  outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation_4806, var_mSetterName_4998, var_actualParameterList_5075  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 160)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 157)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 157)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  GALGAS_location var_instructionLocation_4500 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
  GALGAS_semanticExpressionAST var_switchExpression_4556 ;
  nt_expression_ (var_switchExpression_4556, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_4586 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)) ;
  GALGAS_switchBranchesAST var_switchBranches_4645 = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 136)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)) ;
    GALGAS_lstringlist var_constantNameList_4737 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_4807 ;
    nt_switch_5F_case_ (var_constantNameList_4737, var_associatedValuesExtraction_4807, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
    GALGAS_semanticInstructionListAST var_instructions_4869 ;
    nt_semantic_5F_instruction_5F_list_ (var_instructions_4869, inCompiler) ;
    var_switchBranches_4645.addAssign_operation (var_constantNameList_4737, var_associatedValuesExtraction_4807, var_instructions_4869, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 144))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 144)) ;
    switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  GALGAS_location var_endOfSwitchInstruction_5028 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_5107 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_5107.readProperty_string ().objectCompare (GALGAS_string ("switch"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%switch")) ;
        inCompiler->emitSemanticError (var_terminator_5107.readProperty_location (), GALGAS_string ("the terminator attribute should be '%switch'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_4500, var_switchExpression_4556, var_endOfSwitchExpression_4586, var_switchBranches_4645, var_endOfSwitchInstruction_5028  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i48_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_5810 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_5810  COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)) ;
    switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 176)) ;
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
      case 1: {
        GALGAS_lbigint var_n_6006 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
        cEnumerator_range enumerator_6054 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_n_6006.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184))), kENUMERATION_UP) ;
        while (enumerator_6054.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 185)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 185)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 185)) ;
          enumerator_6054.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 188)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_6299 ;
        switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
        case 1: {
          var_typeName_6299 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
        } break ;
        case 2: {
          var_typeName_6299 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 195)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_6452 ;
        switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_6452 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
          var_constantMarkedAsUnused_6452 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_6652 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_6299, var_constantName_6652, var_constantMarkedAsUnused_6452  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i48_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
    switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 188)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i48_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
    switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 188)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 44)) ;
  GALGAS_location var_instructionLocation_1866 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 45)) ;
  GALGAS_lstring var_mTypeName_1919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 46)) ;
  GALGAS_lstring var_mMethodName_1997 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 47)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2074 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2074, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 49)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation_1866, var_mTypeName_1919, var_mMethodName_1997, var_actualParameterList_2074  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 44)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 47)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 44)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 47)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 78)) ;
  GALGAS_lstring var_variableName_3005 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 80)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_3075 ;
  nt_expression_ (var_sourceExpression_3075, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName_3005.readProperty_location (), var_variableName_3005, var_sourceExpression_3075  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 80)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 80)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 92)) ;
  GALGAS_lstring var_typeName_3459 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 93)) ;
  GALGAS_lstring var_variableName_3494 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 95)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_3564 ;
  nt_expression_ (var_sourceExpression_3564, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_3459.readProperty_location (), GALGAS_bool (false), var_typeName_3459, var_variableName_3494, var_sourceExpression_3564  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 95)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 95)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
  GALGAS_location var_instructionLocation_1898 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 47)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1980 ;
  nt_expression_ (var_mReceiverExpression_1980, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 49)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_2052 ;
  nt_expression_ (var_mWarningExpression_2052, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_2102 ;
  nt_issue_5F_fixit_ (var_fixitListAST_2102, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation_1898, var_mReceiverExpression_1980, var_mWarningExpression_2052, var_fixitListAST_2102  COMMA_SOURCE_FILE ("instruction-warning.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 49)) ;
  nt_expression_parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 49)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 206)) ;
  GALGAS_location var_instructionLocation_7268 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 207)) ;
  GALGAS_semanticExpressionAST var_keyExpression_7344 ;
  nt_expression_ (var_keyExpression_7344, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_7371 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 209)) ;
  GALGAS_lstring var_withPrefix_7416 ;
  switch (select_galgas_34_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
    var_withPrefix_7416 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 212))  COMMA_SOURCE_FILE ("instruction-with.galgas", 212)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 214)) ;
    var_withPrefix_7416 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 215)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 217)) ;
  nt_with_5F_instruction_5F_core_ (var_instructionLocation_7268, var_keyExpression_7344, var_endOfKeyExpression_7371, var_withPrefix_7416, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 219)) ;
  switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_7731 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 222)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_7731.readProperty_string ().objectCompare (GALGAS_string ("with"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%with")) ;
        inCompiler->emitSemanticError (var_terminator_7731.readProperty_location (), GALGAS_string ("the terminator attribute should be '%with'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 224)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 206)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 214)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 215)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 217)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 219)) ;
  switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 222)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 206)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 214)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 215)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 217)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 219)) ;
  switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 222)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i54_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_8320 ;
  nt_expression_ (var_receiverExpression_8320, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_8352 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 239)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_8420 ;
  switch (select_galgas_34_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_8420 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 242)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 244)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 245)) ;
    var_searchMethodNameForErrorSignaling_8420 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 246)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 248)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_8681 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_8681, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_8709 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 250)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_8786 ;
  switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_8786 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 253)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 255)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_8420.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_8420.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 257)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_8786, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_8320, var_endOfReceiverExpression_8352, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_8420, var_mDoBranchInstructions_8681, var_endOfDoInstructions_8709, var_mElseBranchInstructions_8786, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 272))  COMMA_SOURCE_FILE ("instruction-with.galgas", 261)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i54_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 244)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 245)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 246)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 248)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 255)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i54_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 244)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 245)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 246)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 248)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 255)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i55_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_9847 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_9847.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_9847.readProperty_location (), GALGAS_string ("an empty selector '!?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 287)) ;
    }
  }
  GALGAS_lstringlist var_structAttributeList_9982 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 289)) ;
  GALGAS_bool var_targetIsPrefixedBySelf_10037 ;
  GALGAS_lstring var_targetObjectName_10071 ;
  switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
    var_targetIsPrefixedBySelf_10037 = GALGAS_bool (false) ;
    var_targetObjectName_10071 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 294)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 297)) ;
        GALGAS_lstring var_mStructFieldName_10236 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
        var_structAttributeList_9982.addAssign_operation (var_mStructFieldName_10236  COMMA_SOURCE_FILE ("instruction-with.galgas", 299)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
    var_targetIsPrefixedBySelf_10037 = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 303)) ;
    switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
    case 1: {
      var_targetObjectName_10071 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 305)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 307)) ;
      var_targetObjectName_10071 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 311)) ;
          GALGAS_lstring var_mStructFieldName_10549 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 312)) ;
          var_structAttributeList_9982.addAssign_operation (var_mStructFieldName_10549  COMMA_SOURCE_FILE ("instruction-with.galgas", 313)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfReceiverExpression_10662 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 317)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_10730 ;
  switch (select_galgas_34_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_10730 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 320)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 322)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 323)) ;
    var_searchMethodNameForErrorSignaling_10730 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 324)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 326)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_10991 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_10991, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_11021 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 328)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_11098 ;
  switch (select_galgas_34_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_11098 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 331)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 333)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_10730.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_10730.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 335)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_11098, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_11434 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 339)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_targetObjectName_10071, var_targetIsPrefixedBySelf_10037, var_structAttributeList_9982, var_endOfReceiverExpression_10662, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_10730, var_mDoBranchInstructions_10991, var_endOf_5F_do_5F_instructions_11021, var_mElseBranchInstructions_11098, var_endOf_5F_else_5F_instructions_11434  COMMA_SOURCE_FILE ("instruction-with.galgas", 340)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i55_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 294)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 297)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 303)) ;
    switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 307)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 311)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 312)) ;
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
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 322)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 323)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 324)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 326)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 333)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i55_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 294)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 297)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 303)) ;
    switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 307)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 311)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 312)) ;
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
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 322)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 323)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 324)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 326)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 333)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 234)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 234)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 234)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  GALGAS_bool var_isPublic_9594 ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    var_isPublic_9594 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_public COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 259)) ;
    var_isPublic_9594 = GALGAS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 262)) ;
    var_isPublic_9594 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isConstant_9750 ;
  switch (select_galgas_34_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 267)) ;
    var_isConstant_9750 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 270)) ;
    var_isConstant_9750 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_attributeTypeName_9884 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 273)) ;
  GALGAS_lstring var_attributeName_9920 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 274)) ;
  GALGAS_lstringlist var_featureList_9940 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 275)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName_10024 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 278)) ;
      var_featureList_9940.addAssign_operation (var_featureName_10024  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 279)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_isConstant_9750, var_attributeTypeName_9884, var_attributeName_9920, var_isPublic_9594, var_featureList_9940  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 281)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_public COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 259)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 262)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 267)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 270)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 273)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 274)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 278)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_public COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 259)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 262)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 267)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 270)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 273)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 274)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 278)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
  GALGAS_lstring var_mFilewrapperName_11580 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 320)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 321)) ;
  GALGAS_lstring var_mFilewrapperPath_11666 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 322)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_11733 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_11733, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_11804 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_11804, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_11861 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_11861, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 329)), var_mFilewrapperName_11580, var_mFilewrapperPath_11666, var_filewrapperTextFileExtensionList_11733, var_filewrapperBinaryFileExtensionList_11804, var_filewrapperTemplateList_11861  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 326))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 326)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 320)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 321)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 322)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 320)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 321)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 322)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  GALGAS_lstring var_mFilewrapperName_12465 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
  GALGAS_lstring var_mFilewrapperPath_12551 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 344)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_12618 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_12618, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_12689 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_12689, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_12746 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_12746, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 351)), var_mFilewrapperName_12465, var_mFilewrapperPath_12551, var_filewrapperTextFileExtensionList_12618, var_filewrapperBinaryFileExtensionList_12689, var_filewrapperTemplateList_12746  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 348))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 348)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 344)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 344)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 363)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 364)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_13423 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 368)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_13423  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 369)) ;
      switch (select_galgas_34_DeclarationsSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 371)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 374)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 364)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 368)) ;
      switch (select_galgas_34_DeclarationsSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 371)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 374)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 364)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 368)) ;
      switch (select_galgas_34_DeclarationsSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 371)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 374)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 380)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 381)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_13883 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 385)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_13883  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 386)) ;
      switch (select_galgas_34_DeclarationsSyntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 388)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 391)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 381)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 385)) ;
      switch (select_galgas_34_DeclarationsSyntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 388)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 391)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 381)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 385)) ;
      switch (select_galgas_34_DeclarationsSyntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 388)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 391)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_ (GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 397)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 398)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 401)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_14344 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_14391 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_14479 = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 404)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_14535 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 407)) ;
          GALGAS_lstring var_typeName_14574 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 408)) ;
          GALGAS_bool var_isUnused_14601 ;
          switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
          case 1: {
            var_isUnused_14601 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 413)) ;
            var_isUnused_14601 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_14750 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 416)) ;
          var_filewrapperTemplateFormalInputParameters_14479.addAssign_operation (var_selector_14535, var_typeName_14574, var_argumentName_14750, var_isUnused_14601  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 417)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_14344, var_mFilewrapperTemplatePath_14391, var_filewrapperTemplateFormalInputParameters_14479  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 419)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 424)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 397)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 401)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 407)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 408)) ;
          switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 413)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 416)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 424)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 397)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 401)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 407)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 408)) ;
          switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 413)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 416)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 424)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  GALGAS_lstring var_arrayTypeName_1942 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 50)) ;
  GALGAS_lstring var_elementListTypeName_2025 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 52)) ;
  GALGAS_lbigint var_dimension_2100 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("type-array.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName_1942, var_elementListTypeName_2025, var_dimension_2100  COMMA_SOURCE_FILE ("type-array.galgas", 55))  COMMA_SOURCE_FILE ("type-array.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("type-array.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("type-array.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  GALGAS_lstring var_boolsetTypeName_1862 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 50)) ;
  GALGAS_lstringlist var_slotList_1926 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_slotName_1975 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 53)) ;
    var_slotList_1926.addAssign_operation (var_slotName_1975  COMMA_SOURCE_FILE ("type-boolset.galgas", 54)) ;
    switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 58)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool (false), var_boolsetTypeName_1862, var_slotList_1926  COMMA_SOURCE_FILE ("type-boolset.galgas", 59))  COMMA_SOURCE_FILE ("type-boolset.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 53)) ;
    switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 53)) ;
    switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  GALGAS_bool var_isAbstract_3843 ;
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    var_isAbstract_3843 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
    var_isAbstract_3843 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 119)) ;
  GALGAS_lstring var_className_3983 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  GALGAS_lstring var_superClassName_4040 ;
  switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
    var_superClassName_4040 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 125)) ;
    var_superClassName_4040 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 126)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList_4231 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_classFeatureName_4320 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 131)) ;
      var_classFeatureList_4231.addAssign_operation (var_classFeatureName_4320  COMMA_SOURCE_FILE ("type-class.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 134)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_4454 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 136)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_4454, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 143)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_isAbstract_3843, GALGAS_bool (true), var_className_3983, var_superClassName_4040, var_classFeatureList_4231, var_propertyList_4454  COMMA_SOURCE_FILE ("type-class.galgas", 144))  COMMA_SOURCE_FILE ("type-class.galgas", 144)) ;
  GALGAS_lstring temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_superClassName_4040.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = var_superClassName_4040 ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_lstring::constructor_new (var_superClassName_4040.readProperty_string ().add_operation (GALGAS_string ("-weak"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 160)), var_superClassName_4040.readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 160)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool (false), var_className_3983, GALGAS_lstring::constructor_new (var_className_3983.readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 157)), var_className_3983.readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 157)), temp_2, var_classFeatureList_4231, var_propertyList_4454  COMMA_SOURCE_FILE ("type-class.galgas", 154))  COMMA_SOURCE_FILE ("type-class.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 119)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 125)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 126)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 131)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 134)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 143)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 119)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 125)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 126)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 131)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 134)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 76)) ;
  GALGAS_lstring var_mEnumTypeName_2681 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 78)) ;
  GALGAS_enumConstantList var_mConstantList_2753 = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
    GALGAS_lstring var_constantName_2819 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_2867 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 83)) ;
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_2964 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 88)) ;
        GALGAS_lstring var_associatedValueName_3012 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
        var_associatedValueTypeList_2867.addAssign_operation (var_associatedValueType_2964, var_associatedValueName_3012  COMMA_SOURCE_FILE ("type-enum.galgas", 90)) ;
        switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_2753.addAssign_operation (var_constantName_2819, var_associatedValueTypeList_2867  COMMA_SOURCE_FILE ("type-enum.galgas", 95)) ;
    switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_defaultConstantName_3256 ;
  switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
    var_defaultConstantName_3256 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-enum.galgas", 100)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 102)) ;
    var_defaultConstantName_3256 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 105)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName_2681, var_mConstantList_2753, var_defaultConstantName_3256  COMMA_SOURCE_FILE ("type-enum.galgas", 106))  COMMA_SOURCE_FILE ("type-enum.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 76)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 88)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
        switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 102)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 105)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 76)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 88)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
        switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 102)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i11_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 187)) ;
  GALGAS_lstring var_externTypeName_7156 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 188)) ;
  GALGAS_string var_cppPredeclarationCode_7249 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_7249, inCompiler) ;
  GALGAS_string var_cppClassCode_7305 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_7305, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_7374 = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 192)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_7431 = GALGAS_externTypeGetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 193)) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_7487 = GALGAS_externTypeSetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 194)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_7543 = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 195)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (var_externTypeConstructorList_7374, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (var_externTypeGetterList_7431, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (var_externTypeSetterList_7487, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (var_externTypeMethodList_7543, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 206)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName_7156, var_cppPredeclarationCode_7249, var_cppClassCode_7305, var_externTypeConstructorList_7374, var_externTypeGetterList_7431, var_externTypeSetterList_7487, var_externTypeMethodList_7543  COMMA_SOURCE_FILE ("type-extern.galgas", 207))  COMMA_SOURCE_FILE ("type-extern.galgas", 207)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 187)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 188)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_20 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 206)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 187)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 188)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_20 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 206)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 222)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_8446 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 226)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_8446.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 227)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 222)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 226)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 229)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 222)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 226)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 235)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_8842 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 239)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_8842.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 240)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 235)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 239)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 242)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 235)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 239)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i14_ (GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 248)) ;
  GALGAS_lstring var_constructorName_9202 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 249)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_9260 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 250)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_9310 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 253)) ;
      GALGAS_lstring var_argumentTypeName_9355 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 254)) ;
      GALGAS_lstring var_argumentName_9401 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 255)) ;
      var_argumentTypeList_9260.addAssign_operation (var_selector_9310, var_argumentTypeName_9355, var_argumentName_9401  COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 258)) ;
  GALGAS_lstring var_resultTypeName_9527 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_constructorName_9202, var_resultTypeName_9527, var_argumentTypeList_9260  COMMA_SOURCE_FILE ("type-extern.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 249)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 253)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 254)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 255)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 249)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 253)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 254)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 255)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i15_ (GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 266)) ;
  GALGAS_lstring var_getterName_9871 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 267)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_9929 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 268)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_9979 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 271)) ;
      GALGAS_lstring var_argumentTypeName_10024 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
      GALGAS_lstring var_argumentName_10070 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
      var_argumentTypeList_9929.addAssign_operation (var_selector_9979, var_argumentTypeName_10024, var_argumentName_10070  COMMA_SOURCE_FILE ("type-extern.galgas", 274)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 276)) ;
  GALGAS_lstring var_resultTypeName_10196 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 277)) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_9871, var_resultTypeName_10196, var_argumentTypeList_9929  COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 271)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 276)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 277)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 271)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 276)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 277)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i16_ (GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 284)) ;
  GALGAS_lstring var_setterName_10530 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 285)) ;
  GALGAS_formalParameterListAST var_formalParameterList_10607 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_10607, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_10530, var_formalParameterList_10607  COMMA_SOURCE_FILE ("type-extern.galgas", 287)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 285)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 285)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i17_ (GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 293)) ;
  GALGAS_lstring var_methodName_10928 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 294)) ;
  GALGAS_formalParameterListAST var_formalParameterList_11005 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_11005, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_10928, var_formalParameterList_11005, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 296))  COMMA_SOURCE_FILE ("type-extern.galgas", 296)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 294)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 294)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  GALGAS_lstring var_graphTypeName_2413 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  GALGAS_lstring var_associatedListTypeName_2495 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 69)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_2543 = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      GALGAS_lstring var_insertName_2653 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
      GALGAS_lstring var_errorMessage_2727 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 77)) ;
      var_graphInsertModifierList_2543.addAssign_operation (var_insertName_2653, var_errorMessage_2727  COMMA_SOURCE_FILE ("type-graph.galgas", 78)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName_2413, var_associatedListTypeName_2495, var_graphInsertModifierList_2543  COMMA_SOURCE_FILE ("type-graph.galgas", 81))  COMMA_SOURCE_FILE ("type-graph.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  GALGAS_lstring var_listTypeName_1926 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2037 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_ (var_propertyList_2037, inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 58)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_listTypeName_1926, var_propertyList_2037  COMMA_SOURCE_FILE ("type-list.galgas", 63))  COMMA_SOURCE_FILE ("type-list.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_parse (inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 58)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_indexing (inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 58)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 42)) ;
  GALGAS_lstring var_mListmapTypeName_1805 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  GALGAS_lstring var_mAssociatedListTypeName_1890 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName_1805, var_mAssociatedListTypeName_1890  COMMA_SOURCE_FILE ("type-listmap.galgas", 47))  COMMA_SOURCE_FILE ("type-listmap.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 42)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 42)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 70)) ;
  GALGAS_lstring var_mDictTypeName_2540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 74)) ;
  GALGAS_lstring var_keyTypeName_2655 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 75)) ;
  GALGAS_lstringlist var_mapAttributeList_2715 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 77)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_2775 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 80)) ;
      var_mapAttributeList_2715.addAssign_operation (var_attribute_2775  COMMA_SOURCE_FILE ("type-dict.galgas", 81)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 84)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2871 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 85)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2871, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool (false), var_mDictTypeName_2540, var_keyTypeName_2655, var_mapAttributeList_2715, var_propertyList_2871  COMMA_SOURCE_FILE ("type-dict.galgas", 93))  COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 70)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 80)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 70)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 80)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 185)) ;
  GALGAS_lstring var_mMapTypeName_6554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  GALGAS_lstringlist var_mapAttributeList_6666 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 189)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_6726 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 192)) ;
      var_mapAttributeList_6666.addAssign_operation (var_attribute_6726  COMMA_SOURCE_FILE ("type-map.galgas", 193)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 196)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_6822 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 197)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_6882 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 198)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_6958 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 199)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_7013 = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 200)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_7095 = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 201)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_6822, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_6882, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_6958, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_7013, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_7095, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 214)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 216)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_6554, var_mapAttributeList_6666, var_propertyList_6822, var_mInsertMethodList_6882, var_mSearchMethodList_6958, var_mRemoveMethodList_7013, var_insertOrReplaceDeclarationListAST_7095  COMMA_SOURCE_FILE ("type-map.galgas", 217))  COMMA_SOURCE_FILE ("type-map.galgas", 217)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 185)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 192)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 196)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 214)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 216)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 185)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 192)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 196)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 214)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 216)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i23_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 232)) ;
  GALGAS_lstring var_methodName_8018 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 233)) ;
  GALGAS_bool var_locationAttribute_8050 ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
    var_locationAttribute_8050 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_attribute_8134 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_attribute_8134.readProperty_string ().objectCompare (GALGAS_string ("location"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_locationAttribute_8050 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%location")) ;
      inCompiler->emitSemanticError (var_attribute_8134.readProperty_location (), GALGAS_string ("only the %location is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-map.galgas", 242)) ;
      var_locationAttribute_8050.drop () ; // Release error dropped variable
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 245)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 246)) ;
  GALGAS_lstring var_errorMessage_8422 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_8018, var_errorMessage_8422, var_locationAttribute_8050  COMMA_SOURCE_FILE ("type-map.galgas", 248)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 232)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 233)) ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 245)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 246)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 232)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 233)) ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 245)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 246)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i24_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 254)) ;
  GALGAS_lstring var_mMethodName_8763 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 256)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 257)) ;
  GALGAS_lstring var_mErrorMessage_8832 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_8763, var_mErrorMessage_8832  COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 254)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 256)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 257)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 254)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 256)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 257)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 265)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 267)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 268))  COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 265)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 267)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 265)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 267)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 274)) ;
  GALGAS_lstring var_mMethodName_9491 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 275)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 284)) ;
  GALGAS_lstring var_mErrorMessage_9719 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 285)) ;
  GALGAS_lstring var_mShadowErrorMessage_9756 ;
  switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_9756 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 288))  COMMA_SOURCE_FILE ("type-map.galgas", 288)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 290)) ;
    var_mShadowErrorMessage_9756 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 291)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_9491, var_mErrorMessage_9719, var_mShadowErrorMessage_9756  COMMA_SOURCE_FILE ("type-map.galgas", 293)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 274)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 275)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 285)) ;
  switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 290)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 291)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 274)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 275)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 285)) ;
  switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 290)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 291)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i27_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  GALGAS_lstring var_sortedListTypeName_2937 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 86)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_3055 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_attributeList_3055, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 92)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_3231 = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 96)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_3231, inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 102)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName_2937, var_attributeList_3055, var_sortDescriptorList_3231  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 103))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 92)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 92)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_3807 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 114)) ;
  GALGAS_bool var_mAscending_3832 ;
  switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 117)) ;
    var_mAscending_3832 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 120)) ;
    var_mAscending_3832 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_3807, var_mAscending_3832  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 114)) ;
  switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 114)) ;
  switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  GALGAS_lstring var_structTypeName_1992 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2076 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2076, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 60)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName_1992, var_propertyList_2076, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-struct.galgas", 61))  COMMA_SOURCE_FILE ("type-struct.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i30_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 54)) ;
  GALGAS_lstring var_className_2315 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
  GALGAS_lstring var_mGetterName_2403 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 57)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2540 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_2540, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 59)) ;
  GALGAS_lstring var_mReturnedTypeName_2593 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 60)) ;
  switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_2640 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 63)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2640.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_2315, var_mGetterName_2403, var_mFormalInputParameterList_2540, var_mReturnedTypeName_2593  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 66))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 57)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 60)) ;
  switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 57)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 60)) ;
  switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i31_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 45)) ;
  GALGAS_lstring var_className_2029 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 47)) ;
  GALGAS_lstring var_mMethodName_2126 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2246 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2246, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_2029, var_mMethodName_2126, var_formalParameterList_2246  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 65)) ;
  GALGAS_lstring var_className_2832 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 67)) ;
  GALGAS_lstring var_mMethodName_2921 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 68)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_3021 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_3021, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  GALGAS_lstring var_mReturnedTypeName_3074 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  GALGAS_lstring var_resultVariableName_3110 ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    var_resultVariableName_3110 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 74)) ;
  } break ;
  case 2: {
    var_resultVariableName_3110 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 76))  COMMA_SOURCE_FILE ("extension-getter.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3322 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_3322, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3361 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 80)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2832, var_mMethodName_2921, var_mFormalInputParameterList_3021, var_mReturnedTypeName_3074, var_resultVariableName_3110, var_routineInstructionList_3322, var_endOfInstructionList_3361  COMMA_SOURCE_FILE ("extension-getter.galgas", 82))  COMMA_SOURCE_FILE ("extension-getter.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 65)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 68)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 74)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 65)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 68)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 74)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  GALGAS_lstring var_className_2445 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 56)) ;
  GALGAS_lstring var_mMethodName_2534 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 57)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2646 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2646, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 59)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2742 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2742, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_2770 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2445, var_mMethodName_2534, var_formalParameterList_2646, var_routineInstructionList_2742, var_endOfMethodLocation_2770  COMMA_SOURCE_FILE ("extension-method.galgas", 63))  COMMA_SOURCE_FILE ("extension-method.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 59)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 62)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 59)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i34_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 54)) ;
  GALGAS_lstring var_className_2478 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 56)) ;
  GALGAS_lstring var_setterName_2566 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 57)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2678 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2678, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 59)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2774 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2774, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_2812 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2478, var_setterName_2566, var_formalParameterList_2678, var_routineInstructionList_2774, var_endOfSetterLocation_2812  COMMA_SOURCE_FILE ("extension-setter.galgas", 63))  COMMA_SOURCE_FILE ("extension-setter.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 59)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 62)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 59)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 56)) ;
  GALGAS_lstring var_className_2381 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58)) ;
  GALGAS_lstring var_mGetterName_2477 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 59)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2622 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_2622, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 61)) ;
  GALGAS_lstring var_mReturnedTypeName_2675 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 62)) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_2715 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 64)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2715.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 65)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_2381, var_mGetterName_2477, var_mFormalInputParameterList_2622, var_mReturnedTypeName_2675  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 68))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 59)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 62)) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 64)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 59)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 62)) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 64)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i36_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 47)) ;
  GALGAS_lstring var_className_2099 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 49)) ;
  GALGAS_lstring var_mMethodName_2204 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 50)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2332 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2332, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_2099, var_mMethodName_2204, var_formalParameterList_2332  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 52))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 49)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 50)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 49)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 50)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 67)) ;
  GALGAS_lstring var_className_2946 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 69)) ;
  GALGAS_lstring var_mMethodName_3043 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_3150 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_3150, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 72)) ;
  GALGAS_lstring var_mReturnedTypeName_3203 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 73)) ;
  GALGAS_lstring var_resultVariableName_3239 ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    var_resultVariableName_3239 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)) ;
  } break ;
  case 2: {
    var_resultVariableName_3239 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 78))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 80)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3451 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_3451, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3490 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 83)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2946, var_mMethodName_3043, var_formalInputParameterList_3150, var_mReturnedTypeName_3203, var_resultVariableName_3239, var_routineInstructionList_3451, var_endOfInstructionList_3490  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 84))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 69)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 73)) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 80)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 69)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 73)) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 80)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 55)) ;
  GALGAS_lstring var_className_2560 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  GALGAS_lstring var_mMethodName_2667 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 58)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2787 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2787, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 60)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2883 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2883, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_2921 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 63)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2560, var_mMethodName_2667, var_formalParameterList_2787, var_routineInstructionList_2883, var_endOfMethodLocation_2921  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 64))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 64)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 58)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 60)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 63)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 58)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 60)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 48)) ;
  GALGAS_lstring var_typeName_2260 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  GALGAS_lstring var_variableName_2295 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 50)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_2260.readProperty_location (), var_typeName_2260, var_variableName_2295  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 50)) ;
}

