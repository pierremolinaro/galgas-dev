#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 55)) ;
  GALGAS_lstring var_optionComponentName_2573 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  GALGAS_commandLineOptionListAST var_options_2635 = GALGAS_commandLineOptionListAST::class_func_emptyList (SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_2635, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (false), var_optionComponentName_2573, var_options_2635, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GALGAS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_mOptionTypeName_3094 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 74)) ;
  GALGAS_lstring var_mOptionInternalName_3141 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 76)) ;
  GALGAS_lchar var_mOptionInvocationLetter_3194 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 78)) ;
  GALGAS_lstring var_mOptionInvocationString_3255 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
  GALGAS_lstring var_mOptionComment_3317 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  GALGAS_lstring var_defaultValue_3340 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 82)), inCompiler COMMA_HERE) ;
  GALGAS_optionDefaultValueEnumAST var_optionDefaultValueKind_3421 ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_3421 = GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 85)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 87)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_3340 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 89)) ;
      var_optionDefaultValueKind_3421 = GALGAS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 90)) ;
    } break ;
    case 2: {
      GALGAS_lbigint var_v_3714 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 92)) ;
      var_defaultValue_3340 = GALGAS_lstring::init_21__21_ (var_v_3714.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 93)), var_v_3714.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_3421 = GALGAS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 94)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssign_operation (var_mOptionTypeName_3094, var_mOptionInternalName_3141, var_mOptionInvocationLetter_3194, var_mOptionInvocationString_3255, var_mOptionComment_3317, var_defaultValue_3340, var_optionDefaultValueKind_3421  COMMA_SOURCE_FILE ("optionCompilation.galgas", 97)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 74)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 87)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 89)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 92)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 74)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 87)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 89)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 92)) ;
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

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 121)) ;
  GALGAS_lstring var_mGUIName_4624 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  GALGAS_lstringlist var_importedOptionList_4662 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 124)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes_4722 = GALGAS_guiSimpleAttributeListAST::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 125)) ;
  GALGAS_withLexiqueListAST var_withLexiqueList_4779 = GALGAS_withLexiqueListAST::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 126)) ;
  GALGAS_projectIndexingDescriptorList var_projectExtensionList_4840 = GALGAS_projectIndexingDescriptorList::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)) ;
      GALGAS_lstring var_fileExtension_4926 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 133)) ;
      GALGAS_lstring var_indexingPathSuffix_4990 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 134)) ;
      var_projectExtensionList_4840.addAssign_operation (var_fileExtension_4926, var_indexingPathSuffix_4990  COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_4722, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_4662, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_4779, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 144)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssign_operation (var_mGUIName_4624, var_importedOptionList_4662, var_simpleGlobalAttributes_4722, var_withLexiqueList_4779, var_projectExtensionList_4840  COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 134)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 144)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 134)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 144)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GALGAS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 157)) ;
  GALGAS_lstring var_lexiqueReference_5691 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
  GALGAS_guiLabelListAST var_labels_5733 = GALGAS_guiLabelListAST::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 159)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleAttributes_5781 = GALGAS_guiSimpleAttributeListAST::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 160)) ;
  GALGAS_guiCompoundAttributeListAST var_compoundAttributes_5841 = GALGAS_guiCompoundAttributeListAST::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 161)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 162)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 165)) ;
      GALGAS_uint var_displayStyle_5925 ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_5925 = GALGAS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 170)) ;
        var_displayStyle_5925 = GALGAS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_terminalLabelListAST var_terminalList_6064 = GALGAS_terminalLabelListAST::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 173)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_terminal_6134 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 175)) ;
        GALGAS_uint var_displayFlags_6161 ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_6161 = GALGAS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
          var_displayFlags_6161 = GALGAS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 183)) ;
          GALGAS_lbigint var_leadingStrip_6352 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_6352.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_6352.readProperty_location (), GALGAS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 188)) ;
          GALGAS_lbigint var_endingStrip_6527 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 189)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_6527.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_6527.readProperty_location (), GALGAS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
            }
          }
          var_displayFlags_6161 = var_leadingStrip_6352.readProperty_bigint ().left_shift_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)).operator_or (var_endingStrip_6527.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_6064.addAssign_operation (var_terminal_6134, var_displayFlags_6161  COMMA_SOURCE_FILE ("guiCompilation.galgas", 196)) ;
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 198)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_5733.addAssign_operation (var_displayStyle_5925, var_terminalList_6064, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 200))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_key_6930 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 202)) ;
      GALGAS_lstring var_name_6965 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
      GALGAS_lstring var_value_6990 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 205)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GALGAS_lstring var_v_7075 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 207)) ;
        var_value_6990 = GALGAS_lstring::init_21__21_ (var_value_6990.readProperty_string ().add_operation (var_v_7075.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)), var_v_7075.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_5841.addAssign_operation (var_key_6930, var_name_6965, var_value_6990  COMMA_SOURCE_FILE ("guiCompilation.galgas", 211)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_name_7252 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 213)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 214)) ;
      GALGAS_lstring var_value_7298 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 215)) ;
      var_simpleAttributes_5781.addAssign_operation (var_name_7252, var_value_7298  COMMA_SOURCE_FILE ("guiCompilation.galgas", 216)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 218)) ;
  ioArgument_ioWithLexiqueList.addAssign_operation (var_lexiqueReference_5691, var_labels_5733, var_simpleAttributes_5781, var_compoundAttributes_5841  COMMA_SOURCE_FILE ("guiCompilation.galgas", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 162)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 165)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 170)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 175)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 183)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 188)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 189)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 198)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 202)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 207)) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 213)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 215)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 218)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 162)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 165)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 170)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 175)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 183)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 188)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 189)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 198)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 202)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 207)) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 213)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 215)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 218)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GALGAS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 225)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 226)) ;
  GALGAS_lstring var_optionReference_7684 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)) ;
  ioArgument_ioImportedOptionList.addAssign_operation (var_optionReference_7684  COMMA_SOURCE_FILE ("guiCompilation.galgas", 228)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 225)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 225)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GALGAS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_mKey_7961 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 235)) ;
  GALGAS_lstring var_mValue_7982 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 236)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_value_8055 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 238)) ;
    var_mValue_7982 = GALGAS_lstring::init_21__21_ (var_mValue_7982.readProperty_string ().add_operation (var_value_8055.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 239)), var_value_8055.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssign_operation (var_mKey_7961, var_mValue_7982  COMMA_SOURCE_FILE ("guiCompilation.galgas", 242)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 235)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 238)) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 235)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 238)) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 46)) ;
  GALGAS_lstring var_syntaxComponentName_2554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 47)) ;
  GALGAS_lstring var_importedLexiqueReference_2615 ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_2615 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 53)) ;
    var_importedLexiqueReference_2615 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 54)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasTranslateFeature_2818 ;
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2818 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 62)) ;
    var_hasTranslateFeature_2818 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 65)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_2994 = GALGAS_nonterminalDeclarationListAST::class_func_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 67)) ;
  GALGAS_syntaxRuleListAST var_ruleList_3066 = GALGAS_syntaxRuleListAST::class_func_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_2994, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_3066, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 76)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssign_operation (var_syntaxComponentName_2554, var_importedLexiqueReference_2615, var_nonterminalDeclarationList_2994, var_ruleList_3066, var_hasTranslateFeature_2818  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 77)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 47)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 54)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 65)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 47)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 54)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 65)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 91)) ;
  GALGAS_lstring var_syntaxComponentName_3849 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 93)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3913 = GALGAS_nonterminalDeclarationListAST::class_func_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 95)) ;
  GALGAS_syntaxRuleListAST var_ruleList_3985 = GALGAS_syntaxRuleListAST::class_func_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_3913, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_3985, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 104)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxExtensions.addAssign_operation (var_syntaxComponentName_3849.readProperty_string (), var_syntaxComponentName_3849, var_nonterminalDeclarationList_3913, var_ruleList_3985  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 93)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 104)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 93)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GALGAS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 118)) ;
  GALGAS_lstring var_mNonterminalName_4841 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 119)) ;
  GALGAS_nonTerminalLabelListAST var_labels_4915 = GALGAS_nonTerminalLabelListAST::class_func_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 120)) ;
  GALGAS_formalParameterListAST var_firstBranchFormalParameters_5007 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_5007, inCompiler) ;
  var_labels_4915.addAssign_operation (GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 122)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_5007, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 122))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 125)) ;
      GALGAS_lstring var_labelName_5173 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 126)) ;
      GALGAS_formalParameterListAST var_formalParameters_5264 ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameters_5264, inCompiler) ;
      var_labels_4915.addAssign_operation (var_labelName_5173, var_formalParameters_5264, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssign_operation (var_mNonterminalName_4841, var_labels_4915  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 130)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 118)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 119)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 125)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 126)) ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 118)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 119)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 125)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 126)) ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                GALGAS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_formalParameterListAST var_mFormalParameters_5905 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mFormalParameters_5905, inCompiler) ;
  GALGAS_location var_endOfArguments_5931 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 142)) ;
  GALGAS_syntaxInstructionList var_mSyntaxInstructionList_6051 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_6051, inCompiler) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameters_5905, var_endOfArguments_5931, var_mSyntaxInstructionList_6051, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 149))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 150)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 142)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 150)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 142)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 150)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GALGAS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 156)) ;
  GALGAS_lstring var_mNonterminalName_6476 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 157)) ;
  GALGAS_lstring var_labelName_6525 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 158)), inCompiler COMMA_HERE) ;
  GALGAS_syntaxRuleLabelListAST var_mLabelList_6576 = GALGAS_syntaxRuleLabelListAST::class_func_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 159)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_6525, var_mLabelList_6576, inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 163)) ;
      var_labelName_6525 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 164)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssign_operation (var_mNonterminalName_6476, var_mLabelList_6576  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 166)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 156)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 157)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 163)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 164)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 156)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 157)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 163)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 164)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                 GALGAS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GALGAS_syntaxInstructionList::class_func_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 177)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        GALGAS_semanticInstructionAST var_instruction_7406 ;
        nt_semantic_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7406, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_7406  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 183)) ;
      } break ;
      case 2: {
        GALGAS_syntaxInstructionAST var_instruction_7538 ;
        nt_syntax_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7538, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_7538  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 186)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 190)) ;
        } break ;
        case 2: {
          GALGAS_string var_separator_7679 = GALGAS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 192)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_separator_7679.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 193)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 193)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GALGAS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 194)), GALGAS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 194)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        nt_semantic_5F_instruction_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 2: {
        nt_syntax_5F_instruction_5F_ggs_33__parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 190)) ;
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
  inCompiler->resetTemplateString () ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 190)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mLabelName_1479 ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_mLabelName_1479 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 28)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 30)) ;
    var_mLabelName_1479 = GALGAS_lstring::init_21__21_ (GALGAS_string ("parse"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 31)), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 33)) ;
    var_mLabelName_1479 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mNonterminalName_1749 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 36)) ;
  GALGAS_actualParameterListAST var_mActualParameterList_1868 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mActualParameterList_1868, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_2009 ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_2009 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 43)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_2009, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_nonterminalCallInstruction::init_21__21__21__21__21_ (var_mNonterminalName_1749.readProperty_location (), var_mNonterminalName_1749, var_mLabelName_1479, var_mActualParameterList_1868, var_grammarInstructionSyntaxDirectedTranslationResult_2009, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 30)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 33)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 36)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 43)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 30)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 33)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 36)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 43)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 39)) ;
  GALGAS_location var_mRepeatInstructionLocation_2088 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 40)) ;
  GALGAS_syntaxInstructionList var_mRepeatedInstructionList_2212 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_2212, inCompiler) ;
  GALGAS_location var_endOf_5F_repeated_5F_instructions_2245 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 42)) ;
  GALGAS_listOfSyntaxInstructionList var_mRepeatBranchList_2298 = GALGAS_listOfSyntaxInstructionList::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 45)) ;
    GALGAS_syntaxInstructionList var_mInstructionList_2458 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_2458, inCompiler) ;
    var_mRepeatBranchList_2298.addAssign_operation (var_mInstructionList_2458, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 47))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 47)) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 50)) ;
  GALGAS_location var_endOf_5F_repeat_5F_instruction_2573 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 51)) ;
  outArgument_outInstruction = GALGAS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_2088, var_mRepeatedInstructionList_2212, var_endOf_5F_repeated_5F_instructions_2245, var_mRepeatBranchList_2298, var_endOf_5F_repeat_5F_instruction_2573, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 39)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 39)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 37)) ;
  GALGAS_location var_mSelectInstructionLocation_1964 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 38)) ;
  GALGAS_listOfSyntaxInstructionList var_mSelectBranchList_2016 = GALGAS_listOfSyntaxInstructionList::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 39)) ;
  GALGAS_syntaxInstructionList var_il_2149 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2149, inCompiler) ;
  var_mSelectBranchList_2016.addAssign_operation (var_il_2149, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 41))  COMMA_SOURCE_FILE ("instruction-select.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 43)) ;
    GALGAS_syntaxInstructionList var_instructionList_2301 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2301, inCompiler) ;
    var_mSelectBranchList_2016.addAssign_operation (var_instructionList_2301, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 45))  COMMA_SOURCE_FILE ("instruction-select.galgas", 45)) ;
    if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 48)) ;
  GALGAS_location var_endOf_5F_select_5F_instruction_2413 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 49)) ;
  outArgument_outInstruction = GALGAS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_1964, var_mSelectBranchList_2016, var_endOf_5F_select_5F_instruction_2413, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 37)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 43)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 37)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 43)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_terminalName_1495 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 26)) ;
  GALGAS_actualInputParameterListAST var_actualInputParameterList_1625 ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualInputParameterList_1625, inCompiler) ;
  GALGAS__32_lstringlist var_indexNameList_1691 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_1691, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1825 ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1955 ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1825 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1955 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1825, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1955, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_1495.readProperty_location (), var_terminalName_1495, var_actualInputParameterList_1625, var_indexNameList_1691, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1825, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1955, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 26)) ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 26)) ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GALGAS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GALGAS__32_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 53)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_indexName_3133 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 58)) ;
      GALGAS_lstring var_postfixName_3195 ;
      switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
        var_postfixName_3195 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 61)) ;
      } break ;
      case 2: {
        var_postfixName_3195 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssign_operation (var_indexName_3133, var_postfixName_3195  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 65)) ;
      if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 67)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 58)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 67)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 58)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 67)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 41)) ;
  GALGAS_location var_instructionLocation_2163 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 43)) ;
  GALGAS_semanticExpressionAST var_variantExpression_2278 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_variantExpression_2278, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_2304 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 46)) ;
  GALGAS_semanticExpressionAST var_whileExpression_2423 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whileExpression_2423, inCompiler) ;
  GALGAS_location var_endOfWhileExpression_2447 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 49)) ;
  GALGAS_syntaxInstructionList var_instructionList_2574 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2574, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 51)) ;
  GALGAS_location var_endOfInstructionList_2608 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 52)) ;
  outArgument_outInstruction = GALGAS_parseLoopInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_2163, var_variantExpression_2278, var_endOfVariantExpression_2304, var_whileExpression_2423, var_endOfWhileExpression_2447, var_instructionList_2574, var_endOfInstructionList_2608, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 43)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 46)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 49)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 43)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 46)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 49)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 37)) ;
  GALGAS_location var_instructionLocation_1972 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 39)) ;
  GALGAS_listOfSyntaxInstructionList var_mParseDoBranchList_2026 = GALGAS_listOfSyntaxInstructionList::class_func_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 40)) ;
  GALGAS_syntaxInstructionList var_il_2160 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2160, inCompiler) ;
  var_mParseDoBranchList_2026.addAssign_operation (var_il_2160, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 42))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 44)) ;
    GALGAS_syntaxInstructionList var_instructionList_2317 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2317, inCompiler) ;
    var_mParseDoBranchList_2026.addAssign_operation (var_instructionList_2317, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 46))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 46)) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 49)) ;
  GALGAS_location var_endOfInstruction_2430 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 50)) ;
  outArgument_outInstruction = GALGAS_parseRewindInstruction::init_21__21__21_ (var_instructionLocation_1972, var_mParseDoBranchList_2026, var_endOfInstruction_2430, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 39)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 44)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 39)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 44)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outElseInstructionList, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 49)) ;
  GALGAS_location var_instructionLocation_2549 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 50)) ;
  GALGAS_semanticExpressionAST var_whenExpression_2630 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenExpression_2630, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_2653 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 53)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_2755 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenInstructionList_2755, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_2783 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_2897 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_2897, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_2925 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 58)) ;
  outArgument_outElseInstructionList = GALGAS_syntaxInstructionList::class_func_emptyList (SOURCE_FILE ("instruction-parse-when.galgas", 59)) ;
  outArgument_outElseInstructionList.addAssign_operation (GALGAS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_2549, var_whenExpression_2630, var_endOfWhenExpression_2653, var_whenInstructionList_2755, var_endOfWhenInstructions_2783, var_elseInstructionList_2897, var_endOfElseInstructions_2925, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 49)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 53)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 49)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 53)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 75)) ;
  GALGAS_location var_instructionLocation_3516 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 77)) ;
  GALGAS_semanticExpressionAST var_whenExpression_3631 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenExpression_3631, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_3654 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 80)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_3779 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenInstructionList_3779, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_3807 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 82)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_3944 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_3944, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_3972 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 86)) ;
  outArgument_outInstruction = GALGAS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_3516, var_whenExpression_3631, var_endOfWhenExpression_3654, var_whenInstructionList_3779, var_endOfWhenInstructions_3807, var_elseInstructionList_3944, var_endOfElseInstructions_3972, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 77)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 80)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 86)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 77)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 80)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1481 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 27)) ;
  GALGAS_semanticExpressionAST var_sentExpression_1585 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sentExpression_1585, inCompiler) ;
  outArgument_outInstruction = GALGAS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_1481, var_sentExpression_1585, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 26)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 26)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lbool var_hasIndexing_1920 ;
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_1920 = GALGAS_lbool::init_21__21_ (GALGAS_bool (false), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 37)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_1920 = GALGAS_lbool::init_21__21_ (GALGAS_bool (true), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 39)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 42)) ;
  GALGAS_lstring var_mGrammarName_2123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 43)) ;
  GALGAS_lstring var_mGrammarClass_2201 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  GALGAS_bool var_hasTranslateFeature_2254 ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2254 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 50)) ;
    var_hasTranslateFeature_2254 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 53)) ;
  GALGAS_lstringlist var_syntaxComponents_2430 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 55)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 57)) ;
    GALGAS_lstring var_syntaxComponent_2512 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 58)) ;
    var_syntaxComponents_2430.addAssign_operation (var_syntaxComponent_2512  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 59)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mStartSymbol_2644 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 63)) ;
  GALGAS_nonTerminalLabelListAST var_mLabelList_2688 = GALGAS_nonTerminalLabelListAST::class_func_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 64)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 65)), inCompiler COMMA_HERE), var_mLabelList_2688, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
      GALGAS_lstring var_labelName_2898 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, var_labelName_2898, var_mLabelList_2688, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_lstringlist var_mUnusedNonterminalList_3041 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 73)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 76)) ;
      GALGAS_lstring var_nonterminalSymbolName_3156 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 77)) ;
      var_mUnusedNonterminalList_3041.addAssign_operation (var_nonterminalSymbolName_3156  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 78)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GALGAS_bool (false), var_hasIndexing_1920, var_mGrammarName_2123, var_mGrammarClass_2201, var_syntaxComponents_2430, var_mStartSymbol_2644, var_mLabelList_2688, var_mUnusedNonterminalList_3041, var_hasTranslateFeature_2254, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 42)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 57)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 58)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 63)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 76)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 77)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 42)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 57)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 58)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 63)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 76)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 77)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                         const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                                         GALGAS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_stringset var_argumentNameSet_3907 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 99)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_3961 = GALGAS_formalParameterListAST::class_func_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 100)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      GALGAS_lstring var_argumentName_4067 ;
      nt_label_5F_formal_5F_parameter_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentName_4067, var_mFormalParameterList_3961, inCompiler) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_argumentNameSet_3907.getter_hasKey (var_argumentName_4067.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 104)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_4067.readProperty_location (), GALGAS_string ("there is already an argument named '").add_operation (var_argumentName_4067.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)) ;
        }
      }
      var_argumentNameSet_3907.addAssign_operation (var_argumentName_4067.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 107)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameterList_3961, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      nt_label_5F_formal_5F_parameter_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
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

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                                  GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4740 ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
    var_selector_4740 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 119)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 121)) ;
    var_selector_4740 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 122)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_4899 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_4899, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_4740, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 132)), var_mTypeName_4899, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 130)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 119)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 121)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 119)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 121)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                                  GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_5510 ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
    var_selector_5510 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 145)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 147)) ;
    var_selector_5510 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  GALGAS_lstring var_mTypeName_5679 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_5679, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 154)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 156)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_5510, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 159)), var_mTypeName_5679, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 157)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 145)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 147)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 154)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 156)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 145)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 147)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 154)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 156)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                                  GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_6298 ;
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_selector_6298 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 172)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 174)) ;
    var_selector_6298 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_6459 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_6459, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 180)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 182)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_6298, GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 185)), var_mTypeName_6459, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 183)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 172)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 180)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 182)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 172)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 180)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 182)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                                  GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_7073 ;
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
    var_selector_7073 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 198)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 200)) ;
    var_selector_7073 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 201)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_7232 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_7232, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 204)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_7073, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 207)), var_mTypeName_7232, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 205)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 198)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 200)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 204)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 198)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 200)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 204)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 38)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_2095 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_prologueInstructionList_2095, inCompiler) ;
  GALGAS_location var_endOfPrologue_2127 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 41)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssign_operation (var_prologueInstructionList_2095, var_endOfPrologue_2127  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 38)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 38)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 53)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_2665 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_prologueInstructionList_2665, inCompiler) ;
  GALGAS_location var_endOfPrologue_2697 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 56)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssign_operation (var_prologueInstructionList_2665, var_endOfPrologue_2697  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 53)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 53)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 69)) ;
  GALGAS_lstring var_mSourceFileExtension_3186 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  GALGAS_lstring var_mSourceFileHelp_3250 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 72)) ;
  GALGAS_lstring var_referenceGrammar_3308 ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_3308 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_useGrammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 78)) ;
    var_referenceGrammar_3308 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_selector_3487 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 82)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_selector_3487.readProperty_string ().objectCompare (GALGAS_string ("sourceFilePath"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3487.readProperty_location (), GALGAS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 84)) ;
    }
  }
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_3693 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 88)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::notEqual, var_typeName_3693.readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3693.readProperty_location (), GALGAS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 90)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isUnused_3845 ;
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_3845 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
    var_isUnused_3845 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSourceFileVariableName_3971 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 102)) ;
  GALGAS_semanticInstructionListAST var_mInstructionList_4097 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_4097, inCompiler) ;
  GALGAS_location var_endOfInstructionList_4122 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 105)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssign_operation (var_mSourceFileExtension_3186, var_mSourceFileHelp_3250, var_mSourceFileVariableName_3971, var_isUnused_3845, var_referenceGrammar_3308, var_mInstructionList_4097, var_endOfInstructionList_4122  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 72)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_useGrammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 82)) ;
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 102)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 105)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 72)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_useGrammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 82)) ;
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 102)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 105)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 63)) ;
  nt_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 63)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 65)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 63)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  GALGAS_semanticExpressionAST var_ifExpression_2907 ;
  nt_expression_ (ioArgument_ioDeclarations, var_ifExpression_2907, inCompiler) ;
  GALGAS_location var_operatorLocation_2928 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 70)) ;
  GALGAS_semanticExpressionAST var_thenExpression_3012 ;
  nt_expression_ (ioArgument_ioDeclarations, var_thenExpression_3012, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 72)) ;
  GALGAS_semanticExpressionAST var_elseExpression_3077 ;
  nt_expression_ (ioArgument_ioDeclarations, var_elseExpression_3077, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 74)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::init_21__21__21__21_ (var_operatorLocation_2928, var_ifExpression_2907, var_thenExpression_3012, var_elseExpression_3077, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 72)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 74)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 70)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 72)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                     GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_2554 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::init_21__21_ (var_operatorLocation_2554, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 56)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                     GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_2556 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::init_21__21_ (var_operatorLocation_2556, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 56)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i4_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_2027 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 43)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::init_21_ (var_identifier_2027, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputArgumentList::class_func_emptyList (SOURCE_FILE ("expression-output-expression-list.galgas", 105)) ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_selector_4265 ;
      switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_4265 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 110)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 112)) ;
        var_selector_4265 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 113)) ;
      } break ;
      case 3: {
        var_selector_4265 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 115)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_semanticExpressionAST var_expression_4498 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_4498, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_4265, var_expression_4498, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 118))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 118)) ;
      if (select_galgas_34_ExpressionSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 120)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 110)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 112)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_expression_parse (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 120)) ;
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
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 110)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 112)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 120)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                           GALGAS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputArgumentList::class_func_emptyList (SOURCE_FILE ("expression-output-expression-list.galgas", 130)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_4949 ;
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 1: {
      var_selector_4949 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 134)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 136)) ;
      var_selector_4949 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 137)) ;
    } break ;
    case 3: {
      var_selector_4949 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 139)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_semanticExpressionAST var_expression_5164 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_5164, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_4949, var_expression_5164, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 142))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 142)) ;
    if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 144)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 134)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 136)) ;
    } break ;
    case 3: {
    } break ;
    default:
      break ;
    }
    nt_expression_parse (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 144)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 134)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 136)) ;
    } break ;
    case 3: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 144)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i7_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 66)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::init_21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 67)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 74)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::init_21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 75)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 74)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_2637 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-literal-string.galgas", 58)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_2694 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 60)) ;
    var_literalStringList_2637.addAssign_operation (var_literalString_2694.readProperty_string ()  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 61)) ;
    if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::init_21__21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)), var_literalStringList_2637, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 60)) ;
    if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 60)) ;
    if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_2451 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 52)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::init_21_ (var_literalChar_2451, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_2472 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 52)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::init_21_ (var_literalDouble_2472, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_3335 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 76)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::init_21_ (var_literalInt_3335, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i13_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_5178 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 121)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5233 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5309 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5309, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5178, var_leftOperand_5233, GALGAS_comparison::class_func_equal (SOURCE_FILE ("expression-comparison.galgas", 124)), var_rightOperand_5309, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_5444 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 127)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5499 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5575 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5575, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5444, var_leftOperand_5499, GALGAS_comparison::class_func_notEqual (SOURCE_FILE ("expression-comparison.galgas", 130)), var_rightOperand_5575, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_5713 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 133)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5768 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5844 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5844, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5713, var_leftOperand_5768, GALGAS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 136)), var_rightOperand_5844, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_5986 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 139)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6041 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6117 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6117, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5986, var_leftOperand_6041, GALGAS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 142)), var_rightOperand_6117, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_6261 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 145)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6315 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6391 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6391, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6261, var_leftOperand_6315, GALGAS_comparison::class_func_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 148)), var_rightOperand_6391, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_6532 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 150)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 151)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6586 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6662 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6662, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6532, var_leftOperand_6586, GALGAS_comparison::class_func_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 154)), var_rightOperand_6662, inCompiler COMMA_HERE) ;
    } break ;
    case 8: {
      GALGAS_location var_operatorLocation_6801 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 156)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 157)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6857 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6933 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6933, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6801, var_leftOperand_6857, GALGAS_comparison::class_func_sameInstance (SOURCE_FILE ("expression-comparison.galgas", 160)), var_rightOperand_6933, inCompiler COMMA_HERE) ;
    } break ;
    case 9: {
      GALGAS_location var_operatorLocation_7075 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 162)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 163)) ;
      GALGAS_semanticExpressionAST var_leftOperand_7131 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_7207 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_7207, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_7075, var_leftOperand_7131, GALGAS_comparison::class_func_differentInstances (SOURCE_FILE ("expression-comparison.galgas", 166)), var_rightOperand_7207, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 121)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 127)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 133)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 139)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 145)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 151)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 157)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 163)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 121)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 127)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 133)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 139)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 145)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 151)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 157)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 163)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i14_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_5767 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 135)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5822 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5885 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_5885, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::init_21__21__21_ (var_operatorLocation_5767, var_leftOperand_5822, var_rightOperand_5885, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_6011 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 140)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 141)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6066 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6129 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6129, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::init_21__21__21_ (var_operatorLocation_6011, var_leftOperand_6066, var_rightOperand_6129, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_6256 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 146)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 147)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6310 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6373 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6373, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::init_21__21__21_ (var_operatorLocation_6256, var_leftOperand_6310, var_rightOperand_6373, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_6493 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 152)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 153)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6548 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6611 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6611, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6493, var_leftOperand_6548, var_rightOperand_6611, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_6741 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 158)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 159)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6795 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6858 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6858, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::init_21__21__21_ (var_operatorLocation_6741, var_leftOperand_6795, var_rightOperand_6858, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_6978 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 164)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 165)) ;
      GALGAS_semanticExpressionAST var_leftOperand_7033 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_7096 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_7096, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6978, var_leftOperand_7033, var_rightOperand_7096, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 135)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 141)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 147)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 153)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 159)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 165)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 135)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 141)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 147)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 153)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 159)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 165)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i15_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                    GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_5233 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 121)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5287 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5375 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5375, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::init_21__21__21_ (var_operatorLocation_5233, var_leftOperand_5287, var_rightOperand_5375, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_5506 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 127)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5561 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5649 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5649, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_5506, var_leftOperand_5561, var_rightOperand_5649, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_5790 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 133)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5844 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5909 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5909, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::init_21__21__21_ (var_operatorLocation_5790, var_leftOperand_5844, var_rightOperand_5909, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_6034 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 139)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6089 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6154 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6154, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6034, var_leftOperand_6089, var_rightOperand_6154, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_6289 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 145)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6345 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6410 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6410, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::init_21__21__21_ (var_operatorLocation_6289, var_leftOperand_6345, var_rightOperand_6410, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 121)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 127)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 133)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 139)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 145)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 121)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 127)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 133)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 139)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 145)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i16_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                          GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_4039 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 111)) ;
    GALGAS_lstring var_typeName_4110 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 112)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_4039, GALGAS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("expression-is-as.galgas", 117)), var_typeName_4110, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_4351 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 121)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 122)) ;
    GALGAS_lstring var_typeName_4478 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 124)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_4351, var_typeName_4478, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_or_parse (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 112)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 122)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 124)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 112)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 122)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 124)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 73)) ;
  GALGAS_lstring var_optionComponentName_3165 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 74)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 75)) ;
  GALGAS_lstring var_optionName_3249 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 77)) ;
  GALGAS_lstring var_getterName_3290 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 78)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::init_21__21__21_ (var_optionComponentName_3165, var_optionName_3249, var_getterName_3290, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 73)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 74)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 73)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 74)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 88)) ;
  GALGAS_lstring var_optionName_3665 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 90)) ;
  GALGAS_lstring var_getterName_3706 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 91)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("galgas_builtin_options"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 92)), inCompiler COMMA_HERE), var_optionName_3665, var_getterName_3706, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 59)) ;
  GALGAS_lstring var_lexiqueName_2623 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 61)) ;
  GALGAS_lstring var_getterName_2665 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 62)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::init_21__21_ (var_lexiqueName_2623, var_getterName_2665, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 64)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 92)) ;
  GALGAS_lstring var_filewrapperName_3695 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::init_21_ (var_filewrapperName_3695, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_3903 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 99)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::init_21__21_ (var_filewrapperName_3695, var_filePath_3903, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_4067 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 106)) ;
      GALGAS_actualOutputArgumentList var_expressionList_4184 ;
      nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4184, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::init_21__21__21_ (var_filewrapperName_3695, var_filewrapperTemplateName_4067, var_expressionList_4184, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 92)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 99)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 106)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 115)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 92)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 99)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 106)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3414 ;
  nt_optional_5F_type_ (var_typeName_3414, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 89)) ;
  GALGAS_actualOutputArgumentList var_expressionList_3501 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3501, inCompiler) ;
  GALGAS_location var_endOfExpression_3524 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 92)) ;
  outArgument_outExpression = GALGAS_initializerCallAST::init_21__21__21_ (var_typeName_3414, var_expressionList_3501, var_endOfExpression_3524, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 89)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 89)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 92)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3933 ;
  nt_optional_5F_type_ (var_typeName_3933, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 106)) ;
  GALGAS_location var_endOfExpression_3969 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 107)) ;
  outArgument_outExpression = GALGAS_initializerCallAST::init_21__21__21_ (var_typeName_3933, GALGAS_actualOutputArgumentList::class_func_emptyList (SOURCE_FILE ("expression-initializer.galgas", 110)), var_endOfExpression_3969, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_4352 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 121)) ;
  GALGAS_actualOutputArgumentList var_expressionList_4456 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4456, inCompiler) ;
  GALGAS_location var_endOfExpression_4479 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 124)) ;
  outArgument_outExpression = GALGAS_initializerCallAST::init_21__21__21_ (var_typeName_4352, var_expressionList_4456, var_endOfExpression_4479, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 121)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 124)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 121)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i24_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 75)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i24_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3330 ;
  nt_optional_5F_type_ (var_typeName_3330, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 87)) ;
  GALGAS_location var_startOfExpression_3355 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 88)) ;
  GALGAS_lstring var_constructorName_3445 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 90)) ;
  GALGAS_actualOutputArgumentList var_expressionList_3519 ;
  switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
    var_expressionList_3519 = GALGAS_actualOutputArgumentList::class_func_emptyList (SOURCE_FILE ("expression-constructor.galgas", 94)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3519, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 98)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfExpression_3679 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 100)) ;
  outArgument_outExpression = GALGAS_classFuncExpressionAST::init_21__21__21__21_ (var_typeName_3330, var_constructorName_3445, var_expressionList_3519, var_startOfExpression_3355.getter_union (var_endOfExpression_3679, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 105)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 90)) ;
  switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 98)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 90)) ;
  switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 98)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_2683 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 60)) ;
  GALGAS_actualOutputArgumentList var_expressionList_2803 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_2803, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 62)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::init_21__21_ (var_functionName_2683, var_expressionList_2803, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 60)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 62)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 60)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 62)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 53)) ;
  GALGAS_lstring var_typeName_2475 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 54)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::init_21_ (var_typeName_2475, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_4947 ;
  nt_optional_5F_type_ (var_typeName_4947, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 123)) ;
  GALGAS_collectionValueElementList var_elementList_5000 = GALGAS_collectionValueElementList::class_func_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 124)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element_5138 ;
      nt_collection_5F_value_5F_element_ (ioArgument_ioDeclarations, var_element_5138, inCompiler) ;
      var_elementList_5000.addAssign_operation (var_element_5138  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 129)) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 131)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_collectionValueAST::init_21__21__21_ (var_typeName_4947, var_elementList_5000, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 137)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 139)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 123)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 131)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 139)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 123)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 131)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 139)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i29_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputArgumentList var_expressionList_5621 = GALGAS_actualOutputArgumentList::class_func_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 146)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_selector_5692 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 149)) ;
      GALGAS_semanticExpressionAST var_expression_5767 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_5767, inCompiler) ;
      var_expressionList_5621.addAssign_operation (var_selector_5692, var_expression_5767, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 151))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 151)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 153)) ;
      GALGAS_lstring var_selector_5875 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 154)) ;
      GALGAS_semanticExpressionAST var_expression_5962 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_5962, inCompiler) ;
      var_expressionList_5621.addAssign_operation (var_selector_5875, var_expression_5962, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 156))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 156)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_6058 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 158)) ;
      GALGAS_semanticExpressionAST var_expression_6145 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_6145, inCompiler) ;
      var_expressionList_5621.addAssign_operation (var_selector_6058, var_expression_6145, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 160))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 160)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_ExpressionSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 163)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::init_21__21_ (var_expressionList_5621, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 165)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i29_parse (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 149)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 153)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_ExpressionSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 163)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 149)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 153)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_ExpressionSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 163)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 52)) ;
  outArgument_outExpression = GALGAS_selfInExpressionAST::init_21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 53)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i31_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 66)) ;
      GALGAS_actualOutputArgumentList var_expressionList_2994 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_2994, inCompiler) ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-property-access.galgas", 70)), GALGAS_string ("not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("expression-property-access.galgas", 70)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 71)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 73)) ;
      GALGAS_lstring var_structFieldName_3101 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 74)) ;
      switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
      case 1: {
        outArgument_outExpression = GALGAS_structPropertyAccessExpressionAST::init_21__21__21_ (var_structFieldName_3101.readProperty_location (), outArgument_outExpression, var_structFieldName_3101, inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        GALGAS_lstring var_getterName_3329 = var_structFieldName_3101 ;
        GALGAS_location var_startLocation_3370 = GALGAS_location::class_func_next (inCompiler  COMMA_SOURCE_FILE ("expression-property-access.galgas", 83)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 84)) ;
        GALGAS_actualOutputArgumentList var_expressionList_3494 ;
        nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3494, inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 86)) ;
        GALGAS_location var_endLocation_3533 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-property-access.galgas", 87)) ;
        outArgument_outExpression = GALGAS_getterCallExpressionAST::init_21_errorOnGetterCallInsteadOfPropertyRead_21__21__21__21_ (GALGAS_bool (true), outArgument_outExpression, var_getterName_3329, var_expressionList_3494, var_startLocation_3370.getter_union (var_endLocation_3533, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 93)), inCompiler COMMA_HERE) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i31_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 66)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 71)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 74)) ;
      switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 84)) ;
        nt_output_5F_expression_5F_list_parse (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 86)) ;
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
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 66)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 71)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 74)) ;
      switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 84)) ;
        nt_output_5F_expression_5F_list_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 86)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_2544 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::init_21__21_ (var_operatorLocation_2544, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 56)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_2546 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_tildeExpressionAST::init_21__21_ (var_operatorLocation_2546, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 56)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_2558 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 56)) ;
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 60)) ;
  outArgument_outExpression = GALGAS_bangExpressionAST::init_21__21_ (var_operatorLocation_2558, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_2573 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionAST::init_21__21_ (var_operatorLocation_2573, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 56)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i36_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_5217 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 121)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5271 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5344 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5344, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::init_21__21__21_ (var_operatorLocation_5217, var_leftOperand_5271, var_rightOperand_5344, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_5463 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 127)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5518 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5591 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5591, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::init_21__21__21_ (var_operatorLocation_5463, var_leftOperand_5518, var_rightOperand_5591, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_5715 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 133)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5769 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5842 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5842, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::init_21__21__21_ (var_operatorLocation_5715, var_leftOperand_5769, var_rightOperand_5842, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_5962 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 139)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6018 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6091 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6091, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_5962, var_leftOperand_6018, var_rightOperand_6091, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_6219 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 145)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6275 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6348 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6348, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_6219, var_leftOperand_6275, var_rightOperand_6348, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i36_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 121)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 127)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 133)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 139)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 145)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 121)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 127)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 133)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 139)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 145)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_3501 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 78)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 79)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3555 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3652 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_3652, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::init_21__21__21_ (var_operatorLocation_3501, var_leftOperand_3555, var_rightOperand_3652, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_3772 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 84)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 85)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3827 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3924 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_3924, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::init_21__21__21_ (var_operatorLocation_3772, var_leftOperand_3827, var_rightOperand_3924, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 79)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 85)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 79)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 85)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::class_func_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 359)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 360)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_selector_12152 ;
      GALGAS_formalArgumentPassingModeAST var_formalParameterPassingMode_12203 ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_12152 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 367)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 368)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 370)) ;
        var_selector_12152 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 371)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 372)) ;
      } break ;
      case 3: {
        var_selector_12152 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 374)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 375)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 377)) ;
        var_selector_12152 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 378)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 379)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 380)) ;
      } break ;
      case 5: {
        var_selector_12152 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 382)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 383)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 384)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 386)) ;
        var_selector_12152 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 387)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 388)) ;
      } break ;
      case 7: {
        var_selector_12152 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 390)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 391)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 393)) ;
        var_selector_12152 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 395)) ;
      } break ;
      case 9: {
        var_selector_12152 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 397)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 398)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 400)) ;
        var_selector_12152 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
        var_formalParameterPassingMode_12203 = GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 402)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterTypeName_13661 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_13661, inCompiler) ;
      GALGAS_bool var_isUnused_13703 ;
      switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
      case 1: {
        var_isUnused_13703 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
        var_isUnused_13703 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterName_13857 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 412)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_12152, var_formalParameterPassingMode_12203, var_formalParameterTypeName_13661, var_formalParameterName_13857, var_isUnused_13703  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 413)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 420)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 423)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 360)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 367)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 370)) ;
      } break ;
      case 3: {
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 377)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 379)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 382)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 383)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 386)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 390)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 393)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 397)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 400)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 412)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 420)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 423)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 360)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 367)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 370)) ;
      } break ;
      case 3: {
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 377)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 379)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 382)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 383)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 386)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 390)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 393)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 397)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 400)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 412)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 420)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 423)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                                 GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::class_func_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 433)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_ (ioArgument_ioDeclarations, outArgument_outActualParameterList, inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 439)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 442)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_parse (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 439)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 442)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 439)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 442)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_selector_15129 ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    var_selector_15129 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 453)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 455)) ;
    var_selector_15129 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 456)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 459)) ;
    GALGAS_lstringlist var_poisonedVarNameList_15282 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_15282, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::init_21__21_ (var_selector_15129, var_poisonedVarNameList_15282, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 461)) ;
  } break ;
  case 2: {
    GALGAS_lbigint var_count_15434 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 463)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 464)) ;
    GALGAS_uint var_n_15460 = var_count_15434.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 465)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, var_selector_15129.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?")) ;
        inCompiler->emitSemanticError (var_selector_15129.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 467)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, var_n_15460.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_count_15434.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 470)) ;
      }
    }
    if (kBoolFalse == test_2) {
      if (var_n_15460.isValid ()) {
        uint32_t variant_15699 = var_n_15460.uintValue () ;
        bool loop_15699 = true ;
        while (loop_15699) {
          loop_15699 = GALGAS_bool (ComparisonKind::greaterThan, var_n_15460.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
          if (loop_15699) {
            loop_15699 = GALGAS_bool (ComparisonKind::greaterThan, var_n_15460.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
          }
          if (loop_15699 && (0 == variant_15699)) {
            loop_15699 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 472)) ;
          }
          if (loop_15699) {
            variant_15699 -- ;
            ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::init_21__21_ (var_selector_15129.readProperty_location (), var_n_15460, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 474)) ;
            var_n_15460.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 475)) ;
          }
        }
      }
    }
  } break ;
  case 3: {
    GALGAS_lstring var_inputActualParameterName_15891 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 479)) ;
    GALGAS_lstringlist var_poisonedVarNameList_15947 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_15947, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::init_21__21__21_ (var_selector_15129, var_inputActualParameterName_15891, var_poisonedVarNameList_15947, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 481)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 487)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 488)) ;
    GALGAS_lstring var_inputActualParameterName_16218 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 489)) ;
    GALGAS_lstringlist var_poisonedVarNameList_16274 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_16274, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualSelfPropertyParameterAST::init_21__21__21_ (var_selector_15129, var_inputActualParameterName_16218, var_poisonedVarNameList_16274, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 491)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 497)) ;
    GALGAS_lstringlist var_poisonedVarNameList_16529 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_16529, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualSelfParameterAST::init_21__21__21_ (var_selector_15129, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 501)), var_poisonedVarNameList_16529, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 499)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 505)) ;
    GALGAS_lstring var_declarationTypeName_16752 ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
      var_declarationTypeName_16752 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 508)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_16752, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_inputActualParameterName_16935 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 512)) ;
    GALGAS_lstringlist var_poisonedVarNameList_16991 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_16991, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_15129, var_declarationTypeName_16752, var_inputActualParameterName_16935, var_poisonedVarNameList_16991, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 514)) ;
  } break ;
  case 7: {
    GALGAS_lstring var_declarationTypeName_17299 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_17299, inCompiler) ;
    GALGAS_lstring var_inputActualParameterName_17343 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 522)) ;
    GALGAS_lstringlist var_poisonedVarNameList_17399 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_17399, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_15129, var_declarationTypeName_17299, var_inputActualParameterName_17343, var_poisonedVarNameList_17399, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 524)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 531)) ;
    GALGAS_lstring var_declarationTypeName_17677 ;
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 1: {
      var_declarationTypeName_17677 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 534)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_17677, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GALGAS_bool var_markedAsUnused_17852 ;
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
      var_markedAsUnused_17852 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 542)) ;
      var_markedAsUnused_17852 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_inputActualParameterName_18001 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 545)) ;
    GALGAS_lstringlist var_poisonedVarNameList_18057 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_18057, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::init_21__21__21__21__21_ (var_selector_15129, var_declarationTypeName_17677, var_inputActualParameterName_18001, var_markedAsUnused_17852, var_poisonedVarNameList_18057, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 547)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 453)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 455)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 459)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 463)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 464)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 479)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 487)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 488)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 489)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 497)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 505)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 512)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 7: {
    nt_type_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 522)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 531)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 542)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 545)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 453)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 455)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 459)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 463)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 464)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 479)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 487)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 488)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 489)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 497)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 505)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 512)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 7: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 522)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 531)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 542)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 545)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_selector_18701 ;
  switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
  case 1: {
    var_selector_18701 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 565)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 567)) ;
    var_selector_18701 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 568)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_outputInputActualParameterName_18839 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 571)) ;
    GALGAS_lstringlist var_structAttributeList_18880 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 572)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 575)) ;
        GALGAS_lstring var_structAttributeName_18982 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 576)) ;
        var_structAttributeList_18880.addAssign_operation (var_structAttributeName_18982  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 577)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::init_21__21__21_ (var_selector_18701, var_outputInputActualParameterName_18839, var_structAttributeList_18880, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 579)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 585)) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::init_21_ (var_selector_18701, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 586)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 588)) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputSelfParameterAST::init_21_ (var_selector_18701, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 589)) ;
  } break ;
  case 4: {
    GALGAS_lbigint var_count_19445 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 591)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 592)) ;
    GALGAS_uint var_n_19471 = var_count_19445.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 593)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::equal, var_n_19471.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_count_19445.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray2  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 595)) ;
      }
    }
    if (kBoolFalse == test_1) {
      if (var_n_19471.isValid ()) {
        uint32_t variant_19588 = var_n_19471.uintValue () ;
        bool loop_19588 = true ;
        while (loop_19588) {
          loop_19588 = GALGAS_bool (ComparisonKind::greaterThan, var_n_19471.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
          if (loop_19588) {
            loop_19588 = GALGAS_bool (ComparisonKind::greaterThan, var_n_19471.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
          }
          if (loop_19588 && (0 == variant_19588)) {
            loop_19588 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 597)) ;
          }
          if (loop_19588) {
            variant_19588 -- ;
            ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::init_21__21_ (var_selector_18701.readProperty_location (), var_n_19471, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 599)) ;
            var_n_19471.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 600)) ;
          }
        }
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 565)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 567)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 571)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 575)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 576)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 585)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 588)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 591)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 592)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 565)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 567)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 571)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 575)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 576)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 585)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 588)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 591)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 592)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_selector_20146 ;
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
    var_selector_20146 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 614)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 616)) ;
    var_selector_20146 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 617)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticExpressionAST var_e_20309 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_20309, inCompiler) ;
  GALGAS_location var_endOfExpressionLocation_20329 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 620)) ;
  ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::init_21__21__21_ (var_selector_20146, var_e_20309, var_endOfExpressionLocation_20329, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 621)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 614)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 616)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 614)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 616)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_selector_21282 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 647)) ;
  GALGAS_semanticExpressionAST var_e_21365 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_21365, inCompiler) ;
  GALGAS_location var_endOfExpressionLocation_21385 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 649)) ;
  ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::init_21__21__21_ (var_selector_21282, var_e_21365, var_endOfExpressionLocation_21385, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 650)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                 GALGAS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::class_func_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 663)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 664)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_selector_22074 ;
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        var_selector_22074 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 670)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 672)) ;
        var_selector_22074 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 673)) ;
      } break ;
      case 3: {
        var_selector_22074 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 675)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_isConstant_22259 ;
      switch (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler)) {
      case 1: {
        var_isConstant_22259 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 681)) ;
        var_isConstant_22259 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterTypeName_22429 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_22429, inCompiler) ;
      GALGAS_bool var_isUnused_22471 ;
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
        var_isUnused_22471 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 689)) ;
        var_isUnused_22471 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterName_22625 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 692)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_22074, var_formalParameterTypeName_22429, var_formalParameterName_22625, var_isUnused_22471, var_isConstant_22259  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 693)) ;
      if (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 700)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 703)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 664)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 670)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 672)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 681)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 689)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 692)) ;
      if (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 700)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 703)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 664)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 670)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 672)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 681)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 689)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 692)) ;
      if (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 700)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 703)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_ (GALGAS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * /* inCompiler */) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 709)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_indexing (Lexique_galgasScanner_34_ * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_ (GALGAS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 715)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 716)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 717)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_varName_23326 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 719)) ;
    outArgument_outPoisonedVarNameList.addAssign_operation (var_varName_23326  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 720)) ;
    if (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 722)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 724)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 716)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 717)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 719)) ;
    if (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 722)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 724)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 716)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 717)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 719)) ;
    if (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 722)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 724)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GALGAS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::class_func_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 348)) ;
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_semanticInstructionAST var_instruction_13786 ;
      nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_13786, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_13786  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 353)) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
        } break ;
        case 2: {
          GALGAS_string var_separator_13908 = GALGAS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 358)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_separator_13908.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 359)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 359)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GALGAS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 360)), GALGAS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 360)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_parse (inCompiler) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
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
  inCompiler->resetTemplateString () ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 372)) ;
  GALGAS_bool var_isOnce_14465 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_14488 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 377)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isOnce_14465.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 379)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 379)) ;
        }
      }
      var_isOnce_14465 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 383)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_isUsefull_14488.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 385)), GALGAS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 385)) ;
        }
      }
      var_isUsefull_14488 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_14828 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 389)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_14954 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_14954, inCompiler) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isOnce_14465.boolEnum () ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_formalInputParameterList_14954.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 391)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_14828.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 392)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 394)) ;
  GALGAS_lstring var_resultTypeName_15169 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_15169, inCompiler) ;
  GALGAS_lstring var_resultVariableName_15201 ;
  switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    var_resultVariableName_15201 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 398)) ;
  } break ;
  case 2: {
    var_resultVariableName_15201 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 400)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 402)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_15427 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_15427, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 404)) ;
  GALGAS_location var_endOfFunctionInstructionList_15467 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 405)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_isOnce_14465.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GALGAS_bool (false), var_functionName_14828, var_resultTypeName_15169, var_resultVariableName_15201, var_functionInstructionList_15427, var_endOfFunctionInstructionList_15467, GALGAS_bool (false), var_isUsefull_14488, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 407)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (GALGAS_bool (false), var_functionName_14828, var_formalInputParameterList_14954, var_resultTypeName_15169, var_isUsefull_14488, var_resultVariableName_15201, var_functionInstructionList_15427, var_endOfFunctionInstructionList_15467, GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 418)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 372)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 377)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 383)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 389)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 394)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 398)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 402)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 404)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 372)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 377)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 383)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 389)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 394)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 398)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 402)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 404)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 435)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 436)) ;
  GALGAS_bool var_isOnce_16428 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_16451 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 441)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isOnce_16428.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 443)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 443)) ;
        }
      }
      var_isOnce_16428 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 447)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_isUsefull_16451.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 449)), GALGAS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 449)) ;
        }
      }
      var_isUsefull_16451 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_16791 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 453)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_16917 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_16917, inCompiler) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isOnce_16428.boolEnum () ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_formalInputParameterList_16917.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 455)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_16791.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 456)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 458)) ;
  GALGAS_lstring var_resultTypeName_17132 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_17132, inCompiler) ;
  GALGAS_lstring var_resultVariableName_17164 ;
  switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
  case 1: {
    var_resultVariableName_17164 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 462)) ;
  } break ;
  case 2: {
    var_resultVariableName_17164 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 464)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_17390 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_17390, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 468)) ;
  GALGAS_location var_endOfFunctionInstructionList_17430 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 469)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_isOnce_16428.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GALGAS_bool (false), var_functionName_16791, var_resultTypeName_17132, var_resultVariableName_17164, var_functionInstructionList_17390, var_endOfFunctionInstructionList_17430, GALGAS_bool (true), var_isUsefull_16451, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 471)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (GALGAS_bool (false), var_functionName_16791, var_formalInputParameterList_16917, var_resultTypeName_17132, var_isUsefull_16451, var_resultVariableName_17164, var_functionInstructionList_17390, var_endOfFunctionInstructionList_17430, GALGAS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 482)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 435)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 436)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 441)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 447)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 453)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 458)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 462)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 468)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 435)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 436)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 441)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 447)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 453)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 458)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 462)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 468)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 501)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 502)) ;
  GALGAS_bool var_isUsefull_18550 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 506)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_18550.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 508)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 508)) ;
        }
      }
      var_isUsefull_18550 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mActionName_18754 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 512)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_18879 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_18879, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 514)) ;
  GALGAS_lstring var_resultTypeName_18957 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_18957, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc (GALGAS_bool (false), var_mActionName_18754, var_formalInputParameterList_18879, var_resultTypeName_18957, var_isUsefull_18550, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 516)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 501)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 502)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 506)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 512)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 514)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 501)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 502)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 506)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 512)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 514)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 536)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 537)) ;
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 539)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::init_21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 540)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_20130 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_20130, inCompiler) ;
    GALGAS_lstring var_actualParameterName_20178 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 543)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::init_21__21_ (var_actualParameterTypeName_20130, var_actualParameterName_20178, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 546)) ;
    GALGAS_lstring var_actualParameterTypeName_20399 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_20399, inCompiler) ;
    GALGAS_lstring var_actualParameterName_20447 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 548)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::init_21__21_ (var_actualParameterTypeName_20399, var_actualParameterName_20447, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_20627 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 551)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::init_21_ (var_actualParameterName_20627, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 554)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 536)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 537)) ;
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 539)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 543)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 546)) ;
    nt_type_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 548)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 551)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 554)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 536)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 537)) ;
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 539)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 543)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 546)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 548)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 551)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 554)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::class_func_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 561)) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 564)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 567)) ;
        GALGAS_lstring var_selector_21186 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 568)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 569)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_21186, GALGAS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 570)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_selector_21348 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 572)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 573)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_21348, GALGAS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 574)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_selector_21498 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 576)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 577)) ;
        GALGAS_lstring var_actualParameterTypeName_21546 ;
        switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_21546 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 580)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_21546, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_actualParameterName_21764 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 584)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_21498, GALGAS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_21546, var_actualParameterName_21764, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 585)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 589)) ;
        GALGAS_lstring var_selector_21979 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 590)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 591)) ;
        GALGAS_lstring var_actualParameterTypeName_22039 ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_22039 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 594)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_22039, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_actualParameterName_22257 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 598)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_21979, GALGAS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_22039, var_actualParameterName_22257, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 599)) ;
      } break ;
      case 5: {
        GALGAS_lstring var_selector_22472 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 603)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 604)) ;
        GALGAS_lstring var_actualParameterTypeName_22520 ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_22520 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 607)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_22520, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_actualParameterName_22739 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 611)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_22472, GALGAS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_22520, var_actualParameterName_22739, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 612)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 616)) ;
        GALGAS_lstring var_selector_22954 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 617)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 618)) ;
        GALGAS_lstring var_actualParameterTypeName_23014 ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_23014 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 621)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_23014, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_actualParameterName_23233 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 625)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_22954, GALGAS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_23014, var_actualParameterName_23233, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 626)) ;
      } break ;
      case 7: {
        GALGAS_lstring var_selector_23448 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 630)) ;
        GALGAS_lstring var_actualParameterName_23485 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 631)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_23448, GALGAS_inputParameterVariable::init_21_ (var_actualParameterName_23485, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 632)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 634)) ;
        GALGAS_lstring var_selector_23643 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 635)) ;
        GALGAS_lstring var_actualParameterName_23692 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 636)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_23643, GALGAS_inputParameterVariable::init_21_ (var_actualParameterName_23692, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 637)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_10 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 640)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 642)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 564)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 567)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 569)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 572)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 573)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 576)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 577)) ;
        switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_parse (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 584)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 589)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 591)) ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_parse (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 598)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 603)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 604)) ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_parse (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 611)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 616)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 618)) ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_parse (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 625)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 630)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 631)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 634)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 636)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_10 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 640)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 642)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 564)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 567)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 569)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 572)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 573)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 576)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 577)) ;
        switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 584)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 589)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 591)) ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 598)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 603)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 604)) ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 611)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 616)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 618)) ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 625)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 630)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 631)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 634)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 636)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_10 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 640)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 642)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 67)) ;
  GALGAS_bool var_isUsefull_2949 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 71)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_2949.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 73)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 73)) ;
        }
      }
      var_isUsefull_2949 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mActionName_3162 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 77)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_3275 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_3275, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externProcedureDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_3162, var_mFormalParameterList_3275, var_isUsefull_2949, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 71)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 77)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 71)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 77)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i7_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas", 102)) ;
  GALGAS_bool var_isUsefull_4100 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas", 106)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_4100.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 108)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 108)) ;
        }
      }
      var_isUsefull_4100 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mRoutineName_4304 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas", 112)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_4418 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_4418, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 114)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_4529 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRoutineInstructionList_4529, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 116)) ;
  GALGAS_location var_endOfInstructionList_4569 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 117)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GALGAS_bool (false), GALGAS_bool (false), var_mRoutineName_4304, var_mFormalParameterList_4418, var_isUsefull_4100, var_mRoutineInstructionList_4529, var_endOfInstructionList_4569, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 118)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas", 112)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 114)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 116)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas", 112)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 114)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas", 133)) ;
  GALGAS_bool var_isUsefull_5092 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas", 137)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_5092.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 139)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 139)) ;
        }
      }
      var_isUsefull_5092 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mRoutineName_5296 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas", 143)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_5410 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_5410, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 145)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_5521 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRoutineInstructionList_5521, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 147)) ;
  GALGAS_location var_endOfInstructionList_5561 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 148)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GALGAS_bool (false), GALGAS_bool (true), var_mRoutineName_5296, var_mFormalParameterList_5410, var_isUsefull_5092, var_mRoutineInstructionList_5521, var_endOfInstructionList_5561, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas", 133)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas", 137)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas", 143)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 145)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 147)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas", 133)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas", 137)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas", 143)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 145)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas", 147)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName_4085 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
  GALGAS_lstring var_optionalProperty_4122 ;
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
    var_optionalProperty_4122 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 105)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 107)) ;
    GALGAS_actualOutputArgumentList var_outExpressionList_4319 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_outExpressionList_4319, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)), GALGAS_string ("not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
    var_optionalProperty_4122.drop () ; // Release error dropped variable
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
    GALGAS_lstring var_attributeName_4445 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
    var_optionalProperty_4122 = var_attributeName_4445 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 118)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_4576 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_4576, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_4085.readProperty_location (), var_mTargetVariableName_4085, var_optionalProperty_4122, var_mSourceExpression_4576, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 107)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 118)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 107)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 118)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 133)) ;
  GALGAS_lstring var_mTargetVariableName_5049 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 134)) ;
  GALGAS_lstring var_optionalProperty_5086 ;
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    var_optionalProperty_5086 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 137)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 139)) ;
    GALGAS_actualOutputArgumentList var_outExpressionList_5283 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_outExpressionList_5283, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 143)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)), GALGAS_string ("not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)) ;
    var_optionalProperty_5086.drop () ; // Release error dropped variable
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 146)) ;
    GALGAS_lstring var_attributeName_5409 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 147)) ;
    var_optionalProperty_5086 = var_attributeName_5409 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 150)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_5540 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_5540, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPropertyAssignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_5049.readProperty_location (), var_mTargetVariableName_5049, var_optionalProperty_5086, var_mSourceExpression_5540, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 134)) ;
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 139)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 143)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 146)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 147)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 150)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 134)) ;
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 139)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 143)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 146)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 147)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 150)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 191)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 192)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 191)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 192)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 191)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 192)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                              const GALGAS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiverName_8114 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 201)) ;
  GALGAS_location var_instructionLocation_8135 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 202)) ;
  GALGAS_lstringlist var_propertyList_8193 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-concat.galgas", 203)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 206)) ;
      GALGAS_lstring var_attributeName_8267 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 207)) ;
      var_propertyList_8193.addAssign_operation (var_attributeName_8267  COMMA_SOURCE_FILE ("instruction-concat.galgas", 208)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 212)) ;
    GALGAS_semanticExpressionAST var_expression_8419 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_8419, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_8135, constinArgument_inHasSelfPrefix, var_receiverName_8114, var_propertyList_8193, var_expression_8419, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 222)) ;
    GALGAS_semanticExpressionAST var_expression_8699 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_8699, inCompiler) ;
    outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_8135, constinArgument_inHasSelfPrefix, var_receiverName_8114, var_propertyList_8193, var_expression_8699, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 232)) ;
    GALGAS_semanticExpressionAST var_expression_8978 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_8978, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_8135, constinArgument_inHasSelfPrefix, var_receiverName_8114, var_propertyList_8193, var_expression_8978, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 242)) ;
    GALGAS_semanticExpressionAST var_expression_9256 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_9256, inCompiler) ;
    outArgument_outInstruction = GALGAS_divEqualExpressionInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_8135, constinArgument_inHasSelfPrefix, var_receiverName_8114, var_propertyList_8193, var_expression_9256, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GALGAS_actualParameterListAST var_actualParameterList_9554 ;
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_9554, inCompiler) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = constinArgument_inHasSelfPrefix.boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::equal, var_propertyList_8193.getter_count (SOURCE_FILE ("instruction-concat.galgas", 254)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            outArgument_outInstruction = GALGAS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_8135, GALGAS_selfInExpressionAST::init_21_ (var_instructionLocation_8135, inCompiler COMMA_HERE), var_receiverName_8114, var_actualParameterList_9554, inCompiler COMMA_HERE) ;
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_lstring var_methodName_9929 ;
          {
          var_propertyList_8193.setter_popLast (var_methodName_9929, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 262)) ;
          }
          GALGAS_semanticExpressionAST var_receiverExpression_9978 = GALGAS_selfInExpressionAST::init_21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 263)), inCompiler COMMA_HERE) ;
          var_receiverExpression_9978 = GALGAS_structPropertyAccessExpressionAST::init_21__21__21_ (var_receiverName_8114.readProperty_location (), var_receiverExpression_9978, var_receiverName_8114, inCompiler COMMA_HERE) ;
          cEnumerator_lstringlist enumerator_10178 (var_propertyList_8193, EnumerationOrder::up) ;
          while (enumerator_10178.hasCurrentObject ()) {
            var_receiverExpression_9978 = GALGAS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_10178.current_mValue (HERE).readProperty_location (), var_receiverExpression_9978, enumerator_10178.current_mValue (HERE), inCompiler COMMA_HERE) ;
            enumerator_10178.gotoNextObject () ;
          }
          outArgument_outInstruction = GALGAS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_8135, var_receiverExpression_9978, var_methodName_9929, var_actualParameterList_9554, inCompiler COMMA_HERE) ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, var_propertyList_8193.getter_count (SOURCE_FILE ("instruction-concat.galgas", 275)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outInstruction = GALGAS_procCallInstructionAST::init_21__21__21_ (var_receiverName_8114.readProperty_location (), var_receiverName_8114, var_actualParameterList_9554, inCompiler COMMA_HERE) ;
        }
      }
      if (kBoolFalse == test_3) {
        GALGAS_lstring var_methodName_10806 ;
        {
        var_propertyList_8193.setter_popLast (var_methodName_10806, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 282)) ;
        }
        GALGAS_semanticExpressionAST var_receiverExpression_10853 = GALGAS_varInExpressionAST::init_21_ (var_receiverName_8114, inCompiler COMMA_HERE) ;
        cEnumerator_lstringlist enumerator_10923 (var_propertyList_8193, EnumerationOrder::up) ;
        while (enumerator_10923.hasCurrentObject ()) {
          var_receiverExpression_10853 = GALGAS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_10923.current_mValue (HERE).readProperty_location (), var_receiverExpression_10853, enumerator_10923.current_mValue (HERE), inCompiler COMMA_HERE) ;
          enumerator_10923.gotoNextObject () ;
        }
        outArgument_outInstruction = GALGAS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_8135, var_receiverExpression_10853, var_methodName_10806, var_actualParameterList_9554, inCompiler COMMA_HERE) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 206)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 207)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 212)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 222)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 232)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 242)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 206)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 207)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 212)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 222)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 232)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 242)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 5: {
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 60)) ;
  GALGAS_location var_instructionLocation_2679 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 61)) ;
  GALGAS_lstringlist var_dropList_2737 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-drop.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_2787 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 64)) ;
    var_dropList_2737.addAssign_operation (var_variableName_2787  COMMA_SOURCE_FILE ("instruction-drop.galgas", 65)) ;
    if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::init_21__21_ (var_instructionLocation_2679, var_dropList_2737, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 64)) ;
    if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 64)) ;
    if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i15_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GALGAS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GALGAS_fixitListAST::class_func_emptyList (SOURCE_FILE ("instruction-error.galgas", 131)) ;
  switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 134)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 135)) ;
    GALGAS_bool var_hasFixItRemove_5166 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 139)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_hasFixItRemove_5166.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 141)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 141)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 143))  COMMA_SOURCE_FILE ("instruction-error.galgas", 143)) ;
          var_hasFixItRemove_5166 = GALGAS_bool (true) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas", 147)) ;
        GALGAS_location var_errorLocation_5491 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 148)) ;
        GALGAS_semanticExpressionAST var_expression_5590 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_5590, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::class_func_fixItReplace (var_expression_5590, var_errorLocation_5491  COMMA_SOURCE_FILE ("instruction-error.galgas", 150))  COMMA_SOURCE_FILE ("instruction-error.galgas", 150)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas", 152)) ;
        GALGAS_location var_errorLocation_5742 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 153)) ;
        GALGAS_semanticExpressionAST var_expression_5841 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_5841, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::class_func_fixItInsertAfter (var_expression_5841, var_errorLocation_5742  COMMA_SOURCE_FILE ("instruction-error.galgas", 155))  COMMA_SOURCE_FILE ("instruction-error.galgas", 155)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
        GALGAS_location var_errorLocation_5998 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 158)) ;
        GALGAS_semanticExpressionAST var_expression_6097 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_6097, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::class_func_fixItInsertBefore (var_expression_6097, var_errorLocation_5998  COMMA_SOURCE_FILE ("instruction-error.galgas", 160))  COMMA_SOURCE_FILE ("instruction-error.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_25 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 163)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 165)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 134)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 135)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 139)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas", 147)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas", 152)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_25 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 163)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 165)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 134)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 135)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 139)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas", 147)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas", 152)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_25 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 163)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 165)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 173)) ;
  GALGAS_location var_instructionLocation_6534 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 174)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_6633 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_6633, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 176)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_6723 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mErrorExpression_6723, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_6748 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-error.galgas", 178)) ;
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas", 181)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 182)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_6866 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 184)) ;
      var_mBuiltVariableList_6748.addAssign_operation (var_builtVariableName_6866  COMMA_SOURCE_FILE ("instruction-error.galgas", 185)) ;
      if (select_galgas_34_InstructionsSyntax_28 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 187)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 189)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_fixitListAST var_fixitListAST_7038 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_7038, inCompiler) ;
  outArgument_outInstruction = GALGAS_errorInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_6534, var_mReceiverExpression_6633, var_mErrorExpression_6723, var_mBuiltVariableList_6748, var_fixitListAST_7038, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 173)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 176)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas", 181)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 182)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 184)) ;
      if (select_galgas_34_InstructionsSyntax_28 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 187)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 189)) ;
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 173)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 176)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas", 181)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 182)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 184)) ;
      if (select_galgas_34_InstructionsSyntax_28 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 187)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 189)) ;
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i17_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                 GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lbigint var_count_11359 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 311)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 312)) ;
  GALGAS_uint var_n_11381 = var_count_11359.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 313)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, var_n_11381.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_11359.readProperty_location (), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 315)) ;
    }
  }
  if (var_n_11381.isValid ()) {
    uint32_t variant_11482 = var_n_11381.uintValue () ;
    bool loop_11482 = true ;
    while (loop_11482) {
      loop_11482 = GALGAS_bool (ComparisonKind::greaterThan, var_n_11381.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_11482) {
        loop_11482 = GALGAS_bool (ComparisonKind::greaterThan, var_n_11381.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_11482 && (0 == variant_11482)) {
        loop_11482 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 317)) ;
      }
      if (loop_11482) {
        variant_11482 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 318)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 318))  COMMA_SOURCE_FILE ("instruction-for.galgas", 318)) ;
        var_n_11381.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 319)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i17_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 311)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 312)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 311)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 312)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_typeName_11875 ;
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
    var_typeName_11875 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 329)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_11875, inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_11875, GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 335))  COMMA_SOURCE_FILE ("instruction-for.galgas", 335)) ;
  } break ;
  case 2: {
    GALGAS_bool var_isUnused_12085 ;
    switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
      var_isUnused_12085 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 341)) ;
      var_isUnused_12085 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_constantName_12225 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 344)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_11875, var_isUnused_12085, var_constantName_12225  COMMA_SOURCE_FILE ("instruction-for.galgas", 345)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 341)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 344)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 341)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 344)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i19_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 353)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_12605 = GALGAS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 354)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (ioArgument_ioDeclarations, var_elementList_12605, inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_32 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 358)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_location var_location_12779 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 360)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 362)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_12884 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_12884, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::init_21__21_mEndsWithEllipsis_21__21_ (var_elementList_12605, GALGAS_bool (false), var_enumeratedExpression_12884, var_location_12779, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i19_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 353)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_parse (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_32 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 358)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 362)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 353)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_32 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 358)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 362)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_13374 ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_typeName_13374 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 378)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_13374, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_13507 ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 384)) ;
    var_enumerationVariable_13507 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 385)) ;
  } break ;
  case 2: {
    var_enumerationVariable_13507 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 387)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 389)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_13712 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_13712, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::init_21__21__21__21_ (var_typeName_13374, var_enumerationVariable_13507, var_enumeratedExpression_13712, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 395)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 384)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 387)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 389)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 384)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 387)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 389)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
  GALGAS_location var_startLocation_14195 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 404)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 405)) ;
  GALGAS_lstring var_prefix_14251 ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    var_prefix_14251 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 408)) ;
  } break ;
  case 2: {
    var_prefix_14251 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 410)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endLocation_14347 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 412)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 413)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_14447 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_14447, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::init_21__21__21_ (var_prefix_14251, var_enumeratedExpression_14447, var_startLocation_14195.getter_union (var_endLocation_14347, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 405)) ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 410)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 413)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 405)) ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 410)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 413)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 426)) ;
  GALGAS_location var_instructionLocation_14891 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 427)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_14936 = GALGAS_forInstructionEnumeratedObjectListAST::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 428)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_15030 ;
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
      var_ascending_15030 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 434)) ;
      var_ascending_15030 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_15232 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (ioArgument_ioDeclarations, var_enumeratedObject_15232, inCompiler) ;
    var_mEnumeratedObjectList_14936.addAssign_operation (var_ascending_15030, var_enumeratedObject_15232  COMMA_SOURCE_FILE ("instruction-for.galgas", 438)) ;
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_15368 ;
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_mWhileExpression_15368 = GALGAS_trueExpressionAST::init_21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 444)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 446)) ;
    nt_expression_ (ioArgument_ioDeclarations, var_mWhileExpression_15368, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_15550 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 449)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_15626 ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_15626 = GALGAS_semanticInstructionListAST::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 452)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 454)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBeforeInstructionList_15626, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_15837 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 457)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
  GALGAS_lstring var_indexVariableName_15900 ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    var_indexVariableName_15900 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 461)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 463)) ;
    var_indexVariableName_15900 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 464)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 465)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_16114 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mDoInstructionList_16114, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_16141 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 468)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_16210 ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_16210 = GALGAS_semanticInstructionListAST::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 471)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 473)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBetweenInstructionList_16210, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_16425 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 476)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_16499 ;
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_16499 = GALGAS_semanticInstructionListAST::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 479)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 481)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mAfterInstructionList_16499, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_16706 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 484)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 485)) ;
  GALGAS_location var_endof_5F_foreach_5F_instruction_16760 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 486)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_14891, var_mEnumeratedObjectList_14936, var_indexVariableName_15900, var_mWhileExpression_15368, var_endof_5F_while_5F_expression_15550, var_mBeforeInstructionList_15626, var_endof_5F_before_5F_branch_15837, var_mBetweenInstructionList_16210, var_endof_5F_between_5F_branch_16425, var_mDoInstructionList_16114, var_endof_5F_do_5F_branch_16141, var_mAfterInstructionList_16499, var_endof_5F_after_5F_branch_16706, var_endof_5F_foreach_5F_instruction_16760, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 426)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 434)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 446)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 454)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 463)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 464)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 465)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 473)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 481)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 485)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 426)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 434)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 446)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 454)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 463)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 464)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 465)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 473)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 481)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 485)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 279)) ;
  GALGAS_location var_instructionLocation_12857 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 280)) ;
  GALGAS_lstring var_grammarComponentName_12925 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 281)) ;
  GALGAS_lstring var_labelName_12998 ;
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    var_labelName_12998 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 284)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
    var_labelName_12998 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 287)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_actualParameterListAST var_actualParameterList_13211 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_13211, inCompiler) ;
  nt_grammar_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instructionLocation_12857, var_actualParameterList_13211, var_grammarComponentName_12925, var_labelName_12998, outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 279)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 281)) ;
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 287)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 279)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 281)) ;
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 287)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 301)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_13980 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_13980, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_14005 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 303)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_14164 ;
  switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_14164 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 309)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_14164, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::init_21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_13980, var_endOfSourceExpression_14005, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_14164, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 301)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 309)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 301)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 309)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 331)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_15361 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_15361, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_15396 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 333)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 334)) ;
  GALGAS_semanticExpressionAST var_nameExpression_15496 ;
  nt_expression_ (ioArgument_ioDeclarations, var_nameExpression_15496, inCompiler) ;
  GALGAS_location var_endOfNameExpression_15529 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 336)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_15677 ;
  switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_15677 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 342)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_15677, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_15361, var_endOfSourceExpression_15396, var_nameExpression_15496, var_endOfNameExpression_15529, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_15677, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 331)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 334)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 342)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 331)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 334)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 342)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i26_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_9431 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 253)) ;
  GALGAS_ifExpressionList var_testExpression_9510 ;
  nt_if_5F_expression_ (ioArgument_ioDeclarations, var_testExpression_9510, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 255)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_9590 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_then_5F_instructionList_9590, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_9619 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 257)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_9698 ;
  switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_9698 = GALGAS_semanticInstructionListAST::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 260)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 262)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_else_5F_instructionList_9698, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 265)) ;
    GALGAS_semanticInstructionAST var_instruction_9927 ;
    nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instruction_9927, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 267)) ;
    temp_0.addAssign_operation (var_instruction_9927  COMMA_SOURCE_FILE ("instruction-if.galgas", 267)) ;
    var_else_5F_instructionList_9698 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_9431, var_testExpression_9510, var_then_5F_instructionList_9590, var_endOf_5F_then_5F_branchLocation_9619, var_else_5F_instructionList_9698, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 275)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i26_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_if_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 255)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 262)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 265)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_if_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 255)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 262)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 265)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 283)) ;
  nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 285)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 283)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 285)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 283)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 285)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i28_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GALGAS_ifExpressionList & outArgument_outExpressionList,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_ifExpressionList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 292)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 295)) ;
      GALGAS_lstring var_constantName_10830 ;
      switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
      case 1: {
        var_constantName_10830 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 298)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 300)) ;
        var_constantName_10830 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 301)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 303)) ;
      GALGAS_semanticExpressionAST var_expression_11025 ;
      nt_expression_5F_or_ (ioArgument_ioDeclarations, var_expression_11025, inCompiler) ;
      GALGAS_location var_endOfReceiverExpression_11048 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 305)) ;
      switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::class_func_letExp (var_constantName_10830, var_expression_11025, var_endOfReceiverExpression_11048, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311))  COMMA_SOURCE_FILE ("instruction-if.galgas", 307))  COMMA_SOURCE_FILE ("instruction-if.galgas", 307)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 314)) ;
        GALGAS_lstring var_typeName_11383 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_11383, inCompiler) ;
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::class_func_letExp (var_constantName_10830, var_expression_11025, var_endOfReceiverExpression_11048, var_typeName_11383  COMMA_SOURCE_FILE ("instruction-if.galgas", 316))  COMMA_SOURCE_FILE ("instruction-if.galgas", 316)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 324)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 325)) ;
      GALGAS_semanticExpressionAST var_receiverExpression_11707 ;
      nt_expression_ (ioArgument_ioDeclarations, var_receiverExpression_11707, inCompiler) ;
      GALGAS_lstring var_optionalMethodName_11761 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 327)) ;
      GALGAS_optionalMethodActualArgumentList var_optionalMethodActualArgumentList_11826 = GALGAS_optionalMethodActualArgumentList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 328)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_11922 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 331)) ;
          GALGAS_semanticExpressionAST var_expression_11976 ;
          nt_expression_ (ioArgument_ioDeclarations, var_expression_11976, inCompiler) ;
          var_optionalMethodActualArgumentList_11826.addAssign_operation (var_selector_11922, GALGAS_optionalMethodActualArgument::class_func_actualOutput (var_expression_11976, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 335))  COMMA_SOURCE_FILE ("instruction-if.galgas", 335))  COMMA_SOURCE_FILE ("instruction-if.galgas", 333)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 337)) ;
          GALGAS_lstring var_selector_12167 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 338)) ;
          GALGAS_semanticExpressionAST var_expression_12233 ;
          nt_expression_ (ioArgument_ioDeclarations, var_expression_12233, inCompiler) ;
          var_optionalMethodActualArgumentList_11826.addAssign_operation (var_selector_12167, GALGAS_optionalMethodActualArgument::class_func_actualOutput (var_expression_12233, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 342))  COMMA_SOURCE_FILE ("instruction-if.galgas", 342))  COMMA_SOURCE_FILE ("instruction-if.galgas", 340)) ;
        } break ;
        case 4: {
          GALGAS_lstring var_selector_12419 ;
          switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
          case 1: {
            var_selector_12419 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 346)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 348)) ;
            var_selector_12419 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 349)) ;
          } break ;
          default:
            break ;
          }
          switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 352)) ;
            GALGAS_lstring var_typeName_12616 ;
            switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
            case 1: {
              var_typeName_12616 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 355)) ;
            } break ;
            case 2: {
              nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_12616, inCompiler) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_constantName_12802 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 359)) ;
            var_optionalMethodActualArgumentList_11826.addAssign_operation (var_selector_12419, GALGAS_optionalMethodActualArgument::class_func_actualLetInput (var_typeName_12616, var_constantName_12802  COMMA_SOURCE_FILE ("instruction-if.galgas", 362))  COMMA_SOURCE_FILE ("instruction-if.galgas", 360)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 364)) ;
            GALGAS_lstring var_typeName_13024 ;
            switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
            case 1: {
              var_typeName_13024 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 367)) ;
            } break ;
            case 2: {
              nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_13024, inCompiler) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_variableName_13210 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 371)) ;
            var_optionalMethodActualArgumentList_11826.addAssign_operation (var_selector_12419, GALGAS_optionalMethodActualArgument::class_func_actualVarInput (var_typeName_13024, var_variableName_13210  COMMA_SOURCE_FILE ("instruction-if.galgas", 372))  COMMA_SOURCE_FILE ("instruction-if.galgas", 372)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 374)) ;
            var_optionalMethodActualArgumentList_11826.addAssign_operation (var_selector_12419, GALGAS_optionalMethodActualArgument::class_func_actualInputJoker (GALGAS_bool (true), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 375)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("instruction-if.galgas", 375))  COMMA_SOURCE_FILE ("instruction-if.galgas", 375)) ;
          } break ;
          case 4: {
            GALGAS_lbigint var_repetitionCount_13545 = inCompiler->synthetizedAttribute_bigintValue () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 377)) ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 378)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (ComparisonKind::notEqual, var_selector_12419.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <FixItDescription> fixItArray3 ;
                appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("\?")) ;
                inCompiler->emitSemanticError (var_selector_12419.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 380)) ;
              }
            }
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (ComparisonKind::equal, var_repetitionCount_13545.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 382)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_repetitionCount_13545.readProperty_location (), GALGAS_string ("the repetition count should be > 0"), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 383)) ;
              }
            }
            cEnumerator_range enumerator_13900 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_repetitionCount_13545.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 385)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 385))), EnumerationOrder::up) ;
            while (enumerator_13900.hasCurrentObject ()) {
              var_optionalMethodActualArgumentList_11826.addAssign_operation (var_selector_12419, GALGAS_optionalMethodActualArgument::class_func_actualInputJoker (GALGAS_bool (false), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 386)), enumerator_13900.current (HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 386))  COMMA_SOURCE_FILE ("instruction-if.galgas", 386)) ;
              enumerator_13900.gotoNextObject () ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 390)) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::class_func_optionalMethodCall (var_receiverExpression_11707, var_optionalMethodName_11761, var_optionalMethodActualArgumentList_11826  COMMA_SOURCE_FILE ("instruction-if.galgas", 391))  COMMA_SOURCE_FILE ("instruction-if.galgas", 391)) ;
    } break ;
    case 3: {
      GALGAS_semanticExpressionAST var_expression_14352 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_14352, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::class_func_regularExp (var_expression_14352, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 398))  COMMA_SOURCE_FILE ("instruction-if.galgas", 398))  COMMA_SOURCE_FILE ("instruction-if.galgas", 398)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 401)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i28_parse (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 295)) ;
      switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 298)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 300)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 303)) ;
      nt_expression_5F_or_parse (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 314)) ;
        nt_type_5F_definition_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 324)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 325)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 327)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 331)) ;
          nt_expression_parse (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 337)) ;
          nt_expression_parse (inCompiler) ;
        } break ;
        case 4: {
          switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 346)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 348)) ;
          } break ;
          default:
            break ;
          }
          switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 352)) ;
            switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              nt_type_5F_definition_parse (inCompiler) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 359)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 364)) ;
            switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              nt_type_5F_definition_parse (inCompiler) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 371)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 374)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 377)) ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 378)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 390)) ;
    } break ;
    case 3: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 401)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 295)) ;
      switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 298)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 300)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 303)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 314)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 324)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 325)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 327)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 331)) ;
          nt_expression_indexing (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 337)) ;
          nt_expression_indexing (inCompiler) ;
        } break ;
        case 4: {
          switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 346)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 348)) ;
          } break ;
          default:
            break ;
          }
          switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 352)) ;
            switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              nt_type_5F_definition_indexing (inCompiler) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 359)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 364)) ;
            switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              nt_type_5F_definition_indexing (inCompiler) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 371)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 374)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 377)) ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 378)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 390)) ;
    } break ;
    case 3: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 401)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
  GALGAS_lstring var_typeName_4242 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4242, inCompiler) ;
  GALGAS_lstring var_constantName_4273 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::init_21__21__21_ (var_typeName_4242.readProperty_location (), var_typeName_4242, var_constantName_4273, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 111)) ;
    GALGAS_semanticExpressionAST var_sourceExpression_4515 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4515, inCompiler) ;
    outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_4242.readProperty_location (), GALGAS_bool (true), var_typeName_4242, var_constantName_4273, var_sourceExpression_4515, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 111)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 111)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
  GALGAS_lstring var_variableName_5025 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 129)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_5108 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_5108, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_5025.readProperty_location (), var_variableName_5025, var_sourceExpression_5108, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 129)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 129)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 85)) ;
  GALGAS_location var_instructionLocation_3395 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 86)) ;
  GALGAS_logListAST var_logList_3452 = GALGAS_logListAST::class_func_emptyList (SOURCE_FILE ("instruction-log.galgas", 87)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_3516 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 90)) ;
      var_logList_3452.addAssign_operation (var_loggedVariableName_3516, GALGAS_varInExpressionAST::init_21_ (var_loggedVariableName_3516, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas", 91)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 94)) ;
      GALGAS_lstring var_propertyName_3679 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 95)) ;
      var_logList_3452.addAssign_operation (var_propertyName_3679, GALGAS_structPropertyAccessExpressionAST::init_21__21__21_ (var_propertyName_3679.readProperty_location (), GALGAS_selfInExpressionAST::init_21_ (var_propertyName_3679.readProperty_location (), inCompiler COMMA_HERE), var_propertyName_3679, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas", 96)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_logMessage_3898 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 100)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 101)) ;
      GALGAS_semanticExpressionAST var_logExpression_3964 ;
      nt_expression_ (ioArgument_ioDeclarations, var_logExpression_3964, inCompiler) ;
      var_logList_3452.addAssign_operation (var_logMessage_3898, var_logExpression_3964  COMMA_SOURCE_FILE ("instruction-log.galgas", 103)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_57 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::init_21__21_ (var_instructionLocation_3395, var_logList_3452, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 90)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 94)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 95)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 100)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 101)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_57 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 90)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 94)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 95)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 100)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 101)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_57 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 89)) ;
  GALGAS_location var_instructionLocation_3901 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 92)) ;
  GALGAS_semanticExpressionAST var_variantExpression_4023 ;
  nt_expression_ (ioArgument_ioDeclarations, var_variantExpression_4023, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_4049 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 95)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_4186 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_4186, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_4219 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 100)) ;
  GALGAS_semanticExpressionAST var_loopExpression_4333 ;
  nt_expression_ (ioArgument_ioDeclarations, var_loopExpression_4333, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_4356 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 103)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_4484 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_4484, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_4511 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 106)) ;
  GALGAS_location var_endOfLoopInstruction_4570 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 107)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithVariantAST::init_21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_3901, var_variantExpression_4023, var_endOfVariantExpression_4049, var_firstInstructions_4186, var_endOfFirstInstructions_4219, var_loopExpression_4333, var_endOfLoopExpression_4356, var_secondInstructions_4484, var_endOfSecondInstructions_4511, var_endOfLoopInstruction_4570, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 92)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 95)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 100)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 103)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 92)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 95)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 100)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 103)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 79)) ;
  GALGAS_location var_instructionLocation_3579 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 80)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_3698 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_3698, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_3731 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 84)) ;
  GALGAS_semanticExpressionAST var_loopExpression_3845 ;
  nt_expression_ (ioArgument_ioDeclarations, var_loopExpression_3845, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_3868 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 87)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_3996 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_3996, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_4023 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 90)) ;
  GALGAS_location var_endOfLoopInstruction_4082 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 91)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithoutVariantAST::init_21__21__21__21__21__21__21__21_ (var_instructionLocation_3579, var_firstInstructions_3698, var_endOfFirstInstructions_3731, var_loopExpression_3845, var_endOfLoopExpression_3868, var_secondInstructions_3996, var_endOfSecondInstructions_4023, var_endOfLoopInstruction_4082, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 79)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 84)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 87)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 90)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 79)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 84)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 87)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas", 54)) ;
  GALGAS_location var_instructionLocation_2376 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas", 56)) ;
  GALGAS_actualOutputArgumentList var_actualParameterList_2472 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_actualParameterList_2472, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas", 58)) ;
  outArgument_outInstruction = GALGAS_superInitInstructionAST::init_21__21_ (var_instructionLocation_2376, var_actualParameterList_2472, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas", 56)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas", 56)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 58)) ;
  GALGAS_location var_instructionLocation_2679 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 60)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2786 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_2786, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::init_21__21_ (var_instructionLocation_2679, var_sourceExpression_2786, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 60)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 60)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 153)) ;
  GALGAS_location var_instructionLocation_6312 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 155)) ;
  GALGAS_semanticExpressionAST var_expression_6420 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_6420, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_6312, var_expression_6420, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 155)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 155)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
  GALGAS_location var_instructionLocation_6809 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
  GALGAS_semanticExpressionAST var_expression_6917 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_6917, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_6809, var_expression_6917, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 181)) ;
  GALGAS_location var_instructionLocation_7307 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 182)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
  GALGAS_semanticExpressionAST var_expression_7415 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_7415, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_7307, var_expression_7415, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 181)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 181)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 195)) ;
  GALGAS_location var_instructionLocation_7803 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 196)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 197)) ;
  GALGAS_semanticExpressionAST var_expression_7911 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_7911, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_7803, var_expression_7911, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 195)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 197)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 195)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 197)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_5587 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 158)) ;
  GALGAS_bool var_prefixedBySelf_5647 ;
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_5647 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 163)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)) ;
    var_prefixedBySelf_5647 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mReceiverName_5790 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 167)) ;
  switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
    GALGAS_actualParameterListAST var_actualParameterList_5910 ;
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_5910, inCompiler) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_prefixedBySelf_5647.boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::init_21__21__21_ (var_instructionLocation_5587, var_mReceiverName_5790, var_actualParameterList_5910, inCompiler COMMA_HERE) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_instructionLocation_5587, GALGAS_string ("invalid setter call"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 177)) ;
      outArgument_outInstruction.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    GALGAS_lstringlist var_receiverStructProperties_6226 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 180)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 182)) ;
      GALGAS_lstring var_structProperty_6321 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 183)) ;
      var_receiverStructProperties_6226.addAssign_operation (var_structProperty_6321  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 184)) ;
      if (select_galgas_34_InstructionsSyntax_61 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GALGAS_lstring var_setterName_6457 ;
    {
    var_receiverStructProperties_6226.setter_popLast (var_setterName_6457, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 187)) ;
    }
    GALGAS_actualParameterListAST var_actualParameterList_6564 ;
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_6564, inCompiler) ;
    outArgument_outInstruction = GALGAS_setterCallInstructionAST::init_21__21__21__21__21__21__21_ (var_instructionLocation_5587, var_prefixedBySelf_5647, var_mReceiverName_5790, var_receiverStructProperties_6226, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 194)), var_setterName_6457, var_actualParameterList_6564, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 158)) ;
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 163)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 167)) ;
  switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 182)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 183)) ;
      if (select_galgas_34_InstructionsSyntax_61 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 158)) ;
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 163)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 167)) ;
  switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 182)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 183)) ;
      if (select_galgas_34_InstructionsSyntax_61 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 144)) ;
  GALGAS_location var_instructionLocation_5446 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 145)) ;
  GALGAS_semanticExpressionAST var_switchExpression_5522 ;
  nt_expression_ (ioArgument_ioDeclarations, var_switchExpression_5522, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_5547 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  GALGAS_switchBranchesAST var_switchBranches_5613 = GALGAS_switchBranchesAST::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 150)) ;
    GALGAS_lstringlist var_constantNameList_5729 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_5789 ;
    nt_switch_5F_case_ (ioArgument_ioDeclarations, var_constantNameList_5729, var_associatedValuesExtraction_5789, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 155)) ;
    GALGAS_semanticInstructionListAST var_instructions_5882 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructions_5882, inCompiler) ;
    var_switchBranches_5613.addAssign_operation (var_constantNameList_5729, var_associatedValuesExtraction_5789, var_instructions_5882, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 157))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)) ;
    if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)) ;
  GALGAS_location var_endOfSwitchInstruction_6031 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
  outArgument_outInstruction = GALGAS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_5446, var_switchExpression_5522, var_endOfSwitchExpression_5547, var_switchBranches_5613, var_endOfSwitchInstruction_6031, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 144)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 150)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 155)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 144)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 150)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 155)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i42_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 176)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_6632 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_6632  COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
    if (select_galgas_34_InstructionsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 183)) ;
  switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
      case 1: {
        GALGAS_lbigint var_n_6840 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)) ;
        cEnumerator_range enumerator_6883 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_n_6840.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 191)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 191))), EnumerationOrder::up) ;
        while (enumerator_6883.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 192)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 192)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
          enumerator_6883.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 196)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 196)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_7126 ;
        switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_7126, inCompiler) ;
        } break ;
        case 2: {
          var_typeName_7126 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 202)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_7292 ;
        switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_7292 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
          var_constantMarkedAsUnused_7292 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_7502 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_7126, var_constantName_7502, var_constantMarkedAsUnused_7292  COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_65 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i42_parse (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)) ;
    if (select_galgas_34_InstructionsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_parse (inCompiler) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_65 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)) ;
    if (select_galgas_34_InstructionsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_65 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_2903 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 64)) ;
  GALGAS_lstring var_mTypeName_2966 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 66)) ;
  GALGAS_lstring var_mMethodName_3050 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 67)) ;
  GALGAS_actualParameterListAST var_actualParameterList_3155 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_3155, inCompiler) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2903, var_mTypeName_2966, var_mMethodName_3050, var_actualParameterList_3155, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 67)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 67)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 127)) ;
  GALGAS_lstring var_variableName_5443 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 129)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_5526 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_5526, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_5443.readProperty_location (), var_variableName_5443, var_sourceExpression_5526, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 129)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 129)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 142)) ;
  GALGAS_lstring var_typeName_5988 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_5988, inCompiler) ;
  GALGAS_lstring var_variableName_6019 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 144)) ;
  switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GALGAS_localVariableDeclarationNoAssignmentAST::init_21__21__21_ (var_typeName_5988.readProperty_location (), var_typeName_5988, var_variableName_6019, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 148)) ;
    GALGAS_semanticExpressionAST var_sourceExpression_6233 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_6233, inCompiler) ;
    outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_5988.readProperty_location (), GALGAS_bool (false), var_typeName_5988, var_variableName_6019, var_sourceExpression_6233, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 142)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 144)) ;
  switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 148)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 142)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 144)) ;
  switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 148)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 64)) ;
  GALGAS_location var_instructionLocation_2971 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 65)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_3070 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_3070, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 67)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_3160 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mWarningExpression_3160, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_3233 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_3233, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::init_21__21__21__21_ (var_instructionLocation_2971, var_mReceiverExpression_3070, var_mWarningExpression_3160, var_fixitListAST_3233, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 64)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 67)) ;
  nt_expression_parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 64)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 67)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 213)) ;
  GALGAS_location var_instructionLocation_8424 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 214)) ;
  GALGAS_semanticExpressionAST var_keyExpression_8523 ;
  nt_expression_ (ioArgument_ioDeclarations, var_keyExpression_8523, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_8545 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 216)) ;
  GALGAS_lstring var_withPrefix_8598 ;
  switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
    var_withPrefix_8598 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 219)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 221)) ;
    var_withPrefix_8598 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 222)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 224)) ;
  nt_with_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instructionLocation_8424, var_keyExpression_8523, var_endOfKeyExpression_8545, var_withPrefix_8598, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 226)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 213)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 221)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 222)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 224)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 226)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 213)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 221)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 222)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 224)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 226)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i48_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_9459 ;
  nt_expression_ (ioArgument_ioDeclarations, var_receiverExpression_9459, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_9486 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 238)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_9544 ;
  switch (select_galgas_34_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_9544 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 241)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 243)) ;
    var_searchMethodNameForErrorSignaling_9544 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 244)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 246)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_9826 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mDoBranchInstructions_9826, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_9856 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 248)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_9929 ;
  switch (select_galgas_34_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_9929 = GALGAS_semanticInstructionListAST::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 251)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 253)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, var_searchMethodNameForErrorSignaling_9544.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_9544.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 255)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mElseBranchInstructions_9929, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_9459, var_endOfReceiverExpression_9486, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_9544, var_mDoBranchInstructions_9826, var_endOfDoInstructions_9856, var_mElseBranchInstructions_9929, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 270)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i48_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 243)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 244)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 246)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 253)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i48_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 243)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 244)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 246)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 253)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i49_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 284)) ;
  GALGAS_lstringlist var_structAttributeList_11043 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 285)) ;
  GALGAS_bool var_targetIsPrefixedBySelf_11096 ;
  GALGAS_lstring var_targetObjectName_11136 ;
  switch (select_galgas_34_InstructionsSyntax_73 (inCompiler)) {
  case 1: {
    var_targetIsPrefixedBySelf_11096 = GALGAS_bool (false) ;
    var_targetObjectName_11136 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 290)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_InstructionsSyntax_74 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 293)) ;
        GALGAS_lstring var_mStructFieldName_11301 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 294)) ;
        var_structAttributeList_11043.addAssign_operation (var_mStructFieldName_11301  COMMA_SOURCE_FILE ("instruction-with.galgas", 295)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    var_targetIsPrefixedBySelf_11096 = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 299)) ;
    switch (select_galgas_34_InstructionsSyntax_75 (inCompiler)) {
    case 1: {
      var_targetObjectName_11136 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 301)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 303)) ;
      var_targetObjectName_11136 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 304)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_34_InstructionsSyntax_76 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 307)) ;
          GALGAS_lstring var_mStructFieldName_11614 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) ;
          var_structAttributeList_11043.addAssign_operation (var_mStructFieldName_11614  COMMA_SOURCE_FILE ("instruction-with.galgas", 309)) ;
        }else{
          repeatFlag_1 = false ;
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
  GALGAS_location var_endOfReceiverExpression_11720 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 313)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_11778 ;
  switch (select_galgas_34_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_11778 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 316)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 318)) ;
    var_searchMethodNameForErrorSignaling_11778 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 319)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 321)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_12060 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mDoBranchInstructions_12060, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_12090 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 323)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_12165 ;
  switch (select_galgas_34_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_12165 = GALGAS_semanticInstructionListAST::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 326)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 328)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::notEqual, var_searchMethodNameForErrorSignaling_11778.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_11778.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray3  COMMA_SOURCE_FILE ("instruction-with.galgas", 330)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mElseBranchInstructions_12165, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_12518 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 334)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_targetObjectName_11136, var_targetIsPrefixedBySelf_11096, var_structAttributeList_11043, var_endOfReceiverExpression_11720, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_11778, var_mDoBranchInstructions_12060, var_endOf_5F_do_5F_instructions_12090, var_mElseBranchInstructions_12165, var_endOf_5F_else_5F_instructions_12518, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i49_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 284)) ;
  switch (select_galgas_34_InstructionsSyntax_73 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 290)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_InstructionsSyntax_74 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 293)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 294)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 299)) ;
    switch (select_galgas_34_InstructionsSyntax_75 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 303)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 304)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_34_InstructionsSyntax_76 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 307)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) ;
        }else{
          repeatFlag_1 = false ;
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
  switch (select_galgas_34_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 318)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 319)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 321)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 328)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i49_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 284)) ;
  switch (select_galgas_34_InstructionsSyntax_73 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 290)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_InstructionsSyntax_74 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 293)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 294)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 299)) ;
    switch (select_galgas_34_InstructionsSyntax_75 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 303)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 304)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_34_InstructionsSyntax_76 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 307)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) ;
        }else{
          repeatFlag_1 = false ;
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
  switch (select_galgas_34_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 318)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 319)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 321)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 328)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_AccessControlAST var_accessControl_11492 ;
  nt_acces_5F_control_ (var_accessControl_11492, inCompiler) ;
  GALGAS_bool var_isConstant_11520 ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 304)) ;
    var_isConstant_11520 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 307)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_11492, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 308)) ;
    var_isConstant_11520 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_11729 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_propertyTypeName_11729, inCompiler) ;
  GALGAS_lstring var_propertyName_11768 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 312)) ;
  GALGAS_bool var_selectorAttribute_11789 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 316)) ;
      var_selectorAttribute_11789 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_propertyInCollectionInitializationAST var_initialization_11940 ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
    var_initialization_11940 = GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 321)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 323)) ;
    GALGAS_semanticExpressionAST var_expression_12053 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_12053, inCompiler) ;
    var_initialization_11940 = GALGAS_propertyInCollectionInitializationAST::class_func_some (var_expression_12053  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 325)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_isConstant_11520, var_propertyTypeName_11729, var_propertyName_11768, var_accessControl_11492, var_selectorAttribute_11789, var_initialization_11940  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 327)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 304)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 307)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 312)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 316)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 323)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 304)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 307)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 312)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 316)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 323)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  GALGAS_lstring var_mFilewrapperName_12677 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
  GALGAS_lstring var_mFilewrapperPath_12763 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 344)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_12814 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_12814, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_12883 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_12883, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_12968 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_12968, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 351)), var_mFilewrapperName_12677, var_mFilewrapperPath_12763, var_filewrapperTextFileExtensionList_12814, var_filewrapperBinaryFileExtensionList_12883, var_filewrapperTemplateList_12968, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 348)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 344)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 344)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 363)) ;
  GALGAS_lstring var_mFilewrapperName_13567 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 364)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 365)) ;
  GALGAS_lstring var_mFilewrapperPath_13653 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 366)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_13704 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_13704, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_13773 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_13773, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_13858 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_13858, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), GALGAS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 373)), var_mFilewrapperName_13567, var_mFilewrapperPath_13653, var_filewrapperTextFileExtensionList_13704, var_filewrapperBinaryFileExtensionList_13773, var_filewrapperTemplateList_13858, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 370)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 363)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 364)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 365)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 366)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 363)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 364)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 365)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 366)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 385)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 386)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_14534 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 390)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_14534  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 391)) ;
      if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 393)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 396)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 386)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 390)) ;
      if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 393)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 396)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 386)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 390)) ;
      if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 393)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 396)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_14973 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 407)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_14973  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 408)) ;
      if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 410)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 413)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 407)) ;
      if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 410)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 413)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 407)) ;
      if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 410)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 413)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 420)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::class_func_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 421)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 424)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_15472 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 425)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 426)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_15529 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 427)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_15601 = GALGAS_formalTemplateInputParameterListAST::class_func_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 428)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 429)) ;
      switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          GALGAS_lstring var_selector_15718 ;
          switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
          case 1: {
            var_selector_15718 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 435)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 437)) ;
            var_selector_15718 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 438)) ;
          } break ;
          case 3: {
            var_selector_15718 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 440)) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_typeName_15957 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_15957, inCompiler) ;
          GALGAS_bool var_isUnused_15986 ;
          switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
            var_isUnused_15986 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 447)) ;
            var_isUnused_15986 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_16145 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 450)) ;
          var_filewrapperTemplateFormalInputParameters_15601.addAssign_operation (var_selector_15718, var_typeName_15957, var_argumentName_16145, var_isUnused_15986  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 451)) ;
          if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 453)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 456)) ;
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_15472, var_mFilewrapperTemplatePath_15529, var_filewrapperTemplateFormalInputParameters_15601  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 457)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 462)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 420)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 424)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 425)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 426)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 427)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 429)) ;
      switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 437)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 440)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_parse (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 447)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 450)) ;
          if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 453)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 456)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 462)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 420)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 424)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 425)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 426)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 427)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 429)) ;
      switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 437)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 440)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 447)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 450)) ;
          if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 453)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 456)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 462)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 65)) ;
  GALGAS_lstring var_boolsetTypeName_2685 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 67)) ;
  GALGAS_lstringlist var_slotList_2756 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_slotName_2806 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 70)) ;
    var_slotList_2756.addAssign_operation (var_slotName_2806  COMMA_SOURCE_FILE ("type-boolset.galgas", 71)) ;
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 75)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_boolsetDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (false), var_boolsetTypeName_2685, var_slotList_2756, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-boolset.galgas", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 65)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 70)) ;
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 75)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 65)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 70)) ;
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_bool var_isAbstract_3802 ;
  switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
    var_isAbstract_3802 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 113)) ;
    var_isAbstract_3802 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
  GALGAS_lstring var_className_3943 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
  GALGAS_lstring var_superClassName_3995 ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    var_superClassName_3995 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 120)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 122)) ;
    var_superClassName_3995 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 123)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_generateInSeparateFile_4190 ;
  switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_4190 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
    var_generateInSeparateFile_4190 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 132)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_4414 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 134)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_4414, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_className_3943, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 141)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::init_21_isPredefined_21__21__21__21__21__21_ (GALGAS_bool (false), var_isAbstract_3802, GALGAS_bool (true), var_className_3943, var_superClassName_3995, var_generateInSeparateFile_4190, var_propertyList_4414, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 142)) ;
  GALGAS_lstring temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, var_superClassName_3995.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_superClassName_3995 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_lstring::init_21__21_ (var_superClassName_3995.readProperty_string ().add_operation (GALGAS_string ("-weak"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 158)), var_superClassName_3995.readProperty_location (), inCompiler COMMA_HERE) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_weakReferenceDeclarationAST::init_21_isPredefined_21__21__21__21__21_ (GALGAS_bool (false), var_className_3943, GALGAS_lstring::init_21__21_ (var_className_3943.readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 155)), var_className_3943.readProperty_location (), inCompiler COMMA_HERE), temp_1, var_generateInSeparateFile_4190, var_propertyList_4414, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 113)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 122)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 123)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 132)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 141)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 113)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 122)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 123)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 132)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 141)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 88)) ;
  GALGAS_lstring var_mEnumTypeName_3402 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 90)) ;
  GALGAS_enumConstantList var_mConstantList_3474 = GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 91)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
    GALGAS_lstring var_constantName_3542 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_3579 = GALGAS__32_lstringlist::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 95)) ;
    switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 98)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_3708 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedValueType_3708, inCompiler) ;
        GALGAS_lstring var_associatedValueName_3756 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 101)) ;
        var_associatedValueTypeList_3579.addAssign_operation (var_associatedValueType_3708, var_associatedValueName_3756  COMMA_SOURCE_FILE ("type-enum.galgas", 102)) ;
        if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_3474.addAssign_operation (var_constantName_3542, var_associatedValueTypeList_3579  COMMA_SOURCE_FILE ("type-enum.galgas", 107)) ;
    if (select_galgas_34_DeclarationsSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_method_5F_declaration_ (var_mEnumTypeName_3402, ioArgument_ioDeclarations, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 114)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (false), var_mEnumTypeName_3402, var_mConstantList_3474, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 88)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
    switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 98)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_type_5F_definition_parse (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 101)) ;
        if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_DeclarationsSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_method_5F_declaration_parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 114)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 88)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
    switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 98)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 101)) ;
        if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_DeclarationsSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_method_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 220)) ;
  GALGAS_lstring var_externTypeName_8768 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 221)) ;
  GALGAS_string var_cppPredeclarationCode_8854 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_8854, inCompiler) ;
  GALGAS_string var_cppClassCode_8919 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_8919, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 224)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_8975 = GALGAS_externTypeConstructorList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 225)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_9038 = GALGAS_externTypeGetterList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 226)) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_9095 = GALGAS_externTypeSetterList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 227)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_9152 = GALGAS_externTypeMethodList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 228)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (ioArgument_ioDeclarations, var_externTypeConstructorList_8975, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (ioArgument_ioDeclarations, var_externTypeGetterList_9038, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (ioArgument_ioDeclarations, var_externTypeSetterList_9095, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (ioArgument_ioDeclarations, var_externTypeMethodList_9152, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 239)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GALGAS_bool (false), var_externTypeName_8768, var_cppPredeclarationCode_8854, var_cppClassCode_8919, var_externTypeConstructorList_8975, var_externTypeGetterList_9038, var_externTypeSetterList_9095, var_externTypeMethodList_9152, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 240)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 220)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 221)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 224)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 239)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 220)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 221)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 224)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 239)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 255)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_23 (inCompiler) == 2) {
      GALGAS_lstring var_cppPredeclarationCodeElement_10104 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_10104.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 260)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 262)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 255)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 262)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 255)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 262)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 268)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      GALGAS_lstring var_cppPredeclarationCodeElement_10477 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_10477.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 275)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 268)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 275)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 268)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 275)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i13_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("type-extern.galgas", 282)) ;
  GALGAS_lstring var_constructorName_10892 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 283)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_10949 = GALGAS_typeNameFormalParameterNameList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 284)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_11017 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 287)) ;
      GALGAS_lstring var_argumentTypeName_11072 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_11072, inCompiler) ;
      GALGAS_lstring var_argumentName_11122 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 289)) ;
      var_argumentTypeList_10949.addAssign_operation (var_selector_11017, var_argumentTypeName_11072, var_argumentName_11122  COMMA_SOURCE_FILE ("type-extern.galgas", 290)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
      GALGAS_lstring var_selector_11233 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 293)) ;
      GALGAS_lstring var_argumentTypeName_11300 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_11300, inCompiler) ;
      GALGAS_lstring var_argumentName_11350 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 295)) ;
      var_argumentTypeList_10949.addAssign_operation (var_selector_11233, var_argumentTypeName_11300, var_argumentName_11350  COMMA_SOURCE_FILE ("type-extern.galgas", 296)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 298)) ;
  GALGAS_lstring var_resultTypeName_11492 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_11492, inCompiler) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_constructorName_10892, var_resultTypeName_11492, var_argumentTypeList_10949  COMMA_SOURCE_FILE ("type-extern.galgas", 300)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("type-extern.galgas", 282)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 283)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 287)) ;
      nt_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 289)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
      nt_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 295)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 298)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("type-extern.galgas", 282)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 283)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 287)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 289)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 295)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 298)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i14_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("type-extern.galgas", 307)) ;
  GALGAS_lstring var_getterName_11882 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 308)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_11934 = GALGAS_typeNameFormalParameterNameList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 309)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_12002 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 312)) ;
      GALGAS_lstring var_argumentTypeName_12057 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_12057, inCompiler) ;
      GALGAS_lstring var_argumentName_12107 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 314)) ;
      var_argumentTypeList_11934.addAssign_operation (var_selector_12002, var_argumentTypeName_12057, var_argumentName_12107  COMMA_SOURCE_FILE ("type-extern.galgas", 315)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 317)) ;
      GALGAS_lstring var_selector_12218 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 318)) ;
      GALGAS_lstring var_argumentTypeName_12285 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_12285, inCompiler) ;
      GALGAS_lstring var_argumentName_12335 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 320)) ;
      var_argumentTypeList_11934.addAssign_operation (var_selector_12218, var_argumentTypeName_12285, var_argumentName_12335  COMMA_SOURCE_FILE ("type-extern.galgas", 321)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 323)) ;
  GALGAS_lstring var_resultTypeName_12477 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_12477, inCompiler) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_11882, var_resultTypeName_12477, var_argumentTypeList_11934  COMMA_SOURCE_FILE ("type-extern.galgas", 325)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("type-extern.galgas", 307)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 308)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 312)) ;
      nt_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 314)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 317)) ;
      nt_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 320)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 323)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("type-extern.galgas", 307)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 308)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 312)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 314)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 317)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 320)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 323)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i15_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("type-extern.galgas", 332)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("type-extern.galgas", 333)) ;
  GALGAS_lstring var_setterName_12877 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 334)) ;
  GALGAS_formalParameterListAST var_formalParameterList_12962 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_12962, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_12877, var_formalParameterList_12962  COMMA_SOURCE_FILE ("type-extern.galgas", 336)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("type-extern.galgas", 332)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("type-extern.galgas", 333)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 334)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("type-extern.galgas", 332)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("type-extern.galgas", 333)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 334)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i16_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("type-extern.galgas", 343)) ;
  GALGAS_lstring var_methodName_13334 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 344)) ;
  GALGAS_formalParameterListAST var_formalParameterList_13419 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_13419, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_13334, var_formalParameterList_13419, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 346))  COMMA_SOURCE_FILE ("type-extern.galgas", 346)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("type-extern.galgas", 343)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 344)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("type-extern.galgas", 343)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 344)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  GALGAS_lstring var_graphTypeName_3232 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 81)) ;
  GALGAS_lstring var_associatedListTypeName_3323 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedListTypeName_3323, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 84)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_3370 = GALGAS_graphInsertModifierList::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-graph.galgas", 88)) ;
      GALGAS_lstring var_insertName_3501 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-graph.galgas", 90)) ;
      GALGAS_lstring var_errorMessage_3565 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
      var_graphInsertModifierList_3370.addAssign_operation (var_insertName_3501, var_errorMessage_3565  COMMA_SOURCE_FILE ("type-graph.galgas", 92)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 94)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_graphTypeName_3232, var_associatedListTypeName_3323, var_graphInsertModifierList_3370, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 81)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-graph.galgas", 88)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-graph.galgas", 90)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 94)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 81)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-graph.galgas", 88)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-graph.galgas", 90)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 79)) ;
  GALGAS_lstring var_listTypeName_3187 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 80)) ;
  GALGAS_bool var_isUsefull_3261 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_3261.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 86)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 86)) ;
        }
      }
      var_isUsefull_3261 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 90)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_3488 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 91)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_3488, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_listTypeName_3187, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 98)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList (GALGAS_bool (false), var_listTypeName_3187, var_propertyList_3488, var_isUsefull_3261, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 99)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 79)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 80)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 90)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 98)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 79)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 80)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 90)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 59)) ;
  GALGAS_lstring var_mListmapTypeName_2648 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 61)) ;
  GALGAS_lstring var_associatedListTypeName_2744 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedListTypeName_2744, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 63)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (false), var_mListmapTypeName_2648, var_associatedListTypeName_2744, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 59)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 61)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 63)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 59)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 61)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 78)) ;
  GALGAS_lstring var_mDictTypeName_3214 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 82)) ;
  GALGAS_lstring var_keyTypeName_3358 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_keyTypeName_3358, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 85)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_3408 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_3408, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_mDictTypeName_3214, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_mDictTypeName_3214, var_keyTypeName_3358, var_propertyList_3408, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 78)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 82)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 78)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 82)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 172)) ;
  GALGAS_lstring var_mapTypeName_6550 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 174)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 176)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_6652 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 177)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_6708 = GALGAS_insertMethodListAST::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 178)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_6785 = GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 179)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_6841 = GALGAS_mapRemoveMethodListAST::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 180)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_6908 = GALGAS_insertOrReplaceDeclarationListAST::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 181)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_6652, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_6708, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_6785, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_6841, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_6908, inCompiler) ;
    } break ;
    case 7: {
      nt_method_5F_declaration_ (var_mapTypeName_6550, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 196)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::init_21_isPredefined_21__21__21__21__21__21_ (GALGAS_bool (false), var_mapTypeName_6550, var_propertyList_6652, var_mInsertMethodList_6708, var_mSearchMethodList_6785, var_mRemoveMethodList_6841, var_insertOrReplaceDeclarationListAST_6908, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 197)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 172)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 174)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 176)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
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
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 196)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 172)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 174)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 176)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
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
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 196)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("type-map.galgas", 211)) ;
  GALGAS_lstring var_methodName_7887 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 212)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 213)) ;
  GALGAS_lstring var_errorMessage_7947 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 214)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_7887, var_errorMessage_7947  COMMA_SOURCE_FILE ("type-map.galgas", 215)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("type-map.galgas", 211)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 212)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 213)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 214)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("type-map.galgas", 211)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 212)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 213)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 214)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("type-map.galgas", 221)) ;
  GALGAS_lstring var_mMethodName_8276 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 222)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 223)) ;
  GALGAS_lstring var_mErrorMessage_8337 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 224)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_8276, var_mErrorMessage_8337  COMMA_SOURCE_FILE ("type-map.galgas", 225)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("type-map.galgas", 221)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 222)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 223)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 224)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("type-map.galgas", 221)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 222)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 223)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 224)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("type-map.galgas", 231)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 232))  COMMA_SOURCE_FILE ("type-map.galgas", 232)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("type-map.galgas", 231)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("type-map.galgas", 231)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  GALGAS_lstring var_mMethodName_8954 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 239)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  GALGAS_lstring var_mErrorMessage_9015 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 241)) ;
  GALGAS_lstring var_mShadowErrorMessage_9046 ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_9046 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 244)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 246)) ;
    var_mShadowErrorMessage_9046 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_8954, var_mErrorMessage_9015, var_mShadowErrorMessage_9046  COMMA_SOURCE_FILE ("type-map.galgas", 249)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 239)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 241)) ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 246)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 239)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 241)) ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 246)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
  GALGAS_lstring var_sortedListTypeName_3703 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 96)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_3826 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 98)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_33 (inCompiler) == 2) {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_attributeList_3826, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 104)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_3995 = GALGAS_sortedListSortDescriptorListAST::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 105)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_3995, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 109)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 111)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_sortedListTypeName_3703, var_attributeList_3826, var_sortDescriptorList_3995, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 96)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_33 (inCompiler) == 2) {
      nt_property_5F_declaration_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 104)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 109)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 111)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 96)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_33 (inCompiler) == 2) {
      nt_property_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 104)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 109)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 111)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i27_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_4558 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 123)) ;
  GALGAS_bool var_mAscending_4593 ;
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 126)) ;
    var_mAscending_4593 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 129)) ;
    var_mAscending_4593 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_4558, var_mAscending_4593  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 132)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i27_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 123)) ;
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 126)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 123)) ;
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 126)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 55)) ;
  GALGAS_lstring var_structTypeName_2327 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 57)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2413 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 58)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_2413, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_structTypeName_2327, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 65)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_structTypeName_2327, var_propertyList_2413, GALGAS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 55)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 65)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 55)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 117)) ;
  GALGAS_lstring var_aliasTypeName_4447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 119)) ;
  GALGAS_lstring var_definedTypeName_4552 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_definedTypeName_4552, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_typealiasDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (false), var_aliasTypeName_4447, var_definedTypeName_4552, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 121)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 117)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 119)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 117)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 119)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i30_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i30_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i31_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 141)) ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  TC_Array <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 143)), GALGAS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 144)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i31_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 141)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 144)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 141)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 144)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i32_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 151)) ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 153)) ;
  GALGAS_lstring joker_5745 ; // Joker input parameter
  nt_type_5F_definition_ (ioArgument_ioDeclarations, joker_5745, inCompiler) ;
  joker_5745.drop () ; // Release temporary input variables (joker in source)
  TC_Array <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 155)), GALGAS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 155)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 156)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i32_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 151)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 153)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 156)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 151)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 153)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 156)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i33_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 164)) ;
  TC_Array <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 165)), GALGAS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i33_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 164)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 164)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 173)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_t_6442 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_t_6442, inCompiler) ;
    TC_Array <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_t_6442.readProperty_location (), GALGAS_string ("not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 176)) ;
    if (select_galgas_34_DeclarationsSyntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 178)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 180)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 173)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_parse (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 178)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 180)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 173)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 178)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 180)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i35_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 187)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 191)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 193)), GALGAS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 193)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 194)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i35_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 187)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_parse (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 191)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 194)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 187)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 191)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 194)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i36_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 94)) ;
  GALGAS_lstring var_className_4058 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 96)) ;
  GALGAS_lstring var_mGetterName_4144 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 97)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_4284 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_4284, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 99)) ;
  GALGAS_lstring var_returnedTypeName_4363 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4363, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_4423 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 103)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_4423.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), var_className_4058, var_mGetterName_4144, var_mFormalInputParameterList_4284, var_returnedTypeName_4363, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i36_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 94)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 96)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 97)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 99)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 94)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 96)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 97)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 99)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i37_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 119)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 120)) ;
  GALGAS_lstring var_mGetterName_5007 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_5147 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_5147, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 123)) ;
  GALGAS_lstring var_returnedTypeName_5226 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5226, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_5286 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 127)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_5286.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_5007, var_mFormalInputParameterList_5147, var_returnedTypeName_5226, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 130)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i37_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 119)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 120)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 123)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 119)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 120)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 123)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 77)) ;
  GALGAS_lstring var_className_3485 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 79)) ;
  GALGAS_lstring var_mMethodName_3580 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 80)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3709 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3709, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_className_3485, var_mMethodName_3580, var_formalParameterList_3709, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 77)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 79)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 80)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 77)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 79)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 80)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i39_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 95)) ;
  GALGAS_lstring var_mMethodName_4200 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 96)) ;
  GALGAS_formalParameterListAST var_formalParameterList_4329 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4329, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_4200, var_formalParameterList_4329, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i39_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 95)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 96)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 95)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 96)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 98)) ;
  GALGAS_lstring var_className_4193 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 100)) ;
  GALGAS_lstring var_mMethodName_4280 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 101)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_4383 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_4383, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 103)) ;
  GALGAS_lstring var_returnedTypeName_4462 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4462, inCompiler) ;
  GALGAS_lstring var_resultVariableName_4496 ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    var_resultVariableName_4496 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 107)) ;
  } break ;
  case 2: {
    var_resultVariableName_4496 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 109)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 111)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4722 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4722, inCompiler) ;
  GALGAS_location var_endOfInstructionList_4763 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 114)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), var_className_4193, var_mMethodName_4280, var_mFormalInputParameterList_4383, var_returnedTypeName_4462, var_resultVariableName_4496, var_routineInstructionList_4722, var_endOfInstructionList_4763, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 98)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 100)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 101)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 103)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 107)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 111)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 114)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 98)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 100)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 101)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 103)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 107)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 111)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 132)) ;
  GALGAS_lstring var_mMethodName_5417 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 133)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_5520 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_5520, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 135)) ;
  GALGAS_lstring var_returnedTypeName_5599 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5599, inCompiler) ;
  GALGAS_lstring var_resultVariableName_5633 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 137)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 138)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_5769 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5769, inCompiler) ;
  GALGAS_location var_endOfInstructionList_5810 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 141)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_mMethodName_5417, var_mFormalInputParameterList_5520, var_returnedTypeName_5599, var_resultVariableName_5633, var_routineInstructionList_5769, var_endOfInstructionList_5810, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 142)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 132)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 133)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 135)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 138)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 141)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 132)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 133)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 135)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 138)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 141)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i42_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 77)) ;
  GALGAS_lstring var_className_3544 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 79)) ;
  GALGAS_lstring var_mMethodName_3631 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 80)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3752 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3752, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 82)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3862 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3862, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_3893 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 85)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), var_className_3544, var_mMethodName_3631, var_formalParameterList_3752, var_routineInstructionList_3862, var_endOfMethodLocation_3893, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i42_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 77)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 79)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 80)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 82)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 77)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 79)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 80)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 82)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 85)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 101)) ;
  GALGAS_lstring var_mMethodName_4489 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 102)) ;
  GALGAS_formalParameterListAST var_formalParameterList_4610 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4610, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 104)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4720 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4720, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_4751 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 106)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 107)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_mMethodName_4489, var_formalParameterList_4610, var_routineInstructionList_4720, var_endOfMethodLocation_4751, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 101)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 102)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 104)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 107)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 101)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 102)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 104)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i44_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 92)) ;
  GALGAS_lstring var_className_4263 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 94)) ;
  GALGAS_lstring var_setterName_4350 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 95)) ;
  GALGAS_formalParameterListAST var_formalParameterList_4470 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4470, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 97)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4580 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4580, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_4621 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 100)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), var_className_4263, var_setterName_4350, var_formalParameterList_4470, var_routineInstructionList_4580, var_endOfSetterLocation_4621, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i44_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 92)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 94)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 95)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 97)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 100)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 92)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 94)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 95)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 97)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 100)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 117)) ;
  GALGAS_lstring var_setterName_5252 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 118)) ;
  GALGAS_formalParameterListAST var_formalParameterList_5372 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_5372, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 120)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_5482 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5482, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_5523 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 123)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_setterName_5252, var_formalParameterList_5372, var_routineInstructionList_5482, var_endOfSetterLocation_5523, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 117)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 118)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 120)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 123)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 117)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 118)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 120)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 123)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 71)) ;
  GALGAS_lstring var_className_3042 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 72)) ;
  GALGAS_formalInputParameterListAST var_formalParameterList_3146 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3146, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 74)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3228 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3228, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 76)) ;
  GALGAS_location var_endOfMethodLocation_3267 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 77)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_initializerAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), var_className_3042, var_formalParameterList_3146, var_routineInstructionList_3228, var_endOfMethodLocation_3267, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 71)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 72)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 74)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 71)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 72)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 74)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 91)) ;
  GALGAS_formalInputParameterListAST var_formalParameterList_3811 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3811, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 93)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3893 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3893, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 95)) ;
  GALGAS_location var_endOfMethodLocation_3932 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 96)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_initializerAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_formalParameterList_3811, var_routineInstructionList_3893, var_endOfMethodLocation_3932, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 97)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 91)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 93)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 95)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 91)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 93)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 96)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 97)) ;
  GALGAS_lstring var_className_4131 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 98)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 99)) ;
  GALGAS_lstring var_getterName_4225 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 100)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_4372 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_4372, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 102)) ;
  GALGAS_lstring var_returnedTypeName_4450 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4450, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_4503 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 105)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_4503.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 106)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), var_className_4131, var_getterName_4225, var_formalInputParameterList_4372, var_returnedTypeName_4450, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 96)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 97)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 98)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 99)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 100)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 102)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 105)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 96)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 97)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 98)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 99)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 100)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 102)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 105)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i49_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)) ;
  GALGAS_lstring var_getterName_5117 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_5264 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_5264, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 127)) ;
  GALGAS_lstring var_returnedTypeName_5342 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5342, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_5395 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 130)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_5395.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_getterName_5117, var_formalInputParameterList_5264, var_returnedTypeName_5342, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i49_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 127)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 130)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i49_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 127)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 130)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 80)) ;
  GALGAS_lstring var_className_3588 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 82)) ;
  GALGAS_lstring var_mMethodName_3691 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 83)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3827 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3827, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_className_3588, var_mMethodName_3691, var_formalParameterList_3827, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 80)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 82)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 83)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 80)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 82)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 83)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i51_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 98)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)) ;
  GALGAS_lstring var_mMethodName_4343 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)) ;
  GALGAS_formalParameterListAST var_formalParameterList_4480 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4480, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_4343, var_formalParameterList_4480, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i51_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 98)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i51_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 98)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i52_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 116)) ;
  GALGAS_lstring var_className_5064 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 118)) ;
  GALGAS_lstring var_mMethodName_5159 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 119)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_5270 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_5270, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 121)) ;
  GALGAS_lstring var_returnedTypeName_5348 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5348, inCompiler) ;
  GALGAS_lstring var_resultVariableName_5382 ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    var_resultVariableName_5382 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 125)) ;
  } break ;
  case 2: {
    var_resultVariableName_5382 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 127)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 129)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_5608 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5608, inCompiler) ;
  GALGAS_location var_endOfInstructionList_5649 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 132)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), var_className_5064, var_mMethodName_5159, var_formalInputParameterList_5270, var_returnedTypeName_5348, var_resultVariableName_5382, var_routineInstructionList_5608, var_endOfInstructionList_5649, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i52_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 116)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 118)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 119)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 121)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 125)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 129)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 132)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i52_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 116)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 118)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 119)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 121)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 125)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 129)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 132)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i53_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 151)) ;
  GALGAS_lstring var_mMethodName_6318 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 152)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_6429 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_6429, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)) ;
  GALGAS_lstring var_returnedTypeName_6507 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_6507, inCompiler) ;
  GALGAS_lstring var_resultVariableName_6541 ;
  switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    var_resultVariableName_6541 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 158)) ;
  } break ;
  case 2: {
    var_resultVariableName_6541 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 160)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 162)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_6767 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_6767, inCompiler) ;
  GALGAS_location var_endOfInstructionList_6808 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 165)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_mMethodName_6318, var_formalInputParameterList_6429, var_returnedTypeName_6507, var_resultVariableName_6541, var_routineInstructionList_6767, var_endOfInstructionList_6808, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 166)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i53_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 151)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 152)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 158)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 162)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 165)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i53_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 151)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 152)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 158)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 162)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i54_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 81)) ;
  GALGAS_lstring var_className_3740 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 83)) ;
  GALGAS_lstring var_mMethodName_3845 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 84)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3974 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3974, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 86)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4084 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4084, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_4125 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 89)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), var_className_3740, var_mMethodName_3845, var_formalParameterList_3974, var_routineInstructionList_4084, var_endOfMethodLocation_4125, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i54_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 81)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 83)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 84)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 89)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i54_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 81)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 83)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 84)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i55_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 106)) ;
  GALGAS_lstring var_mMethodName_4746 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 107)) ;
  GALGAS_formalParameterListAST var_formalParameterList_4875 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4875, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 109)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4985 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4985, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_5026 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 112)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_mMethodName_4746, var_formalParameterList_4875, var_routineInstructionList_4985, var_endOfMethodLocation_5026, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 113)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i55_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 106)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 107)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 109)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 112)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i55_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 106)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 107)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 109)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i56_ (GALGAS_AccessControlAST & outArgument_outAccessControl,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 89)) ;
    outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 90)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_protectedAccess (SOURCE_FILE ("accessControl.galgas", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 96)) ;
      GALGAS_lstring var_value_3308 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 97)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::notEqual, var_value_3308.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_3308.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 99)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 101)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_protectedSetAccess (SOURCE_FILE ("accessControl.galgas", 102)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 105)) ;
    switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_privateAccess (SOURCE_FILE ("accessControl.galgas", 107)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 109)) ;
      GALGAS_lstring var_value_3620 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 110)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, var_value_3620.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_3620.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 112)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 114)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_privateSetAccess (SOURCE_FILE ("accessControl.galgas", 115)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 118)) ;
    switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_fileprivateSetAccess (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 120))  COMMA_SOURCE_FILE ("accessControl.galgas", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 122)) ;
      GALGAS_lstring var_value_3971 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 123)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_fileprivateSetAccess (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 124))  COMMA_SOURCE_FILE ("accessControl.galgas", 124)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::notEqual, var_value_3971.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_3971.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 126)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 128)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i56_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 89)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 96)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 101)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 105)) ;
    switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 109)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 110)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 114)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 118)) ;
    switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 122)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 128)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i56_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 89)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 96)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 101)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 105)) ;
    switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 109)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 110)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 114)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 118)) ;
    switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 122)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 128)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

