#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
  GALGAS_lstring var_optionComponentName_1658 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 40)) ;
  GALGAS_commandLineOptionListAST var_options_1720 = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("optionCompilation.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_1720, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool (false), var_optionComponentName_1658, var_options_1720  COMMA_SOURCE_FILE ("optionCompilation.galgas", 47))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GALGAS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_mOptionTypeName_2191 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  GALGAS_lstring var_mOptionInternalName_2238 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  GALGAS_lchar var_mOptionInvocationLetter_2291 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
  GALGAS_lstring var_mOptionInvocationString_2352 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
  GALGAS_lstring var_mOptionComment_2414 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 64)) ;
  GALGAS_lstring var_defaultValue_2437 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 65)) ;
  GALGAS_optionDefaultValueEnumAST var_optionDefaultValueKind_2521 ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_2521 = GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 70)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_2437 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 72)) ;
      var_optionDefaultValueKind_2521 = GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 73)) ;
    } break ;
    case 2: {
      GALGAS_lbigint var_v_2814 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
      var_defaultValue_2437 = GALGAS_lstring::constructor_new (var_v_2814.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 76)), var_v_2814.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 76)) ;
      var_optionDefaultValueKind_2521 = GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 77)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssign_operation (var_mOptionTypeName_2191, var_mOptionInternalName_2238, var_mOptionInvocationLetter_2291, var_mOptionInvocationString_2352, var_mOptionComment_2414, var_defaultValue_2437, var_optionDefaultValueKind_2521  COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inCompiler) {
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

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inCompiler) {
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

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 104)) ;
  GALGAS_lstring var_mGUIName_3892 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 106)) ;
  GALGAS_lstringlist var_importedOptionList_3930 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 107)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes_3989 = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 108)) ;
  GALGAS_withLexiqueListAST var_withLexiqueList_4045 = GALGAS_withLexiqueListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 109)) ;
  GALGAS_projectIndexingDescriptorList var_projectExtensionList_4105 = GALGAS_projectIndexingDescriptorList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 110)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 113)) ;
      GALGAS_lstring var_fileExtension_4190 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 114)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 115)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 116)) ;
      GALGAS_lstring var_indexingPathSuffix_4254 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 117)) ;
      var_projectExtensionList_4105.addAssign_operation (var_fileExtension_4190, var_indexingPathSuffix_4254  COMMA_SOURCE_FILE ("guiCompilation.galgas", 118)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_3989, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_3930, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_4045, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 127)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssign_operation (var_mGUIName_3892, var_importedOptionList_3930, var_simpleGlobalAttributes_3989, var_withLexiqueList_4045, var_projectExtensionList_4105  COMMA_SOURCE_FILE ("guiCompilation.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 106)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 114)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 115)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 117)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 127)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 106)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 114)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 115)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 117)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 127)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GALGAS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 139)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 140)) ;
  GALGAS_lstring var_lexiqueReference_4981 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 141)) ;
  GALGAS_guiLabelListAST var_labels_5023 = GALGAS_guiLabelListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 142)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleAttributes_5070 = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 143)) ;
  GALGAS_guiCompoundAttributeListAST var_compoundAttributes_5129 = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 148)) ;
      GALGAS_uint var_displayStyle_5212 ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_5212 = GALGAS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 153)) ;
        var_displayStyle_5212 = GALGAS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_terminalLabelListAST var_terminalList_5351 = GALGAS_terminalLabelListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 156)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_terminal_5420 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
        GALGAS_uint var_displayFlags_5447 ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_5447 = GALGAS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
          var_displayFlags_5447 = GALGAS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 166)) ;
          GALGAS_lbigint var_leadingStrip_5638 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 167)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsSupOrEqual, var_leadingStrip_5638.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 168)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_5638.readProperty_location (), GALGAS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 169)) ;
            }
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 171)) ;
          GALGAS_lbigint var_endingStrip_5813 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 172)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsSupOrEqual, var_endingStrip_5813.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 173)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_5813.readProperty_location (), GALGAS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 174)) ;
            }
          }
          var_displayFlags_5447 = var_leadingStrip_5638.readProperty_bigint ().left_shift_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 176)).operator_or (var_endingStrip_5813.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 176)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 176)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 177)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_5351.addAssign_operation (var_terminal_5420, var_displayFlags_5447  COMMA_SOURCE_FILE ("guiCompilation.galgas", 179)) ;
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_5023.addAssign_operation (var_displayStyle_5212, var_terminalList_5351, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 183))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 183)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_key_6216 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)) ;
      GALGAS_lstring var_name_6251 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 187)) ;
      GALGAS_lstring var_value_6276 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 188)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GALGAS_lstring var_v_6364 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
        var_value_6276 = GALGAS_lstring::constructor_new (var_value_6276.readProperty_string ().add_operation (var_v_6364.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)), var_v_6364.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_5129.addAssign_operation (var_key_6216, var_name_6251, var_value_6276  COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_name_6545 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 196)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 197)) ;
      GALGAS_lstring var_value_6591 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 198)) ;
      var_simpleAttributes_5070.addAssign_operation (var_name_6545, var_value_6591  COMMA_SOURCE_FILE ("guiCompilation.galgas", 199)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)) ;
  ioArgument_ioWithLexiqueList.addAssign_operation (var_lexiqueReference_4981, var_labels_5023, var_simpleAttributes_5070, var_compoundAttributes_5129  COMMA_SOURCE_FILE ("guiCompilation.galgas", 202)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 139)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 148)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 153)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 166)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 167)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 171)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 172)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 177)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 187)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 196)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 197)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 198)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 139)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 148)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 153)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 166)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 167)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 171)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 172)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 177)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 187)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 196)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 197)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 198)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GALGAS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 209)) ;
  GALGAS_lstring var_optionReference_7003 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 210)) ;
  ioArgument_ioImportedOptionList.addAssign_operation (var_optionReference_7003  COMMA_SOURCE_FILE ("guiCompilation.galgas", 211)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 209)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 210)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 209)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 210)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GALGAS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_mKey_7304 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 217)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 218)) ;
  GALGAS_lstring var_mValue_7325 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 219)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_value_7402 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 221)) ;
    var_mValue_7325 = GALGAS_lstring::constructor_new (var_mValue_7325.readProperty_string ().add_operation (var_value_7402.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 222)), var_value_7402.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 222)) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssign_operation (var_mKey_7304, var_mValue_7325  COMMA_SOURCE_FILE ("guiCompilation.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 217)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 218)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 221)) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 217)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 218)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 221)) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 35)) ;
  GALGAS_lstring var_syntaxComponentName_2069 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 36)) ;
  GALGAS_lstring var_importedLexiqueReference_2130 ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_2130 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 40)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 42)) ;
    var_importedLexiqueReference_2130 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 43)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasTranslateFeature_2333 ;
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2333 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
    var_hasTranslateFeature_2333 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 54)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_2509 = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 56)) ;
  GALGAS_syntaxRuleListAST var_ruleList_2580 = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (var_nonterminalDeclarationList_2509, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_2580, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 65)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssign_operation (var_syntaxComponentName_2069, var_importedLexiqueReference_2130, var_nonterminalDeclarationList_2509, var_ruleList_2580, var_hasTranslateFeature_2333  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inCompiler) {
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
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 54)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 65)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inCompiler) {
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
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 54)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 80)) ;
  GALGAS_lstring var_syntaxComponentName_3395 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 82)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3459 = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 84)) ;
  GALGAS_syntaxRuleListAST var_ruleList_3530 = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (var_nonterminalDeclarationList_3459, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_3530, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 93)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxExtensions.addAssign_operation (var_syntaxComponentName_3395.readProperty_string (), var_syntaxComponentName_3395, var_nonterminalDeclarationList_3459, var_ruleList_3530  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 94)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 80)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 82)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 80)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 82)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GALGAS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 106)) ;
  GALGAS_lstring var_mNonterminalName_4345 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 107)) ;
  GALGAS_nonTerminalLabelListAST var_labels_4419 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 108)) ;
  GALGAS_formalParameterListAST var_firstBranchFormalParameters_4493 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_firstBranchFormalParameters_4493, inCompiler) ;
  var_labels_4419.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 110)), var_firstBranchFormalParameters_4493, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 110))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 110)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 113)) ;
      GALGAS_lstring var_labelName_4658 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 114)) ;
      GALGAS_formalParameterListAST var_formalParameters_4732 ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameters_4732, inCompiler) ;
      var_labels_4419.addAssign_operation (var_labelName_4658, var_formalParameters_4732, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 116))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 116)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssign_operation (var_mNonterminalName_4345, var_labels_4419  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 106)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 107)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 114)) ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 106)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 107)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 114)) ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                GALGAS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  GALGAS_formalParameterListAST var_mFormalParameters_5353 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalParameters_5353, inCompiler) ;
  GALGAS_location var_endOfArguments_5379 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128)) ;
  GALGAS_syntaxInstructionList var_mSyntaxInstructionList_5482 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_mSyntaxInstructionList_5482, inCompiler) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameters_5353, var_endOfArguments_5379, var_mSyntaxInstructionList_5482, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 135))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 136)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GALGAS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 142)) ;
  GALGAS_lstring var_mNonterminalName_5929 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 143)) ;
  GALGAS_lstring var_labelName_5978 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 144)) ;
  GALGAS_syntaxRuleLabelListAST var_mLabelList_6032 = GALGAS_syntaxRuleLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_5978, var_mLabelList_6032, inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 149)) ;
      var_labelName_5978 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 150)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssign_operation (var_mNonterminalName_5929, var_mLabelList_6032  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 142)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 143)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 150)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 142)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 143)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 150)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_ (GALGAS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GALGAS_syntaxInstructionList::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 162)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        GALGAS_semanticInstructionAST var_instruction_6815 ;
        nt_semantic_5F_instruction_5F_ggs_33__ (var_instruction_6815, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_6815  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 168)) ;
      } break ;
      case 2: {
        GALGAS_syntaxInstructionAST var_instruction_6930 ;
        nt_syntax_5F_instruction_5F_ggs_33__ (var_instruction_6930, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_6930  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 171)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 175)) ;
        } break ;
        case 2: {
          GALGAS_string var_separator_7071 = GALGAS_string::constructor_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 177)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_separator_7071.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 178)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 178)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 179)), GALGAS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 179)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_parse (C_Lexique_galgasScanner * inCompiler) {
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
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 175)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_indexing (C_Lexique_galgasScanner * inCompiler) {
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
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 175)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mLabelName_1113 ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_mLabelName_1113 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 23)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 25)) ;
    var_mLabelName_1113 = GALGAS_lstring::constructor_new (GALGAS_string ("parse"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 26)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 28)) ;
    var_mLabelName_1113 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mNonterminalName_1391 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 31)) ;
  GALGAS_actualParameterListAST var_mActualParameterList_1493 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_mActualParameterList_1493, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_1634 ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_1634 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 38)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_1634, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_nonterminalCallInstruction::constructor_new (var_mNonterminalName_1391.readProperty_location (), var_mNonterminalName_1391, var_mLabelName_1113, var_mActualParameterList_1493, var_grammarInstructionSyntaxDirectedTranslationResult_1634  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
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
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
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
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 22)) ;
  GALGAS_location var_mRepeatInstructionLocation_1062 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 23)) ;
  GALGAS_syntaxInstructionList var_mRepeatedInstructionList_1169 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_mRepeatedInstructionList_1169, inCompiler) ;
  GALGAS_location var_endOf_5F_repeated_5F_instructions_1202 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 25)) ;
  GALGAS_listOfSyntaxInstructionList var_mRepeatBranchList_1255 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 28)) ;
    GALGAS_syntaxInstructionList var_mInstructionList_1397 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_mInstructionList_1397, inCompiler) ;
    var_mRepeatBranchList_1255.addAssign_operation (var_mInstructionList_1397, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 30))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 30)) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 33)) ;
  GALGAS_location var_endOf_5F_repeat_5F_instruction_1512 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 34)) ;
  outArgument_outInstruction = GALGAS_repeatInstruction::constructor_new (var_mRepeatInstructionLocation_1062, var_mRepeatedInstructionList_1169, var_endOf_5F_repeated_5F_instructions_1202, var_mRepeatBranchList_1255, var_endOf_5F_repeat_5F_instruction_1512  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 22)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 28)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 22)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 28)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 20)) ;
  GALGAS_location var_mSelectInstructionLocation_938 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 21)) ;
  GALGAS_listOfSyntaxInstructionList var_mSelectBranchList_990 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 22)) ;
  GALGAS_syntaxInstructionList var_il_1105 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_il_1105, inCompiler) ;
  var_mSelectBranchList_990.addAssign_operation (var_il_1105, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 24))  COMMA_SOURCE_FILE ("instruction-select.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 26)) ;
    GALGAS_syntaxInstructionList var_instructionList_1240 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_instructionList_1240, inCompiler) ;
    var_mSelectBranchList_990.addAssign_operation (var_instructionList_1240, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 28))  COMMA_SOURCE_FILE ("instruction-select.galgas", 28)) ;
    if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 31)) ;
  GALGAS_location var_endOf_5F_select_5F_instruction_1352 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 32)) ;
  outArgument_outInstruction = GALGAS_selectInstruction::constructor_new (var_mSelectInstructionLocation_938, var_mSelectBranchList_990, var_endOf_5F_select_5F_instruction_1352  COMMA_SOURCE_FILE ("instruction-select.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 20)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 20)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_terminalName_1280 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 22)) ;
  GALGAS_actualInputParameterListAST var_actualInputParameterList_1393 ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_actualInputParameterList_1393, inCompiler) ;
  GALGAS__32_lstringlist var_indexNameList_1459 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_1459, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1593 ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1723 ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1593 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 29)) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1723 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 30)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 32)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1593, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1723, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_terminalCheckInstruction::constructor_new (var_terminalName_1280.readProperty_location (), var_terminalName_1280, var_actualInputParameterList_1393, var_indexNameList_1459, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1593, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1723  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 22)) ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 22)) ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
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
  switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_indexName_2891 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 54)) ;
      GALGAS_lstring var_postfixName_2953 ;
      switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
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
      outArgument_outIndexNameList.addAssign_operation (var_indexName_2891, var_postfixName_2953  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 61)) ;
      if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 54)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 59)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 54)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 59)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 24)) ;
  GALGAS_location var_instructionLocation_1137 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 26)) ;
  GALGAS_semanticExpressionAST var_variantExpression_1235 ;
  nt_expression_5F_ggs_33__ (var_variantExpression_1235, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_1261 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_whileExpression_1363 ;
  nt_expression_5F_ggs_33__ (var_whileExpression_1363, inCompiler) ;
  GALGAS_location var_endOfWhileExpression_1387 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 32)) ;
  GALGAS_syntaxInstructionList var_instructionList_1497 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_instructionList_1497, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 34)) ;
  GALGAS_location var_endOfInstructionList_1531 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 35)) ;
  outArgument_outInstruction = GALGAS_parseLoopInstruction::constructor_new (var_instructionLocation_1137, var_variantExpression_1235, var_endOfVariantExpression_1261, var_whileExpression_1363, var_endOfWhileExpression_1387, var_instructionList_1497, var_endOfInstructionList_1531  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 26)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 29)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 32)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 34)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 26)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 29)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 32)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 19)) ;
  GALGAS_location var_instructionLocation_942 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 21)) ;
  GALGAS_listOfSyntaxInstructionList var_mParseDoBranchList_996 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 22)) ;
  GALGAS_syntaxInstructionList var_il_1112 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_il_1112, inCompiler) ;
  var_mParseDoBranchList_996.addAssign_operation (var_il_1112, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 24))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 26)) ;
    GALGAS_syntaxInstructionList var_instructionList_1252 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_instructionList_1252, inCompiler) ;
    var_mParseDoBranchList_996.addAssign_operation (var_instructionList_1252, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 28))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 28)) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 31)) ;
  GALGAS_location var_endOfInstruction_1365 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 32)) ;
  outArgument_outInstruction = GALGAS_parseRewindInstruction::constructor_new (var_instructionLocation_942, var_mParseDoBranchList_996, var_endOfInstruction_1365  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 21)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 21)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 23)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (outArgument_outElseInstructionList, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 23)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 23)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 30)) ;
  GALGAS_location var_instructionLocation_1447 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 31)) ;
  GALGAS_semanticExpressionAST var_whenExpression_1511 ;
  nt_expression_5F_ggs_33__ (var_whenExpression_1511, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_1534 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 34)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_1619 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_whenInstructionList_1619, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_1647 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 36)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_1744 ;
  nt_branchOfParseWhithInstruction_ (var_elseInstructionList_1744, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_1772 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 39)) ;
  outArgument_outElseInstructionList = GALGAS_syntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-parse-when.galgas", 40)) ;
  outArgument_outElseInstructionList.addAssign_operation (GALGAS_parseWhenInstruction::constructor_new (var_instructionLocation_1447, var_whenExpression_1511, var_endOfWhenExpression_1534, var_whenInstructionList_1619, var_endOfWhenInstructions_1647, var_elseInstructionList_1744, var_endOfElseInstructions_1772  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 30)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 34)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 30)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 34)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  GALGAS_location var_instructionLocation_2320 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 57)) ;
  GALGAS_semanticExpressionAST var_whenExpression_2418 ;
  nt_expression_5F_ggs_33__ (var_whenExpression_2418, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_2441 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_2549 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (var_whenInstructionList_2549, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_2577 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 62)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_2697 ;
  nt_branchOfParseWhithInstruction_ (var_elseInstructionList_2697, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_2725 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 66)) ;
  outArgument_outInstruction = GALGAS_parseWhenInstruction::constructor_new (var_instructionLocation_2320, var_whenExpression_2418, var_endOfWhenExpression_2441, var_whenInstructionList_2549, var_endOfWhenInstructions_2577, var_elseInstructionList_2697, var_endOfElseInstructions_2725  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 57)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 57)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 18)) ;
  GALGAS_location var_instructionLocation_878 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 19)) ;
  GALGAS_semanticExpressionAST var_sentExpression_965 ;
  nt_expression_5F_ggs_33__ (var_sentExpression_965, inCompiler) ;
  outArgument_outInstruction = GALGAS_syntaxSendInstruction::constructor_new (var_instructionLocation_878, var_sentExpression_965  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 18)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 18)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lbool var_hasIndexing_1435 ;
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_1435 = GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
    var_hasIndexing_1435 = GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 27)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 30)) ;
  GALGAS_lstring var_mGrammarName_1646 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 31)) ;
  GALGAS_lstring var_mGrammarClass_1724 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 32)) ;
  GALGAS_bool var_hasTranslateFeature_1777 ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_1777 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 38)) ;
    var_hasTranslateFeature_1777 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 41)) ;
  GALGAS_lstringlist var_syntaxComponents_1953 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 45)) ;
    GALGAS_lstring var_syntaxComponent_2034 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 46)) ;
    var_syntaxComponents_1953.addAssign_operation (var_syntaxComponent_2034  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 47)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mStartSymbol_2166 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 51)) ;
  GALGAS_nonTerminalLabelListAST var_mLabelList_2210 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 52)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 53)), var_mLabelList_2210, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 56)) ;
      GALGAS_lstring var_labelName_2406 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 57)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (var_labelName_2406, var_mLabelList_2210, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_lstringlist var_mUnusedNonterminalList_2532 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 61)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 64)) ;
      GALGAS_lstring var_nonterminalSymbolName_2646 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 65)) ;
      var_mUnusedNonterminalList_2532.addAssign_operation (var_nonterminalSymbolName_2646  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 66)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_galgas_33_GrammarComponentAST::constructor_new (GALGAS_bool (false), var_hasIndexing_1435, var_mGrammarName_1646, var_mGrammarClass_1724, var_syntaxComponents_1953, var_mStartSymbol_2166, var_mLabelList_2210, var_mUnusedNonterminalList_2532, var_hasTranslateFeature_1777  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 70))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inCompiler) {
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
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 45)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 46)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 51)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 57)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 65)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inCompiler) {
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
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 45)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 46)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 51)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 57)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 65)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_ (const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                                         GALGAS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  GALGAS_stringset var_argumentNameSet_3296 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 87)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_3349 = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 88)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      GALGAS_lstring var_argumentName_3437 ;
      nt_label_5F_formal_5F_parameter_5F_ggs_33__ (var_argumentName_3437, var_mFormalParameterList_3349, inCompiler) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_argumentNameSet_3296.getter_hasKey (var_argumentName_3437.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 92)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_3437.readProperty_location (), GALGAS_string ("there is already an argument named '").add_operation (var_argumentName_3437.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 93)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 93)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 93)) ;
        }
      }
      var_argumentNameSet_3296.addAssign_operation (var_argumentName_3437.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 95)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameterList_3349, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 97))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inCompiler) {
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      nt_label_5F_formal_5F_parameter_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                                  GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4023 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)) ;
  GALGAS_lstring var_mTypeName_4058 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 106)) ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 111)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_4023, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 114)), var_mTypeName_4058, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 106)) ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 111)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 106)) ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                                  GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4606 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 125)) ;
  GALGAS_lstring var_mTypeName_4651 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 126)) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 131)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_4606, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 134)), var_mTypeName_4651, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 126)) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 131)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 126)) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                                  GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_5208 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 144)) ;
  GALGAS_lstring var_mTypeName_5243 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 145)) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_5208, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 153)), var_mTypeName_5243, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 145)) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 145)) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                                  GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_5794 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 163)) ;
  GALGAS_lstring var_mTypeName_5829 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 164)) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 165)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_5794, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 168)), var_mTypeName_5829, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 163)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 165)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 163)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 165)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 30)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_1815 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_prologueInstructionList_1815, inCompiler) ;
  GALGAS_location var_endOfPrologue_1847 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 33)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssign_operation (var_prologueInstructionList_1815, var_endOfPrologue_1847  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 30)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 30)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 45)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_2437 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_prologueInstructionList_2437, inCompiler) ;
  GALGAS_location var_endOfPrologue_2469 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 48)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssign_operation (var_prologueInstructionList_2437, var_endOfPrologue_2469  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 45)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 45)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 61)) ;
  GALGAS_lstring var_mSourceFileExtension_3020 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 63)) ;
  GALGAS_lstring var_mSourceFileHelp_3090 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 64)) ;
  GALGAS_lstring var_referenceGrammar_3148 ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_3148 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_useGrammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
    var_referenceGrammar_3148 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_selector_3318 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 74)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_3318.readProperty_string ().objectCompare (GALGAS_string ("sourceFilePath"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3318.readProperty_location (), GALGAS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 76)) ;
    }
  }
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_3527 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 80)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, var_typeName_3527.readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3527.readProperty_location (), GALGAS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 82)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isUnused_3679 ;
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_3679 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 89)) ;
    var_isUnused_3679 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSourceFileVariableName_3805 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 94)) ;
  GALGAS_semanticInstructionListAST var_mInstructionList_3914 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mInstructionList_3914, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3939 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssign_operation (var_mSourceFileExtension_3020, var_mSourceFileHelp_3090, var_mSourceFileVariableName_3805, var_isUnused_3679, var_referenceGrammar_3148, var_mInstructionList_3914, var_endOfInstructionList_3939  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 64)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_useGrammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
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
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 64)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_useGrammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
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
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 43)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 43)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 43)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
  GALGAS_semanticExpressionAST var_ifExpression_1834 ;
  nt_expression_ (var_ifExpression_1834, inCompiler) ;
  GALGAS_location var_operatorLocation_1855 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_thenExpression_1922 ;
  nt_expression_ (var_thenExpression_1922, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 53)) ;
  GALGAS_semanticExpressionAST var_elseExpression_1970 ;
  nt_expression_ (var_elseExpression_1970, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation_1855, var_ifExpression_1834, var_thenExpression_1922, var_elseExpression_1970  COMMA_SOURCE_FILE ("expression-if.galgas", 56)) ;
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
  GALGAS_location var_operatorLocation_1535 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation_1535, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 39)) ;
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
  GALGAS_location var_operatorLocation_1537 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation_1537, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 39)) ;
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
  GALGAS_lstring var_identifier_1415 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 33)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier_1415  COMMA_SOURCE_FILE ("expression-var.galgas", 34)) ;
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
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_selector_1703 ;
      switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_1703 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 45)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          GALGAS_bool test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnUselessSelector.readProperty_value ()) ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsEqual, var_selector_1703.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
          }
          test_1 = test_2.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (var_selector_1703.readProperty_location (), GALGAS_string ("check no useless selector: this selector should be removed"), fixItArray3  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 47)) ;
          }
        }
      } break ;
      case 2: {
        var_selector_1703 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 50)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_semanticExpressionAST var_expression_2069 ;
      nt_expression_ (var_expression_2069, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_1703, var_expression_2069, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 53))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 53)) ;
      if (select_galgas_34_ExpressionSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 55)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 45)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      nt_expression_parse (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 55)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 45)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 55)) ;
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
  GALGAS_stringlist var_literalStringList_1621 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-literal-string.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_1677 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 41)) ;
    var_literalStringList_1621.addAssign_operation (var_literalString_1677.readProperty_string ()  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
    if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 45)), var_literalStringList_1621  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 41)) ;
    if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 41)) ;
    if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_1436 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 33)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar_1436  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 34)) ;
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
  GALGAS_ldouble var_literalDouble_1457 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 33)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble_1457  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 34)) ;
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
  GALGAS_lbigint var_literalInt_2320 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt_2320  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 58)) ;
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
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4046 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 102)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4101 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4160 ;
      nt_simple_5F_expression_ (var_rightOperand_4160, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4046, var_leftOperand_4101, GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression-comparison.galgas", 105)), var_rightOperand_4160  COMMA_SOURCE_FILE ("expression-comparison.galgas", 105)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4299 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4354 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4413 ;
      nt_simple_5F_expression_ (var_rightOperand_4413, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4299, var_leftOperand_4354, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression-comparison.galgas", 111)), var_rightOperand_4413  COMMA_SOURCE_FILE ("expression-comparison.galgas", 111)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_4555 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 114)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4610 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4669 ;
      nt_simple_5F_expression_ (var_rightOperand_4669, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4555, var_leftOperand_4610, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 117)), var_rightOperand_4669  COMMA_SOURCE_FILE ("expression-comparison.galgas", 117)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_4815 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 120)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4870 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4929 ;
      nt_simple_5F_expression_ (var_rightOperand_4929, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4815, var_leftOperand_4870, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 123)), var_rightOperand_4929  COMMA_SOURCE_FILE ("expression-comparison.galgas", 123)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5077 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 126)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5131 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5190 ;
      nt_simple_5F_expression_ (var_rightOperand_5190, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5077, var_leftOperand_5131, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 129)), var_rightOperand_5190  COMMA_SOURCE_FILE ("expression-comparison.galgas", 129)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_5335 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 132)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5389 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5448 ;
      nt_simple_5F_expression_ (var_rightOperand_5448, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5335, var_leftOperand_5389, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 135)), var_rightOperand_5448  COMMA_SOURCE_FILE ("expression-comparison.galgas", 135)) ;
    } break ;
    case 8: {
      GALGAS_location var_operatorLocation_5591 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 138)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5647 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5706 ;
      nt_simple_5F_expression_ (var_rightOperand_5706, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5591, var_leftOperand_5647, GALGAS_comparison::constructor_sameInstance (SOURCE_FILE ("expression-comparison.galgas", 141)), var_rightOperand_5706  COMMA_SOURCE_FILE ("expression-comparison.galgas", 141)) ;
    } break ;
    case 9: {
      GALGAS_location var_operatorLocation_5852 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 143)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 144)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5908 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5967 ;
      nt_simple_5F_expression_ (var_rightOperand_5967, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5852, var_leftOperand_5908, GALGAS_comparison::constructor_differentInstances (SOURCE_FILE ("expression-comparison.galgas", 147)), var_rightOperand_5967  COMMA_SOURCE_FILE ("expression-comparison.galgas", 147)) ;
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
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4631 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 115)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 116)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4686 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4732 ;
      nt_term_ (var_rightOperand_4732, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation_4631, var_leftOperand_4686, var_rightOperand_4732  COMMA_SOURCE_FILE ("expression-additive.galgas", 119)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4862 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 121)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 122)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4917 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4963 ;
      nt_term_ (var_rightOperand_4963, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation_4862, var_leftOperand_4917, var_rightOperand_4963  COMMA_SOURCE_FILE ("expression-additive.galgas", 125)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_5094 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 128)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5148 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5194 ;
      nt_term_ (var_rightOperand_5194, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation_5094, var_leftOperand_5148, var_rightOperand_5194  COMMA_SOURCE_FILE ("expression-additive.galgas", 131)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_5318 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 133)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 134)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5373 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5419 ;
      nt_term_ (var_rightOperand_5419, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation_5318, var_leftOperand_5373, var_rightOperand_5419  COMMA_SOURCE_FILE ("expression-additive.galgas", 137)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5553 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 140)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5607 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5653 ;
      nt_term_ (var_rightOperand_5653, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation_5553, var_leftOperand_5607, var_rightOperand_5653  COMMA_SOURCE_FILE ("expression-additive.galgas", 143)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_5777 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 145)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 146)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5832 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5878 ;
      nt_term_ (var_rightOperand_5878, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::constructor_new (var_operatorLocation_5777, var_leftOperand_5832, var_rightOperand_5878  COMMA_SOURCE_FILE ("expression-additive.galgas", 149)) ;
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
    switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4137 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 102)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4191 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4262 ;
      nt_factor_ (var_rightOperand_4262, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation_4137, var_leftOperand_4191, var_rightOperand_4262  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 105)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4397 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4452 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4523 ;
      nt_factor_ (var_rightOperand_4523, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation_4397, var_leftOperand_4452, var_rightOperand_4523  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 111)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_4668 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 114)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4722 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4770 ;
      nt_factor_ (var_rightOperand_4770, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation_4668, var_leftOperand_4722, var_rightOperand_4770  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 117)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_4899 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 120)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4954 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5002 ;
      nt_factor_ (var_rightOperand_5002, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation_4899, var_leftOperand_4954, var_rightOperand_5002  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 123)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5141 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 126)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5197 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5245 ;
      nt_factor_ (var_rightOperand_5245, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::constructor_new (var_operatorLocation_5141, var_leftOperand_5197, var_rightOperand_5245  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 129)) ;
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
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
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
  switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_2880 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 90)) ;
    GALGAS_dynamicTypeComparisonKind var_kind_2969 ;
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 93)) ;
      var_kind_2969 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("expression-is-as.galgas", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 96)) ;
      var_kind_2969 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 97)) ;
    } break ;
    case 3: {
      var_kind_2969 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 99)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 101)) ;
      var_kind_2969 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("expression-is-as.galgas", 102)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName_3189 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 104)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_2880, var_kind_2969, var_typeName_3189  COMMA_SOURCE_FILE ("expression-is-as.galgas", 105)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_3372 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 112)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 113)) ;
    GALGAS_lstring var_typeName_3443 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 114)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_3372, var_typeName_3443  COMMA_SOURCE_FILE ("expression-is-as.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_or_parse (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 90)) ;
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
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
  switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 90)) ;
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 53)) ;
  GALGAS_lstring var_optionComponentName_2107 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 55)) ;
  GALGAS_lstring var_optionName_2191 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 57)) ;
  GALGAS_lstring var_getterName_2232 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 58)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName_2107, var_optionName_2191, var_getterName_2232  COMMA_SOURCE_FILE ("expression-option.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 53)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 53)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 67)) ;
  GALGAS_lstring var_optionName_2574 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 69)) ;
  GALGAS_lstring var_getterName_2615 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 70)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 71)), var_optionName_2574, var_getterName_2615  COMMA_SOURCE_FILE ("expression-option.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 40)) ;
  GALGAS_lstring var_lexiqueName_1608 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 42)) ;
  GALGAS_lstring var_getterName_1650 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 43)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName_1608, var_getterName_1650  COMMA_SOURCE_FILE ("expression-lexique.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 73)) ;
  GALGAS_lstring var_filewrapperName_2735 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 74)) ;
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName_2735  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 78)) ;
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_2947 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 80)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName_2735, var_filePath_2947  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 81)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_3115 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 86)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 87)) ;
      GALGAS_actualOutputExpressionList var_expressionList_3217 ;
      nt_output_5F_expression_5F_list_ (var_expressionList_3217, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::constructor_new (var_filewrapperName_2735, var_filewrapperTemplateName_3115, var_expressionList_3217  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 89)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 73)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 74)) ;
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 78)) ;
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 80)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 86)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 87)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 96)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 73)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 74)) ;
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 78)) ;
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 80)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 86)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 87)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i20_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 82)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3286 ;
  nt_optional_5F_type_ (var_typeName_3286, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 93)) ;
  GALGAS_location var_startOfExpression_3311 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 94)) ;
  GALGAS_lstring var_constructorName_3401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
  GALGAS_actualOutputExpressionList var_expressionList_3477 ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
    var_expressionList_3477 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 100)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 102)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 103)), GALGAS_string ("'{' is obsolete here, use '('"), fixItArray0  COMMA_SOURCE_FILE ("expression-constructor.galgas", 103)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_3477, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 105)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 107)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_3477, inCompiler) ;
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
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
  GALGAS_location var_endOfExpression_3857 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 116)) ;
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_3286, var_constructorName_3401, var_expressionList_3477, var_startOfExpression_3311.getter_union (var_endOfExpression_3857, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 121))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_4281 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)) ;
  GALGAS_location var_startOfExpression_4334 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 130)) ;
  GALGAS_actualOutputExpressionList var_expressionList_4429 ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 133)) ;
  nt_output_5F_expression_5F_list_ (var_expressionList_4429, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 135)) ;
  GALGAS_location var_endOfExpression_4513 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 136)) ;
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_4281, GALGAS_lstring::constructor_new (GALGAS_string ("new"), var_typeName_4281.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 139)), var_expressionList_4429, var_startOfExpression_4334.getter_union (var_endOfExpression_4513, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 141))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 133)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 135)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 133)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_1669 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1774 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_1774, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName_1669, var_expressionList_1774  COMMA_SOURCE_FILE ("expression-function-call.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  GALGAS_lstring var_typeName_1456 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 35)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName_1456  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3742 ;
  nt_optional_5F_type_ (var_typeName_3742, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 96)) ;
  GALGAS_collectionValueElementList var_elementList_3795 = GALGAS_collectionValueElementList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 97)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element_3915 ;
      nt_collection_5F_value_5F_element_ (var_element_3915, inCompiler) ;
      var_elementList_3795.addAssign_operation (var_element_3915  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 102)) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 104)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_collectionValueAST::constructor_new (var_typeName_3742, var_elementList_3795, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 110))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 104)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 104)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i26_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList_4359 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_selector_4420 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 121)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        GALGAS_bool test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnUselessSelector.readProperty_value ()) ;
        if (kBoolTrue == test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsEqual, var_selector_4420.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
        }
        test_1 = test_2.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_selector_4420.readProperty_location (), GALGAS_string ("check no useless selector: this selector should be removed"), fixItArray3  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 123)) ;
        }
      }
      GALGAS_semanticExpressionAST var_expression_4687 ;
      nt_expression_ (var_expression_4687, inCompiler) ;
      var_expressionList_4359.addAssign_operation (var_selector_4420, var_expression_4687, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 126))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 126)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_selector_4783 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 128)) ;
      GALGAS_semanticExpressionAST var_expression_4853 ;
      nt_expression_ (var_expression_4853, inCompiler) ;
      var_expressionList_4359.addAssign_operation (var_selector_4783, var_expression_4853, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 130))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 130)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_ExpressionSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 133)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::constructor_new (var_expressionList_4359, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 135))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 121)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_ExpressionSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 133)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 121)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_ExpressionSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 133)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 33)) ;
  outArgument_outExpression = GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 34))  COMMA_SOURCE_FILE ("expression-self.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i28_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_ExpressionSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 43)) ;
      GALGAS_lstring var_structFieldName_1729 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 44)) ;
      switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
      case 1: {
        outArgument_outExpression = GALGAS_structPropertyAccessExpressionAST::constructor_new (var_structFieldName_1729.readProperty_location (), outArgument_outExpression, var_structFieldName_1729  COMMA_SOURCE_FILE ("expression-property-access.galgas", 46)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_getterName_1921 = var_structFieldName_1729 ;
        GALGAS_location var_startLocation_1962 = GALGAS_location::constructor_next (inCompiler  COMMA_SOURCE_FILE ("expression-property-access.galgas", 49)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 50)) ;
        GALGAS_actualOutputExpressionList var_expressionList_2071 ;
        nt_output_5F_expression_5F_list_ (var_expressionList_2071, inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 52)) ;
        GALGAS_location var_endLocation_2110 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-property-access.galgas", 53)) ;
        outArgument_outExpression = GALGAS_getterCallExpressionAST::constructor_new (GALGAS_bool (true), outArgument_outExpression, var_getterName_1921, var_expressionList_2071, var_startLocation_1962.getter_union (var_endLocation_2110, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 59))  COMMA_SOURCE_FILE ("expression-property-access.galgas", 54)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_ExpressionSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 44)) ;
      switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 50)) ;
        nt_output_5F_expression_5F_list_parse (inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 52)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_ExpressionSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 44)) ;
      switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 50)) ;
        nt_output_5F_expression_5F_list_indexing (inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 52)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i29_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1529 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation_1529, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-not.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i30_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1531 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_tildeExpressionAST::constructor_new (var_operatorLocation_1531, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-tilde.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i31_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1550 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 38)) ;
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 42)) ;
  outArgument_outExpression = GALGAS_bangExpressionAST::constructor_new (var_operatorLocation_1550, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-bang.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1558 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionAST::constructor_new (var_operatorLocation_1558, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i33_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4101 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 102)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4155 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4211 ;
      nt_expression_5F_and_ (var_rightOperand_4211, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation_4101, var_leftOperand_4155, var_rightOperand_4211  COMMA_SOURCE_FILE ("expression-or.galgas", 105)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4334 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4389 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4445 ;
      nt_expression_5F_and_ (var_rightOperand_4445, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation_4334, var_leftOperand_4389, var_rightOperand_4445  COMMA_SOURCE_FILE ("expression-or.galgas", 111)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_4573 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 114)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4627 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4683 ;
      nt_expression_5F_and_ (var_rightOperand_4683, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation_4573, var_leftOperand_4627, var_rightOperand_4683  COMMA_SOURCE_FILE ("expression-or.galgas", 117)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_4807 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 120)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4863 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4919 ;
      nt_expression_5F_and_ (var_rightOperand_4919, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation_4807, var_leftOperand_4863, var_rightOperand_4919  COMMA_SOURCE_FILE ("expression-or.galgas", 123)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5051 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 126)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5107 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5163 ;
      nt_expression_5F_and_ (var_rightOperand_5163, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::constructor_new (var_operatorLocation_5051, var_leftOperand_5107, var_rightOperand_5163  COMMA_SOURCE_FILE ("expression-or.galgas", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2422 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 60)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2476 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2556 ;
      nt_relation_5F_factor_ (var_rightOperand_2556, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation_2422, var_leftOperand_2476, var_rightOperand_2556  COMMA_SOURCE_FILE ("expression-and.galgas", 63)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2680 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 66)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2735 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2815 ;
      nt_relation_5F_factor_ (var_rightOperand_2815, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::constructor_new (var_operatorLocation_2680, var_leftOperand_2735, var_rightOperand_2815  COMMA_SOURCE_FILE ("expression-and.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
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

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                                        GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 304)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 305)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_selector_10840 ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode_10891 ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_10840 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 312)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          GALGAS_bool test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnUselessSelector.readProperty_value ()) ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsEqual, var_selector_10840.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
          }
          test_1 = test_2.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (var_selector_10840.readProperty_location (), GALGAS_string ("check no useless selector: this selector should be removed"), fixItArray3  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 314)) ;
          }
        }
        var_mFormalParameterPassingMode_10891 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 316)) ;
      } break ;
      case 2: {
        var_selector_10840 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 318)) ;
        var_mFormalParameterPassingMode_10891 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 319)) ;
      } break ;
      case 3: {
        var_selector_10840 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 321)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          GALGAS_bool test_5 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnUselessSelector.readProperty_value ()) ;
          if (kBoolTrue == test_5.boolEnum ()) {
            test_5 = GALGAS_bool (kIsEqual, var_selector_10840.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
          }
          test_4 = test_5.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (var_selector_10840.readProperty_location (), GALGAS_string ("check no useless selector: this selector should be removed"), fixItArray6  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 323)) ;
          }
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 325)) ;
        var_mFormalParameterPassingMode_10891 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 326)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 328)) ;
        var_selector_10840 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 329)) ;
        var_mFormalParameterPassingMode_10891 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 330)) ;
      } break ;
      case 5: {
        var_selector_10840 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 332)) ;
        var_mFormalParameterPassingMode_10891 = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 333)) ;
      } break ;
      case 6: {
        var_selector_10840 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 335)) ;
        var_mFormalParameterPassingMode_10891 = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 336)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterTypeName_12208 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterTypeName_12208, inCompiler) ;
      GALGAS_bool var_mIsUnused_12250 ;
      switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
      case 1: {
        var_mIsUnused_12250 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 343)) ;
        var_mIsUnused_12250 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_12407 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 346)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_10840, var_mFormalParameterPassingMode_10891, var_formalParameterTypeName_12208, var_mFormalParameterName_12407, var_mIsUnused_12250  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 347)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 354)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 357)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 305)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 312)) ;
      } break ;
      case 2: {
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 321)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 325)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 328)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 332)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 335)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 343)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 346)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 354)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 357)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 305)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 312)) ;
      } break ;
      case 2: {
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 321)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 325)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 328)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 332)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 335)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 343)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 346)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 354)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 357)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 365)) ;
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 366)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_ (outArgument_outActualParameterList, inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 372)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 375)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 365)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_parse (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 372)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 375)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 365)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 372)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 375)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_ (GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_selector_13450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 381)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 383)) ;
    GALGAS_lstringlist var_poisonedVarNameList_13511 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_13511, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector_13450, var_poisonedVarNameList_13511  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 385))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 385)) ;
  } break ;
  case 2: {
    GALGAS_lbigint var_count_13667 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 387)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 388)) ;
    GALGAS_uint var_n_13693 = var_count_13667.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 389)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_selector_13450.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?")) ;
        inCompiler->emitSemanticError (var_selector_13450.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 391)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_n_13693.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_count_13667.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394)) ;
      }
    }
    if (kBoolFalse == test_2) {
      if (var_n_13693.isValid ()) {
        uint32_t variant_13934 = var_n_13693.uintValue () ;
        bool loop_13934 = true ;
        while (loop_13934) {
          loop_13934 = GALGAS_bool (kIsStrictSup, var_n_13693.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
          if (loop_13934) {
            loop_13934 = GALGAS_bool (kIsStrictSup, var_n_13693.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
          }
          if (loop_13934 && (0 == variant_13934)) {
            loop_13934 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 396)) ;
          }
          if (loop_13934) {
            variant_13934 -- ;
            ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector_13450.readProperty_location (), var_n_13693  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 398))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 398)) ;
            var_n_13693.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 399)) ;
          }
        }
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 381)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 383)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 387)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 381)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 383)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 387)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_ (GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_selector_14324 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_outputInputActualParameterName_14368 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 410)) ;
    GALGAS_lstringlist var_structAttributeList_14409 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 411)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 414)) ;
        GALGAS_lstring var_structAttributeName_14510 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 415)) ;
        var_structAttributeList_14409.addAssign_operation (var_structAttributeName_14510  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 416)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector_14324, var_outputInputActualParameterName_14368, var_structAttributeList_14409  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 418))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 418)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 424)) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector_14324  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 425))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 425)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 427)) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputSelfParameterAST::constructor_new (var_selector_14324  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 428))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 428)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_selector_14978 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 430)) ;
    GALGAS_lbigint var_count_15011 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 431)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
    GALGAS_uint var_n_15037 = var_count_15011.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 433)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_selector_14978.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("!\?")) ;
        inCompiler->emitSemanticError (var_selector_14978.readProperty_location (), GALGAS_string ("the selector should be '!\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 435)) ;
      }
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, var_n_15037.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_count_15011.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 438)) ;
      }
    }
    if (kBoolFalse == test_3) {
      if (var_n_15037.isValid ()) {
        uint32_t variant_15281 = var_n_15037.uintValue () ;
        bool loop_15281 = true ;
        while (loop_15281) {
          loop_15281 = GALGAS_bool (kIsStrictSup, var_n_15037.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
          if (loop_15281) {
            loop_15281 = GALGAS_bool (kIsStrictSup, var_n_15037.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
          }
          if (loop_15281 && (0 == variant_15281)) {
            loop_15281 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 440)) ;
          }
          if (loop_15281) {
            variant_15281 -- ;
            ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector_14978.readProperty_location (), var_n_15037  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 442))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 442)) ;
            var_n_15037.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 443)) ;
          }
        }
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 410)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 414)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 415)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 424)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 427)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 430)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 431)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 410)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 414)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 415)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 424)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 427)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 430)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 431)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_ (GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_selector_15670 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 452)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnUselessSelector.readProperty_value ()) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsEqual, var_selector_15670.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_selector_15670.readProperty_location (), GALGAS_string ("check no useless selector: this selector should be removed"), fixItArray2  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 454)) ;
    }
  }
  GALGAS_semanticExpressionAST var_e_15921 ;
  nt_expression_ (var_e_15921, inCompiler) ;
  GALGAS_location var_endOfExpressionLocation_15941 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 457)) ;
  ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_15670, var_e_15921, var_endOfExpressionLocation_15941  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 458))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 458)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 452)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 452)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_ (GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_selector_16317 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 468)) ;
  GALGAS_semanticExpressionAST var_e_16383 ;
  nt_expression_ (var_e_16383, inCompiler) ;
  GALGAS_location var_endOfExpressionLocation_16403 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 470)) ;
  ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_16317, var_e_16383, var_endOfExpressionLocation_16403  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 471))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i6_ (GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_selector_16784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 481)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_inputActualParameterName_16828 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 483)) ;
    GALGAS_lstringlist var_poisonedVarNameList_16884 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_16884, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector_16784, var_inputActualParameterName_16828, var_poisonedVarNameList_16884  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 485))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 485)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 491)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 492)) ;
    GALGAS_lstring var_inputActualParameterName_17159 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 493)) ;
    GALGAS_lstringlist var_poisonedVarNameList_17215 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_17215, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualSelfPropertyParameterAST::constructor_new (var_selector_16784, var_inputActualParameterName_17159, var_poisonedVarNameList_17215  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 495))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 495)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 501)) ;
    GALGAS_lstringlist var_poisonedVarNameList_17474 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_17474, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualSelfParameterAST::constructor_new (var_selector_16784, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 505)), var_poisonedVarNameList_17474  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 503))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 503)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 509)) ;
    GALGAS_lstring var_declarationTypeName_17701 ;
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
      var_declarationTypeName_17701 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 512)) ;
    } break ;
    case 2: {
      var_declarationTypeName_17701 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 514)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_inputActualParameterName_17857 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 516)) ;
    GALGAS_lstringlist var_poisonedVarNameList_17913 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_17913, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_16784, var_declarationTypeName_17701, var_inputActualParameterName_17857, var_poisonedVarNameList_17913  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 518))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 518)) ;
  } break ;
  case 5: {
    GALGAS_lstring var_declarationTypeName_18207 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 525)) ;
    GALGAS_lstring var_inputActualParameterName_18251 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 526)) ;
    GALGAS_lstringlist var_poisonedVarNameList_18307 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_18307, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_16784, var_declarationTypeName_18207, var_inputActualParameterName_18251, var_poisonedVarNameList_18307  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 528))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 528)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 535)) ;
    GALGAS_lstring var_declarationTypeName_18589 ;
    switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
    case 1: {
      var_declarationTypeName_18589 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 538)) ;
    } break ;
    case 2: {
      var_declarationTypeName_18589 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 540)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_bool var_markedAsUnused_18737 ;
    switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
    case 1: {
      var_markedAsUnused_18737 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 546)) ;
      var_markedAsUnused_18737 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_inputActualParameterName_18886 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 549)) ;
    GALGAS_lstringlist var_poisonedVarNameList_18942 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_18942, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector_16784, var_declarationTypeName_18589, var_inputActualParameterName_18886, var_markedAsUnused_18737, var_poisonedVarNameList_18942  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 551))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 551)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 481)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 483)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 491)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 492)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 493)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 501)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 509)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 514)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 516)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 525)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 526)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 535)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 540)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 546)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 549)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 481)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 483)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 491)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 492)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 493)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 501)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 509)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 514)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 516)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 525)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 526)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 535)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 540)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 546)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 549)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i7_ (GALGAS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 566)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 567)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_selector_19682 ;
      switch (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler)) {
      case 1: {
        var_selector_19682 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 573)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          GALGAS_bool test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnUselessSelector.readProperty_value ()) ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsEqual, var_selector_19682.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
          }
          test_1 = test_2.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (var_selector_19682.readProperty_location (), GALGAS_string ("check no useless selector: this selector should be removed"), fixItArray3  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 575)) ;
          }
        }
      } break ;
      case 2: {
        var_selector_19682 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 578)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_isConstant_20017 ;
      switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
      case 1: {
        var_isConstant_20017 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 584)) ;
        var_isConstant_20017 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_20169 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 587)) ;
      GALGAS_bool var_mIsUnused_20212 ;
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        var_mIsUnused_20212 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 592)) ;
        var_mIsUnused_20212 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_20369 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 595)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_19682, var_mFormalParameterTypeName_20169, var_mFormalParameterName_20369, var_mIsUnused_20212, var_isConstant_20017  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 596)) ;
      if (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 603)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 606)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 567)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 573)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 584)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 587)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 592)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 595)) ;
      if (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 603)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 606)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 567)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 573)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 584)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 587)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 592)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 595)) ;
      if (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 603)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 606)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_ (GALGAS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                    C_Lexique_galgasScanner * /* inCompiler */) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 612)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_indexing (C_Lexique_galgasScanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i9_ (GALGAS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 618)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 619)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 620)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_varName_21118 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 622)) ;
    outArgument_outPoisonedVarNameList.addAssign_operation (var_varName_21118  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 623)) ;
    if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 625)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 627)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 619)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 620)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 622)) ;
    if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 625)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 627)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 619)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 620)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 622)) ;
    if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 625)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 627)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                                  GALGAS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 407)) ;
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_semanticInstructionAST var_instruction_15596 ;
      nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_instruction_15596, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_15596  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 412)) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 415)) ;
        } break ;
        case 2: {
          GALGAS_string var_separator_15718 = GALGAS_string::constructor_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 417)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_separator_15718.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 418)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 418)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 419)), GALGAS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 419)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgasScanner * inCompiler) {
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
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 415)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
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
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 415)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 432)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 433)) ;
  GALGAS_bool var_isUsefull_16409 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 437)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_16409.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 439)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 439)) ;
        }
      }
      var_isUsefull_16409 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mActionName_16623 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 443)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_16768 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mFormalParameterList_16768, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externProcedureDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_16623, var_mFormalParameterList_16768, var_isUsefull_16409  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 445))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 445)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 432)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 433)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 437)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 443)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 432)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 433)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 437)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 443)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 460)) ;
  GALGAS_bool var_isUsefull_17458 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 464)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_17458.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
        }
      }
      var_isUsefull_17458 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mRoutineName_17663 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 470)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_17809 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mFormalParameterList_17809, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 472)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_17952 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mRoutineInstructionList_17952, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 474)) ;
  GALGAS_location var_endOfInstructionList_17992 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 475)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mRoutineName_17663, var_mFormalParameterList_17809, var_isUsefull_17458, var_mRoutineInstructionList_17952, var_endOfInstructionList_17992  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 476))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 476)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 460)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 464)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 470)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 472)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 474)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 460)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 464)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 470)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 472)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 474)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 491)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 492)) ;
  GALGAS_bool var_isUsefull_18576 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 496)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_18576.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 498)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 498)) ;
        }
      }
      var_isUsefull_18576 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mRoutineName_18781 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 502)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_18927 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mFormalParameterList_18927, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 504)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_19070 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mRoutineInstructionList_19070, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 506)) ;
  GALGAS_location var_endOfInstructionList_19110 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 507)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_mRoutineName_18781, var_mFormalParameterList_18927, var_isUsefull_18576, var_mRoutineInstructionList_19070, var_endOfInstructionList_19110  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 508))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 508)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 491)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 492)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 496)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 502)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 504)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 506)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 491)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 492)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 496)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 502)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 504)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 506)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 525)) ;
  GALGAS_bool var_isOnce_19852 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_19875 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 530)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isOnce_19852.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 532)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 532)) ;
        }
      }
      var_isOnce_19852 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 536)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_isUsefull_19875.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 538)), GALGAS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 538)) ;
        }
      }
      var_isUsefull_19875 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_20217 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 542)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_20326 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_20326, inCompiler) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isOnce_19852.boolEnum () ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_20326.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 544)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_20217.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 545)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 547)) ;
  GALGAS_lstring var_resultTypeName_20573 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_resultTypeName_20573, inCompiler) ;
  GALGAS_lstring var_resultVariableName_20605 ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    var_resultVariableName_20605 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 551)) ;
  } break ;
  case 2: {
    var_resultVariableName_20605 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 553)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 555)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_20862 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_functionInstructionList_20862, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 557)) ;
  GALGAS_location var_endOfFunctionInstructionList_20902 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 558)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_isOnce_19852.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_20217, var_resultTypeName_20573, var_resultVariableName_20605, var_functionInstructionList_20862, var_endOfFunctionInstructionList_20902, GALGAS_bool (false), var_isUsefull_19875  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 560))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 560)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_20217, var_formalInputParameterList_20326, var_resultTypeName_20573, var_isUsefull_19875, var_resultVariableName_20605, var_functionInstructionList_20862, var_endOfFunctionInstructionList_20902, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 571))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 571)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 525)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 530)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 536)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 542)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 547)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 551)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 555)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 557)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 525)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 530)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 536)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 542)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 547)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 551)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 555)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 557)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 589)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 590)) ;
  GALGAS_bool var_isOnce_21929 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_21952 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 595)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isOnce_21929.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 597)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 597)) ;
        }
      }
      var_isOnce_21929 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 601)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_isUsefull_21952.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 603)), GALGAS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 603)) ;
        }
      }
      var_isUsefull_21952 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_22294 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 607)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_22403 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_22403, inCompiler) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isOnce_21929.boolEnum () ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_22403.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 609)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_22294.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 610)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 612)) ;
  GALGAS_lstring var_resultTypeName_22650 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_resultTypeName_22650, inCompiler) ;
  GALGAS_lstring var_resultVariableName_22682 ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    var_resultVariableName_22682 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 616)) ;
  } break ;
  case 2: {
    var_resultVariableName_22682 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 618)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 620)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_22939 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_functionInstructionList_22939, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 622)) ;
  GALGAS_location var_endOfFunctionInstructionList_22979 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 623)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_isOnce_21929.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_22294, var_resultTypeName_22650, var_resultVariableName_22682, var_functionInstructionList_22939, var_endOfFunctionInstructionList_22979, GALGAS_bool (true), var_isUsefull_21952  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 625))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 625)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_22294, var_formalInputParameterList_22403, var_resultTypeName_22650, var_isUsefull_21952, var_resultVariableName_22682, var_functionInstructionList_22939, var_endOfFunctionInstructionList_22979, GALGAS_bool (true)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 636))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 636)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 589)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 590)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 595)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 601)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 607)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 612)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 616)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 620)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 622)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 589)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 590)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 595)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 601)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 607)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 612)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 616)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 620)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 622)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 656)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 657)) ;
  GALGAS_bool var_isUsefull_24238 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 661)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_24238.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 663)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 663)) ;
        }
      }
      var_isUsefull_24238 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mActionName_24443 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 667)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_24551 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_24551, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 669)) ;
  GALGAS_lstring var_resultTypeName_24661 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_resultTypeName_24661, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName_24443, var_formalInputParameterList_24551, var_resultTypeName_24661, var_isUsefull_24238  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 671))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 671)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 656)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 657)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 661)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 667)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 669)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 656)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 657)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 661)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 667)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 669)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 689)) ;
  GALGAS_lstring var_selector_25552 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 690)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_25552.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?")) ;
      inCompiler->emitSemanticError (var_selector_25552.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 692)) ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 695)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 696))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 696)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_25819 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 698)) ;
    GALGAS_lstring var_actualParameterName_25867 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 699)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName_25819, var_actualParameterName_25867  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 700)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 702)) ;
    GALGAS_lstring var_actualParameterTypeName_26056 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 703)) ;
    GALGAS_lstring var_actualParameterName_26104 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 704)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName_26056, var_actualParameterName_26104  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 705)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_26288 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 707)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName_26288  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 708)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 710)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 689)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 690)) ;
  switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 695)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 698)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 699)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 702)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 703)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 704)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 707)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 710)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 689)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 690)) ;
  switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 695)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 698)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 699)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 702)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 703)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 704)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 707)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 710)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 716)) ;
  switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 719)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_selector_26787 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 722)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 723)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_26787, GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 724))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 724)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_selector_26929 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 726)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 727)) ;
        GALGAS_lstring var_actualParameterTypeName_26977 ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_26977 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 730)) ;
        } break ;
        case 2: {
          var_actualParameterTypeName_26977 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 732)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_actualParameterName_27169 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 734)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_26929, GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName_26977, var_actualParameterName_27169  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 737))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 735)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_selector_27379 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 739)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 740)) ;
        GALGAS_lstring var_actualParameterTypeName_27427 ;
        switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_27427 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 743)) ;
        } break ;
        case 2: {
          var_actualParameterTypeName_27427 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 745)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_actualParameterName_27619 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 747)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_27379, GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName_27427, var_actualParameterName_27619  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 750))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 748)) ;
      } break ;
      case 4: {
        GALGAS_lstring var_selector_27829 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 752)) ;
        GALGAS_lstring var_actualParameterName_27866 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 753)) ;
        outArgument_outActualInputParameterList.addAssign_operation (var_selector_27829, GALGAS_inputParameterVariable::constructor_new (var_actualParameterName_27866  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 754))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 754)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 757)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 759)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 719)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 722)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 723)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 726)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 727)) ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 732)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 734)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 739)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 740)) ;
        switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 745)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 747)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 752)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 753)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 757)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 759)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 719)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 722)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 723)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 726)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 727)) ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 732)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 734)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 739)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 740)) ;
        switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 745)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 747)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 752)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 753)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 757)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 759)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                          GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                          GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName_3150 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 84)) ;
  GALGAS_lstring var_optionalProperty_3187 ;
  switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    var_optionalProperty_3187 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 89)) ;
    GALGAS_lstring var_attributeName_3294 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
    var_optionalProperty_3187 = var_attributeName_3294 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 93)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_3408 ;
  nt_expression_ (var_mSourceExpression_3408, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName_3150.readProperty_location (), var_mTargetVariableName_3150, var_optionalProperty_3187, var_mSourceExpression_3408  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 84)) ;
  switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 93)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 84)) ;
  switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 93)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
  GALGAS_lstring var_mTargetVariableName_3994 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)) ;
  GALGAS_lstring var_optionalProperty_4031 ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
    var_optionalProperty_4031 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
    GALGAS_lstring var_attributeName_4138 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)) ;
    var_optionalProperty_4031 = var_attributeName_4138 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 119)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_4252 ;
  nt_expression_ (var_mSourceExpression_4252, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPropertyAssignmentInstructionAST::constructor_new (var_mTargetVariableName_3994.readProperty_location (), var_mTargetVariableName_3994, var_optionalProperty_4031, var_mSourceExpression_4252  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 121)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 119)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 119)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 166)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 166)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 166)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_ (const GALGAS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiverName_6722 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 175)) ;
  GALGAS_location var_instructionLocation_6743 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 176)) ;
  GALGAS_lstringlist var_propertyList_6801 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 177)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 180)) ;
      GALGAS_lstring var_attributeName_6874 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 181)) ;
      var_propertyList_6801.addAssign_operation (var_attributeName_6874  COMMA_SOURCE_FILE ("instruction-concat.galgas", 182)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 186)) ;
    GALGAS_semanticExpressionAST var_expression_7009 ;
    nt_expression_ (var_expression_7009, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6743, constinArgument_inHasSelfPrefix, var_receiverName_6722, var_propertyList_6801, var_expression_7009  COMMA_SOURCE_FILE ("instruction-concat.galgas", 188)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 196)) ;
    GALGAS_semanticExpressionAST var_expression_7643 ;
    nt_expression_ (var_expression_7643, inCompiler) ;
    outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6743, constinArgument_inHasSelfPrefix, var_receiverName_6722, var_propertyList_6801, var_expression_7643  COMMA_SOURCE_FILE ("instruction-concat.galgas", 209)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 218)) ;
    GALGAS_semanticExpressionAST var_expression_7934 ;
    nt_expression_ (var_expression_7934, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6743, constinArgument_inHasSelfPrefix, var_receiverName_6722, var_propertyList_6801, var_expression_7934  COMMA_SOURCE_FILE ("instruction-concat.galgas", 220)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 228)) ;
    GALGAS_semanticExpressionAST var_expression_8199 ;
    nt_expression_ (var_expression_8199, inCompiler) ;
    outArgument_outInstruction = GALGAS_divEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6743, constinArgument_inHasSelfPrefix, var_receiverName_6722, var_propertyList_6801, var_expression_8199  COMMA_SOURCE_FILE ("instruction-concat.galgas", 230)) ;
  } break ;
  case 5: {
    GALGAS_actualParameterListAST var_actualParameterList_8484 ;
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_actualParameterList_8484, inCompiler) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = constinArgument_inHasSelfPrefix.boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, var_propertyList_6801.getter_count (SOURCE_FILE ("instruction-concat.galgas", 240)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_6743, GALGAS_selfInExpressionAST::constructor_new (var_instructionLocation_6743  COMMA_SOURCE_FILE ("instruction-concat.galgas", 243)), var_receiverName_6722, var_actualParameterList_8484  COMMA_SOURCE_FILE ("instruction-concat.galgas", 241)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_lstring var_methodName_8867 ;
          {
          var_propertyList_6801.setter_popLast (var_methodName_8867, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 248)) ;
          }
          GALGAS_semanticExpressionAST var_receiverExpression_8916 = GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249)) ;
          var_receiverExpression_8916 = GALGAS_structPropertyAccessExpressionAST::constructor_new (var_receiverName_6722.readProperty_location (), var_receiverExpression_8916, var_receiverName_6722  COMMA_SOURCE_FILE ("instruction-concat.galgas", 250)) ;
          cEnumerator_lstringlist enumerator_9124 (var_propertyList_6801, kENUMERATION_UP) ;
          while (enumerator_9124.hasCurrentObject ()) {
            var_receiverExpression_8916 = GALGAS_structPropertyAccessExpressionAST::constructor_new (enumerator_9124.current_mValue (HERE).readProperty_location (), var_receiverExpression_8916, enumerator_9124.current_mValue (HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 252)) ;
            enumerator_9124.gotoNextObject () ;
          }
          outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_6743, var_receiverExpression_8916, var_methodName_8867, var_actualParameterList_8484  COMMA_SOURCE_FILE ("instruction-concat.galgas", 254)) ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_propertyList_6801.getter_count (SOURCE_FILE ("instruction-concat.galgas", 261)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_receiverName_6722.readProperty_location (), var_receiverName_6722, var_actualParameterList_8484  COMMA_SOURCE_FILE ("instruction-concat.galgas", 262)) ;
        }
      }
      if (kBoolFalse == test_3) {
        GALGAS_lstring var_methodName_9764 ;
        {
        var_propertyList_6801.setter_popLast (var_methodName_9764, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 268)) ;
        }
        GALGAS_semanticExpressionAST var_receiverExpression_9811 = GALGAS_varInExpressionAST::constructor_new (var_receiverName_6722  COMMA_SOURCE_FILE ("instruction-concat.galgas", 269)) ;
        cEnumerator_lstringlist enumerator_9885 (var_propertyList_6801, kENUMERATION_UP) ;
        while (enumerator_9885.hasCurrentObject ()) {
          var_receiverExpression_9811 = GALGAS_structPropertyAccessExpressionAST::constructor_new (enumerator_9885.current_mValue (HERE).readProperty_location (), var_receiverExpression_9811, enumerator_9885.current_mValue (HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 271)) ;
          enumerator_9885.gotoNextObject () ;
        }
        outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_6743, var_receiverExpression_9811, var_methodName_9764, var_actualParameterList_8484  COMMA_SOURCE_FILE ("instruction-concat.galgas", 273)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 175)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 180)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 181)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 186)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 196)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 218)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 228)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 175)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 180)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 181)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 186)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 196)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 218)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 228)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 5: {
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 43)) ;
  GALGAS_location var_instructionLocation_1789 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 44)) ;
  GALGAS_lstringlist var_dropList_1847 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_1896 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 47)) ;
    var_dropList_1847.addAssign_operation (var_variableName_1896  COMMA_SOURCE_FILE ("instruction-drop.galgas", 48)) ;
    if (select_galgas_34_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation_1789, var_dropList_1847  COMMA_SOURCE_FILE ("instruction-drop.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 47)) ;
    if (select_galgas_34_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 47)) ;
    if (select_galgas_34_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i15_ (GALGAS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 111)) ;
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
    GALGAS_bool var_hasFixItRemove_4044 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 119)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_hasFixItRemove_4044.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 121)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 121)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 123))  COMMA_SOURCE_FILE ("instruction-error.galgas", 123)) ;
          var_hasFixItRemove_4044 = GALGAS_bool (true) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas", 127)) ;
        GALGAS_location var_errorLocation_4370 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 128)) ;
        GALGAS_semanticExpressionAST var_expression_4452 ;
        nt_expression_ (var_expression_4452, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItReplace (var_expression_4452, var_errorLocation_4370  COMMA_SOURCE_FILE ("instruction-error.galgas", 130))  COMMA_SOURCE_FILE ("instruction-error.galgas", 130)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas", 132)) ;
        GALGAS_location var_errorLocation_4604 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 133)) ;
        GALGAS_semanticExpressionAST var_expression_4686 ;
        nt_expression_ (var_expression_4686, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertAfter (var_expression_4686, var_errorLocation_4604  COMMA_SOURCE_FILE ("instruction-error.galgas", 135))  COMMA_SOURCE_FILE ("instruction-error.galgas", 135)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas", 137)) ;
        GALGAS_location var_errorLocation_4843 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 138)) ;
        GALGAS_semanticExpressionAST var_expression_4925 ;
        nt_expression_ (var_expression_4925, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertBefore (var_expression_4925, var_errorLocation_4843  COMMA_SOURCE_FILE ("instruction-error.galgas", 140))  COMMA_SOURCE_FILE ("instruction-error.galgas", 140)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 143)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 145)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 119)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas", 127)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas", 132)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas", 137)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 143)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 145)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 119)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas", 127)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas", 132)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas", 137)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 143)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 145)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 154)) ;
  GALGAS_location var_instructionLocation_5471 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 155)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_5553 ;
  nt_expression_ (var_mReceiverExpression_5553, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_5626 ;
  nt_expression_ (var_mErrorExpression_5626, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_5651 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 159)) ;
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas", 162)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 163)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_5768 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 165)) ;
      var_mBuiltVariableList_5651.addAssign_operation (var_builtVariableName_5768  COMMA_SOURCE_FILE ("instruction-error.galgas", 166)) ;
      if (select_galgas_34_InstructionsSyntax_26 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 168)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 170)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_fixitListAST var_fixitListAST_5923 ;
  nt_issue_5F_fixit_ (var_fixitListAST_5923, inCompiler) ;
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_5471, var_mReceiverExpression_5553, var_mErrorExpression_5626, var_mBuiltVariableList_5651, var_fixitListAST_5923  COMMA_SOURCE_FILE ("instruction-error.galgas", 173)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 154)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas", 162)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 163)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 165)) ;
      if (select_galgas_34_InstructionsSyntax_26 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 168)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 170)) ;
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 154)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas", 162)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas", 163)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 165)) ;
      if (select_galgas_34_InstructionsSyntax_26 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 168)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas", 170)) ;
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i17_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lbigint var_count_9839 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 287)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 288)) ;
  GALGAS_uint var_n_9861 = var_count_9839.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 289)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_n_9861.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_9839.readProperty_location (), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 291)) ;
    }
  }
  if (var_n_9861.isValid ()) {
    uint32_t variant_9962 = var_n_9861.uintValue () ;
    bool loop_9962 = true ;
    while (loop_9962) {
      loop_9962 = GALGAS_bool (kIsStrictSup, var_n_9861.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_9962) {
        loop_9962 = GALGAS_bool (kIsStrictSup, var_n_9861.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_9962 && (0 == variant_9962)) {
        loop_9962 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 293)) ;
      }
      if (loop_9962) {
        variant_9962 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 294)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 294))  COMMA_SOURCE_FILE ("instruction-for.galgas", 294)) ;
        var_n_9861.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 295)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 287)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 288)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 287)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 288)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_typeName_10309 ;
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
    var_typeName_10309 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 304)) ;
  } break ;
  case 2: {
    var_typeName_10309 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 306)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 309)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_10309, GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 310))  COMMA_SOURCE_FILE ("instruction-for.galgas", 310)) ;
  } break ;
  case 2: {
    GALGAS_bool var_isUnused_10492 ;
    switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
    case 1: {
      var_isUnused_10492 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
      var_isUnused_10492 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_constantName_10632 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 319)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_10309, var_isUnused_10492, var_constantName_10632  COMMA_SOURCE_FILE ("instruction-for.galgas", 320)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 306)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 309)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 319)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 306)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 309)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 319)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i19_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 327)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_10956 = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 328)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (var_elementList_10956, inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_30 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 332)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_location var_location_11112 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 335)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 336)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_11200 ;
  nt_expression_ (var_enumeratedExpression_11200, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList_10956, GALGAS_bool (false), var_enumeratedExpression_11200, var_location_11112  COMMA_SOURCE_FILE ("instruction-for.galgas", 338)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 327)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_parse (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_30 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 332)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 335)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 336)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 327)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_30 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 332)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 335)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 336)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_11638 ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_typeName_11638 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 351)) ;
  } break ;
  case 2: {
    var_typeName_11638 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 353)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_11744 ;
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 357)) ;
    var_enumerationVariable_11744 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 358)) ;
  } break ;
  case 2: {
    var_enumerationVariable_11744 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 360)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 362)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_11932 ;
  nt_expression_ (var_enumeratedExpression_11932, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName_11638, var_enumerationVariable_11744, var_enumeratedExpression_11932, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 368))  COMMA_SOURCE_FILE ("instruction-for.galgas", 364)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 353)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 357)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 360)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 362)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 353)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 357)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 360)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 362)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 375)) ;
  GALGAS_location var_startLocation_12363 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 376)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 377)) ;
  GALGAS_lstring var_prefix_12419 ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_prefix_12419 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 380)) ;
  } break ;
  case 2: {
    var_prefix_12419 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 382)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endLocation_12515 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 384)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 385)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_12598 ;
  nt_expression_ (var_enumeratedExpression_12598, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix_12419, var_enumeratedExpression_12598, var_startLocation_12363.getter_union (var_endLocation_12515, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 390))  COMMA_SOURCE_FILE ("instruction-for.galgas", 387)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 375)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 377)) ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 382)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 385)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 375)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 377)) ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 382)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 385)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 399)) ;
  GALGAS_location var_instructionLocation_13145 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 400)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_13190 = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 401)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_13283 ;
    switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
      var_ascending_13283 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 407)) ;
      var_ascending_13283 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_13468 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject_13468, inCompiler) ;
    var_mEnumeratedObjectList_13190.addAssign_operation (var_ascending_13283, var_enumeratedObject_13468  COMMA_SOURCE_FILE ("instruction-for.galgas", 411)) ;
    if (select_galgas_34_InstructionsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 413)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_13604 ;
  switch (select_galgas_34_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
    var_mWhileExpression_13604 = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 417))  COMMA_SOURCE_FILE ("instruction-for.galgas", 417)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 419)) ;
    nt_expression_ (var_mWhileExpression_13604, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_13773 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 422)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_13849 ;
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_13849 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 425)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 427)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mBeforeInstructionList_13849, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_14091 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 430)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 431)) ;
  GALGAS_lstring var_indexVariableName_14154 ;
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_indexVariableName_14154 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 434)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 436)) ;
    var_indexVariableName_14154 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 437)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 438)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_14404 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mDoInstructionList_14404, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_14431 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 441)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_14500 ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_14500 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 444)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 446)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mBetweenInstructionList_14500, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_14746 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 449)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_14820 ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_14820 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 452)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 454)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mAfterInstructionList_14820, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_15058 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 457)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
  GALGAS_location var_endof_5F_foreach_5F_instruction_15112 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 459)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation_13145, var_mEnumeratedObjectList_13190, var_indexVariableName_14154, var_mWhileExpression_13604, var_endof_5F_while_5F_expression_13773, var_mBeforeInstructionList_13849, var_endof_5F_before_5F_branch_14091, var_mBetweenInstructionList_14500, var_endof_5F_between_5F_branch_14746, var_mDoInstructionList_14404, var_endof_5F_do_5F_branch_14431, var_mAfterInstructionList_14820, var_endof_5F_after_5F_branch_15058, var_endof_5F_foreach_5F_instruction_15112  COMMA_SOURCE_FILE ("instruction-for.galgas", 460)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 399)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 407)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 413)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 419)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 427)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 431)) ;
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 436)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 437)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 438)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 446)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 454)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 399)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 407)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 413)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 419)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 427)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 431)) ;
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 436)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 437)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 438)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 446)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 454)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 257)) ;
  GALGAS_location var_instructionLocation_11679 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 258)) ;
  GALGAS_lstring var_grammarComponentName_11747 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 259)) ;
  GALGAS_lstring var_labelName_11820 ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_labelName_11820 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 262)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264)) ;
    var_labelName_11820 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 265)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_actualParameterListAST var_actualParameterList_12020 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_actualParameterList_12020, inCompiler) ;
  nt_grammar_5F_instruction_5F_core_ (var_instructionLocation_11679, var_actualParameterList_12020, var_grammarComponentName_11747, var_labelName_11820, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 257)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 259)) ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 265)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 257)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 259)) ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 265)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 278)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_12706 ;
  nt_expression_ (var_sourceExpression_12706, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_12731 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 280)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_12890 ;
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_12890 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 284)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_12890, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_12706, var_endOfSourceExpression_12731, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_12890  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 289)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 278)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 278)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 307)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_14007 ;
  nt_expression_ (var_sourceExpression_14007, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_14042 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 309)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 310)) ;
  GALGAS_semanticExpressionAST var_nameExpression_14125 ;
  nt_expression_ (var_nameExpression_14125, inCompiler) ;
  GALGAS_location var_endOfNameExpression_14158 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 312)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_14306 ;
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_14306 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 316)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 318)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_14306, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_14007, var_endOfSourceExpression_14042, var_nameExpression_14125, var_endOfNameExpression_14158, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_14306  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 321)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 307)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 310)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 318)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 307)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 310)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 318)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i26_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                             GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_7782 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 210)) ;
  GALGAS_ifExpressionList var_testExpression_7844 ;
  nt_if_5F_expression_ (var_testExpression_7844, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_7956 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_then_5F_instructionList_7956, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_7985 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 214)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_8064 ;
  switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_8064 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 217)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_else_5F_instructionList_8064, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 222)) ;
    GALGAS_semanticInstructionAST var_instruction_8385 ;
    nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_instruction_8385, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 224)) ;
    temp_0.addAssign_operation (var_instruction_8385  COMMA_SOURCE_FILE ("instruction-if.galgas", 224)) ;
    var_else_5F_instructionList_8064 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_7782, var_testExpression_7844, var_then_5F_instructionList_7956, var_endOf_5F_then_5F_branchLocation_7985, var_else_5F_instructionList_8064, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 232))  COMMA_SOURCE_FILE ("instruction-if.galgas", 226)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_if_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 222)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_if_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 222)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 241)) ;
  nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 243)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 241)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 243)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 241)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 243)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i28_ (GALGAS_ifExpressionList & outArgument_outExpressionList,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_ifExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 249)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 252)) ;
      GALGAS_lstring var_constantName_9390 ;
      switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
      case 1: {
        var_constantName_9390 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 255)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 257)) ;
        var_constantName_9390 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 258)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 260)) ;
      GALGAS_semanticExpressionAST var_expression_9568 ;
      nt_expression_5F_or_ (var_expression_9568, inCompiler) ;
      GALGAS_location var_endOfReceiverExpression_9591 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 262)) ;
      switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_9390, var_expression_9568, var_endOfReceiverExpression_9591, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 268))  COMMA_SOURCE_FILE ("instruction-if.galgas", 264))  COMMA_SOURCE_FILE ("instruction-if.galgas", 264)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 271)) ;
        GALGAS_lstring var_typeName_9908 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 272)) ;
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_9390, var_expression_9568, var_endOfReceiverExpression_9591, var_typeName_9908  COMMA_SOURCE_FILE ("instruction-if.galgas", 273))  COMMA_SOURCE_FILE ("instruction-if.galgas", 273)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 281)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 282)) ;
      GALGAS_semanticExpressionAST var_receiverExpression_10215 ;
      nt_expression_ (var_receiverExpression_10215, inCompiler) ;
      GALGAS_lstring var_optionalMethodName_10269 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 284)) ;
      GALGAS_optionalMethodActualArgumentList var_optionalMethodActualArgumentList_10334 = GALGAS_optionalMethodActualArgumentList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 285)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_10420 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 288)) ;
          GALGAS_semanticExpressionAST var_expression_10457 ;
          nt_expression_ (var_expression_10457, inCompiler) ;
          var_optionalMethodActualArgumentList_10334.addAssign_operation (var_selector_10420, GALGAS_optionalMethodActualArgument::constructor_actualOutput (var_expression_10457, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 290))  COMMA_SOURCE_FILE ("instruction-if.galgas", 290))  COMMA_SOURCE_FILE ("instruction-if.galgas", 290)) ;
        } break ;
        case 3: {
          GALGAS_lstring var_selector_10615 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
          switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 294)) ;
            GALGAS_lstring var_typeName_10684 ;
            switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
            case 1: {
              var_typeName_10684 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 297)) ;
            } break ;
            case 2: {
              var_typeName_10684 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 299)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_constantName_10846 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 301)) ;
            var_optionalMethodActualArgumentList_10334.addAssign_operation (var_selector_10615, GALGAS_optionalMethodActualArgument::constructor_actualLetInput (var_typeName_10684, var_constantName_10846  COMMA_SOURCE_FILE ("instruction-if.galgas", 302))  COMMA_SOURCE_FILE ("instruction-if.galgas", 302)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 304)) ;
            GALGAS_lstring var_typeName_11040 ;
            switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
            case 1: {
              var_typeName_11040 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 307)) ;
            } break ;
            case 2: {
              var_typeName_11040 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 309)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_variableName_11202 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 311)) ;
            var_optionalMethodActualArgumentList_10334.addAssign_operation (var_selector_10615, GALGAS_optionalMethodActualArgument::constructor_actualVarInput (var_typeName_11040, var_variableName_11202  COMMA_SOURCE_FILE ("instruction-if.galgas", 312))  COMMA_SOURCE_FILE ("instruction-if.galgas", 312)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 314)) ;
            var_optionalMethodActualArgumentList_10334.addAssign_operation (var_selector_10615, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 315)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("instruction-if.galgas", 315))  COMMA_SOURCE_FILE ("instruction-if.galgas", 315)) ;
          } break ;
          case 4: {
            GALGAS_lbigint var_repetitionCount_11537 = inCompiler->synthetizedAttribute_bigintValue () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 317)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 318)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsNotEqual, var_selector_10615.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("\?")) ;
                inCompiler->emitSemanticError (var_selector_10615.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 320)) ;
              }
            }
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_repetitionCount_11537.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 322)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_repetitionCount_11537.readProperty_location (), GALGAS_string ("the repetition count should be > 0"), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 323)) ;
              }
            }
            cEnumerator_range enumerator_11895 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_repetitionCount_11537.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 325)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 325))), kENUMERATION_UP) ;
            while (enumerator_11895.hasCurrentObject ()) {
              var_optionalMethodActualArgumentList_10334.addAssign_operation (var_selector_10615, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 326)), enumerator_11895.current (HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 326))  COMMA_SOURCE_FILE ("instruction-if.galgas", 326)) ;
              enumerator_11895.gotoNextObject () ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 330)) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_optionalMethodCall (var_receiverExpression_10215, var_optionalMethodName_10269, var_optionalMethodActualArgumentList_10334  COMMA_SOURCE_FILE ("instruction-if.galgas", 331))  COMMA_SOURCE_FILE ("instruction-if.galgas", 331)) ;
    } break ;
    case 3: {
      GALGAS_semanticExpressionAST var_expression_12331 ;
      nt_expression_ (var_expression_12331, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_regularExp (var_expression_12331  COMMA_SOURCE_FILE ("instruction-if.galgas", 338))  COMMA_SOURCE_FILE ("instruction-if.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 341)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 252)) ;
      switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 255)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 257)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 260)) ;
      nt_expression_5F_or_parse (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 271)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 272)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 281)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 282)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 284)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 288)) ;
          nt_expression_parse (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
          switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 294)) ;
            switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 299)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 301)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 304)) ;
            switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
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
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 314)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 317)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 318)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 330)) ;
    } break ;
    case 3: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 341)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 252)) ;
      switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 255)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 257)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 260)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 271)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 272)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 281)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 282)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 284)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 288)) ;
          nt_expression_indexing (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
          switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 294)) ;
            switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 299)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 301)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 304)) ;
            switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
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
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 314)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 317)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 318)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 330)) ;
    } break ;
    case 3: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 341)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 87)) ;
  GALGAS_lstring var_typeName_3512 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_typeName_3512, inCompiler) ;
  GALGAS_lstring var_constantName_3570 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 90)) ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (var_typeName_3512.readProperty_location (), var_typeName_3512, var_constantName_3570  COMMA_SOURCE_FILE ("instruction-let.galgas", 92)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
    GALGAS_semanticExpressionAST var_sourceExpression_3799 ;
    nt_expression_ (var_sourceExpression_3799, inCompiler) ;
    outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_3512.readProperty_location (), GALGAS_bool (true), var_typeName_3512, var_constantName_3570, var_sourceExpression_3799  COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 87)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 90)) ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 87)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 90)) ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
  GALGAS_lstring var_variableName_4422 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_4488 ;
  nt_expression_ (var_sourceExpression_4488, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName_4422.readProperty_location (), var_variableName_4422, var_sourceExpression_4488  COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 68)) ;
  GALGAS_location var_instructionLocation_2514 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 69)) ;
  GALGAS_logListAST var_logList_2571 = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_2634 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 73)) ;
      var_logList_2571.addAssign_operation (var_loggedVariableName_2634, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName_2634  COMMA_SOURCE_FILE ("instruction-log.galgas", 74))  COMMA_SOURCE_FILE ("instruction-log.galgas", 74)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 77)) ;
      GALGAS_lstring var_propertyName_2801 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 78)) ;
      var_logList_2571.addAssign_operation (var_propertyName_2801, GALGAS_structPropertyAccessExpressionAST::constructor_new (var_propertyName_2801.readProperty_location (), GALGAS_selfInExpressionAST::constructor_new (var_propertyName_2801.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-log.galgas", 81)), var_propertyName_2801  COMMA_SOURCE_FILE ("instruction-log.galgas", 81))  COMMA_SOURCE_FILE ("instruction-log.galgas", 79)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_logMessage_3028 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 83)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
      GALGAS_semanticExpressionAST var_logExpression_3077 ;
      nt_expression_ (var_logExpression_3077, inCompiler) ;
      var_logList_2571.addAssign_operation (var_logMessage_3028, var_logExpression_3077  COMMA_SOURCE_FILE ("instruction-log.galgas", 86)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 89)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation_2514, var_logList_2571  COMMA_SOURCE_FILE ("instruction-log.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 73)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 77)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 78)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 83)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 89)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 73)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 77)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 78)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 83)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 89)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 72)) ;
  GALGAS_location var_instructionLocation_2946 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 75)) ;
  GALGAS_semanticExpressionAST var_variantExpression_3051 ;
  nt_expression_ (var_variantExpression_3051, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_3077 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 78)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_3246 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_firstInstructions_3246, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_3279 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 83)) ;
  GALGAS_semanticExpressionAST var_loopExpression_3376 ;
  nt_expression_ (var_loopExpression_3376, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_3399 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 86)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_3559 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_secondInstructions_3559, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_3586 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 88)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 89)) ;
  GALGAS_location var_endOfLoopInstruction_3645 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 90)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithVariantAST::constructor_new (var_instructionLocation_2946, var_variantExpression_3051, var_endOfVariantExpression_3077, var_firstInstructions_3246, var_endOfFirstInstructions_3279, var_loopExpression_3376, var_endOfLoopExpression_3399, var_secondInstructions_3559, var_endOfSecondInstructions_3586, var_endOfLoopInstruction_3645  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 75)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 78)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 83)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 89)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 75)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 78)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 83)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 89)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 62)) ;
  GALGAS_location var_instructionLocation_2641 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 63)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_2792 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_firstInstructions_2792, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_2825 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 67)) ;
  GALGAS_semanticExpressionAST var_loopExpression_2922 ;
  nt_expression_ (var_loopExpression_2922, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_2945 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 70)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_3105 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_secondInstructions_3105, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_3132 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 73)) ;
  GALGAS_location var_endOfLoopInstruction_3191 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 74)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithoutVariantAST::constructor_new (var_instructionLocation_2641, var_firstInstructions_2792, var_endOfFirstInstructions_2825, var_loopExpression_2922, var_endOfLoopExpression_2945, var_secondInstructions_3105, var_endOfSecondInstructions_3132, var_endOfLoopInstruction_3191  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 67)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 73)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 67)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 42)) ;
  GALGAS_location var_instructionLocation_1789 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 44)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_1879 ;
  nt_expression_ (var_sourceExpression_1879, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation_1789, var_sourceExpression_1879  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 44)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 44)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 133)) ;
  GALGAS_location var_instructionLocation_5295 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 134)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 135)) ;
  GALGAS_semanticExpressionAST var_expression_5386 ;
  nt_expression_ (var_expression_5386, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_5295, var_expression_5386  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 135)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 135)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 148)) ;
  GALGAS_location var_instructionLocation_5892 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 150)) ;
  GALGAS_semanticExpressionAST var_expression_5983 ;
  nt_expression_ (var_expression_5983, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_5892, var_expression_5983  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 148)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 150)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 148)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 150)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)) ;
  GALGAS_location var_instructionLocation_6490 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 165)) ;
  GALGAS_semanticExpressionAST var_expression_6581 ;
  nt_expression_ (var_expression_6581, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6490, var_expression_6581  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 165)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 165)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 178)) ;
  GALGAS_location var_instructionLocation_7086 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 179)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 180)) ;
  GALGAS_semanticExpressionAST var_expression_7177 ;
  nt_expression_ (var_expression_7177, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::constructor_new (var_instructionLocation_7086, var_expression_7177  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 182)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 178)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 180)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 178)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 180)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_4857 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 145)) ;
  GALGAS_lstring var_selector_4908 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 146)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_4908.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_4908.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 148)) ;
    }
  }
  GALGAS_bool var_prefixedBySelf_5038 ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_5038 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 154)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 155)) ;
    var_prefixedBySelf_5038 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mReceiverName_5181 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 158)) ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
    GALGAS_actualParameterListAST var_actualParameterList_5284 ;
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_actualParameterList_5284, inCompiler) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_prefixedBySelf_5038.boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation_4857, var_mReceiverName_5181, var_actualParameterList_5284  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 162)) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_instructionLocation_4857, GALGAS_string ("invalid setter call"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 168)) ;
      outArgument_outInstruction.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    GALGAS_lstringlist var_receiverStructProperties_5604 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 171)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 173)) ;
      GALGAS_lstring var_structProperty_5698 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 174)) ;
      var_receiverStructProperties_5604.addAssign_operation (var_structProperty_5698  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 175)) ;
      if (select_galgas_34_InstructionsSyntax_58 (inCompiler) == 2) {
      }else{
        repeatFlag_4 = false ;
      }
    }
    GALGAS_lstring var_setterName_5834 ;
    {
    var_receiverStructProperties_5604.setter_popLast (var_setterName_5834, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 178)) ;
    }
    GALGAS_actualParameterListAST var_actualParameterList_5924 ;
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_actualParameterList_5924, inCompiler) ;
    outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation_4857, var_prefixedBySelf_5038, var_mReceiverName_5181, var_receiverStructProperties_5604, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 185)), var_setterName_5834, var_actualParameterList_5924  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 180)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 146)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 154)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 158)) ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 174)) ;
      if (select_galgas_34_InstructionsSyntax_58 (inCompiler) == 2) {
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 146)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 154)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 158)) ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 174)) ;
      if (select_galgas_34_InstructionsSyntax_58 (inCompiler) == 2) {
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
  GALGAS_location var_instructionLocation_4413 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 128)) ;
  GALGAS_semanticExpressionAST var_switchExpression_4472 ;
  nt_expression_ (var_switchExpression_4472, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_4497 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 130)) ;
  GALGAS_switchBranchesAST var_switchBranches_4563 = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 131)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
    GALGAS_lstringlist var_constantNameList_4653 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_4713 ;
    nt_switch_5F_case_ (var_constantNameList_4653, var_associatedValuesExtraction_4713, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 137)) ;
    GALGAS_semanticInstructionListAST var_instructions_4838 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_instructions_4838, inCompiler) ;
    var_switchBranches_4563.addAssign_operation (var_constantNameList_4653, var_associatedValuesExtraction_4713, var_instructions_4838, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 139))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 139)) ;
    if (select_galgas_34_InstructionsSyntax_59 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
  GALGAS_location var_endOfSwitchInstruction_4987 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 143)) ;
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_4413, var_switchExpression_4472, var_endOfSwitchExpression_4497, var_switchBranches_4563, var_endOfSwitchInstruction_4987  COMMA_SOURCE_FILE ("instruction-switch.galgas", 144)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 137)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_59 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 137)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_59 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i41_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 157)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_5553 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_5553  COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)) ;
    if (select_galgas_34_InstructionsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 164)) ;
  switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 167)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_63 (inCompiler)) {
      case 1: {
        GALGAS_lbigint var_n_5760 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 170)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
        cEnumerator_range enumerator_5803 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_n_5760.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172))), kENUMERATION_UP) ;
        while (enumerator_5803.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 173)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 173)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 173)) ;
          enumerator_5803.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 177)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 177)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_6046 ;
        switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
        case 1: {
          var_typeName_6046 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
        } break ;
        case 2: {
          var_typeName_6046 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 183)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_6185 ;
        switch (select_galgas_34_InstructionsSyntax_65 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_6185 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
          var_constantMarkedAsUnused_6185 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_6395 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_6046, var_constantName_6395, var_constantMarkedAsUnused_6185  COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i41_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
    if (select_galgas_34_InstructionsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 167)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_63 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 170)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_65 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i41_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
    if (select_galgas_34_InstructionsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 167)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_63 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 170)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_65 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_2006 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 46)) ;
  GALGAS_lstring var_mTypeName_2069 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 48)) ;
  GALGAS_lstring var_mMethodName_2153 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 49)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2241 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_actualParameterList_2241, inCompiler) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation_2006, var_mTypeName_2069, var_mMethodName_2153, var_actualParameterList_2241  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 49)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 49)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 108)) ;
  GALGAS_lstring var_variableName_4471 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 110)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_4537 ;
  nt_expression_ (var_sourceExpression_4537, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName_4471.readProperty_location (), var_variableName_4471, var_sourceExpression_4537  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 110)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 110)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 124)) ;
  GALGAS_lstring var_typeName_5130 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_typeName_5130, inCompiler) ;
  GALGAS_lstring var_variableName_5161 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 126)) ;
  switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GALGAS_localVariableDeclarationNoAssignmentAST::constructor_new (var_typeName_5130.readProperty_location (), var_typeName_5130, var_variableName_5161  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 128)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 130)) ;
    GALGAS_semanticExpressionAST var_sourceExpression_5362 ;
    nt_expression_ (var_sourceExpression_5362, inCompiler) ;
    outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_5130.readProperty_location (), GALGAS_bool (false), var_typeName_5130, var_variableName_5161, var_sourceExpression_5362  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 124)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 126)) ;
  switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 130)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 124)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 126)) ;
  switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 130)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 48)) ;
  GALGAS_location var_instructionLocation_2051 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 49)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_2133 ;
  nt_expression_ (var_mReceiverExpression_2133, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_2206 ;
  nt_expression_ (var_mWarningExpression_2206, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_2262 ;
  nt_issue_5F_fixit_ (var_fixitListAST_2262, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation_2051, var_mReceiverExpression_2133, var_mWarningExpression_2206, var_fixitListAST_2262  COMMA_SOURCE_FILE ("instruction-warning.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 48)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 51)) ;
  nt_expression_parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 48)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 51)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 199)) ;
  GALGAS_location var_instructionLocation_7191 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 200)) ;
  GALGAS_semanticExpressionAST var_keyExpression_7273 ;
  nt_expression_ (var_keyExpression_7273, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_7295 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 202)) ;
  GALGAS_lstring var_withPrefix_7348 ;
  switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
    var_withPrefix_7348 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 205)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 207)) ;
    var_withPrefix_7348 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 208)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 210)) ;
  nt_with_5F_instruction_5F_core_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_instructionLocation_7191, var_keyExpression_7273, var_endOfKeyExpression_7295, var_withPrefix_7348, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 212)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 199)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 207)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 208)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 210)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 212)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 199)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 207)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 208)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 210)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 212)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i47_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                               const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_8163 ;
  nt_expression_ (var_receiverExpression_8163, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_8190 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 227)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_8248 ;
  switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_8248 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 230)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 232)) ;
    var_searchMethodNameForErrorSignaling_8248 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 235)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_8562 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mDoBranchInstructions_8562, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_8592 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 237)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_8665 ;
  switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_8665 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 240)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 242)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_8248.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_8248.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 244)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mElseBranchInstructions_8665, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_8163, var_endOfReceiverExpression_8190, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_8248, var_mDoBranchInstructions_8562, var_endOfDoInstructions_8592, var_mElseBranchInstructions_8665, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 259))  COMMA_SOURCE_FILE ("instruction-with.galgas", 248)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i47_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 232)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 235)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 242)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i47_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 232)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 235)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 242)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i48_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                               const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_9880 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 274)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_9880.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_9880.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 276)) ;
    }
  }
  GALGAS_lstringlist var_structAttributeList_10004 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 278)) ;
  GALGAS_bool var_targetIsPrefixedBySelf_10056 ;
  GALGAS_lstring var_targetObjectName_10096 ;
  switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
    var_targetIsPrefixedBySelf_10056 = GALGAS_bool (false) ;
    var_targetObjectName_10096 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 283)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_galgas_34_InstructionsSyntax_71 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 286)) ;
        GALGAS_lstring var_mStructFieldName_10261 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 287)) ;
        var_structAttributeList_10004.addAssign_operation (var_mStructFieldName_10261  COMMA_SOURCE_FILE ("instruction-with.galgas", 288)) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  case 2: {
    var_targetIsPrefixedBySelf_10056 = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 292)) ;
    switch (select_galgas_34_InstructionsSyntax_72 (inCompiler)) {
    case 1: {
      var_targetObjectName_10096 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 294)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 296)) ;
      var_targetObjectName_10096 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 297)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        if (select_galgas_34_InstructionsSyntax_73 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 300)) ;
          GALGAS_lstring var_mStructFieldName_10574 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 301)) ;
          var_structAttributeList_10004.addAssign_operation (var_mStructFieldName_10574  COMMA_SOURCE_FILE ("instruction-with.galgas", 302)) ;
        }else{
          repeatFlag_3 = false ;
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
  GALGAS_location var_endOfReceiverExpression_10680 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 306)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_10738 ;
  switch (select_galgas_34_InstructionsSyntax_74 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_10738 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 309)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 311)) ;
    var_searchMethodNameForErrorSignaling_10738 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 312)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 314)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_11052 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mDoBranchInstructions_11052, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_11082 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 316)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_11157 ;
  switch (select_galgas_34_InstructionsSyntax_75 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_11157 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 319)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 321)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_10738.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_10738.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 323)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mElseBranchInstructions_11157, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_11541 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 327)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_targetObjectName_10096, var_targetIsPrefixedBySelf_10056, var_structAttributeList_10004, var_endOfReceiverExpression_10680, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_10738, var_mDoBranchInstructions_11052, var_endOf_5F_do_5F_instructions_11082, var_mElseBranchInstructions_11157, var_endOf_5F_else_5F_instructions_11541  COMMA_SOURCE_FILE ("instruction-with.galgas", 328)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i48_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 274)) ;
  switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 283)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_InstructionsSyntax_71 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 286)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 287)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 292)) ;
    switch (select_galgas_34_InstructionsSyntax_72 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 296)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 297)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_34_InstructionsSyntax_73 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 300)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 301)) ;
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
  switch (select_galgas_34_InstructionsSyntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 311)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 312)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 314)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_75 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 321)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i48_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 274)) ;
  switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 283)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_InstructionsSyntax_71 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 286)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 287)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 292)) ;
    switch (select_galgas_34_InstructionsSyntax_72 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 296)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 297)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_34_InstructionsSyntax_73 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 300)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 301)) ;
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
  switch (select_galgas_34_InstructionsSyntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 311)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 312)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 314)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_75 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 321)) ;
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
    if (select_galgas_34_DeclarationsSyntax_0 (inCompiler) == 2) {
      GALGAS_stringset joker_9110 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 245)) ;
      nt_declaration_ (ioArgument_ioDeclarations, joker_9110, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgasScanner * inCompiler) {
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                          GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  GALGAS_AccessControlAST var_accessControl_10773 ;
  nt_acces_5F_control_ (var_accessControl_10773, inCompiler) ;
  GALGAS_bool var_isConstant_10801 ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 279)) ;
    var_isConstant_10801 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 282)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_10773, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 283)) ;
    var_isConstant_10801 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_11042 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyTypeName_11042, inCompiler) ;
  GALGAS_lstring var_propertyName_11081 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 287)) ;
  GALGAS_bool var_selectorAttribute_11102 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 291)) ;
      var_selectorAttribute_11102 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_propertyInCollectionInitializationAST var_initialization_11253 ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
    var_initialization_11253 = GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 296)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 298)) ;
    GALGAS_semanticExpressionAST var_expression_11349 ;
    nt_expression_ (var_expression_11349, inCompiler) ;
    var_initialization_11253 = GALGAS_propertyInCollectionInitializationAST::constructor_some (var_expression_11349  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 300)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_isConstant_10801, var_propertyTypeName_11042, var_propertyName_11081, var_accessControl_10773, var_selectorAttribute_11102, var_initialization_11253  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 302)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_acces_5F_control_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 279)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 282)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 287)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 291)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 298)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 279)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 282)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 287)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 291)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 298)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 317)) ;
  GALGAS_lstring var_mFilewrapperName_12062 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
  GALGAS_lstring var_mFilewrapperPath_12148 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 320)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_12199 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_12199, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_12268 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_12268, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_12385 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_filewrapperTemplateList_12385, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 327)), var_mFilewrapperName_12062, var_mFilewrapperPath_12148, var_filewrapperTextFileExtensionList_12199, var_filewrapperBinaryFileExtensionList_12268, var_filewrapperTemplateList_12385  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 324))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 324)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 317)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 320)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 317)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 320)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 339)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
  GALGAS_lstring var_mFilewrapperName_13060 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  GALGAS_lstring var_mFilewrapperPath_13146 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_13197 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_13197, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_13266 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_13266, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_13383 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_filewrapperTemplateList_13383, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 350)), var_mFilewrapperName_13060, var_mFilewrapperPath_13146, var_filewrapperTextFileExtensionList_13197, var_filewrapperBinaryFileExtensionList_13266, var_filewrapperTemplateList_13383  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 347))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 347)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 339)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 339)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 363)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_14070 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 367)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_14070  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 368)) ;
      if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 370)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 373)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 363)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 367)) ;
      if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 370)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 373)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 363)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 367)) ;
      if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 370)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 373)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 379)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 380)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_14530 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 384)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_14530  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 385)) ;
      if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 387)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 390)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 380)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 384)) ;
      if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 387)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 390)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 380)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 384)) ;
      if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 387)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 390)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 398)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 399)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_15124 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 404)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_15181 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 405)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_15253 = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 406)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 407)) ;
      switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          GALGAS_lstring var_selector_15369 ;
          switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
          case 1: {
            var_selector_15369 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 413)) ;
          } break ;
          case 2: {
            var_selector_15369 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 415)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              GALGAS_bool test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnUselessSelector.readProperty_value ()) ;
              if (kBoolTrue == test_3.boolEnum ()) {
                test_3 = GALGAS_bool (kIsEqual, var_selector_15369.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
              }
              test_2 = test_3.boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (var_selector_15369.readProperty_location (), GALGAS_string ("check no useless selector: this selector should be removed"), fixItArray4  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 417)) ;
              }
            }
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_typeName_15787 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_typeName_15787, inCompiler) ;
          GALGAS_bool var_isUnused_15816 ;
          switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
            var_isUnused_15816 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 425)) ;
            var_isUnused_15816 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_15975 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 428)) ;
          var_filewrapperTemplateFormalInputParameters_15253.addAssign_operation (var_selector_15369, var_typeName_15787, var_argumentName_15975, var_isUnused_15816  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 429)) ;
          if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 431)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 434)) ;
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_15124, var_mFilewrapperTemplatePath_15181, var_filewrapperTemplateFormalInputParameters_15253  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 435)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 440)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 398)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 404)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 405)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 407)) ;
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
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 415)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_parse (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 425)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 428)) ;
          if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 431)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 434)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 440)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 398)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 404)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 405)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 407)) ;
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
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 415)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 425)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 428)) ;
          if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 431)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 434)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 440)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  GALGAS_lstring var_boolsetTypeName_1924 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 51)) ;
  GALGAS_lstringlist var_slotList_1995 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_slotName_2044 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 54)) ;
    var_slotList_1995.addAssign_operation (var_slotName_2044  COMMA_SOURCE_FILE ("type-boolset.galgas", 55)) ;
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 57)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 59)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool (false), var_boolsetTypeName_1924, var_slotList_1995  COMMA_SOURCE_FILE ("type-boolset.galgas", 60))  COMMA_SOURCE_FILE ("type-boolset.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 54)) ;
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 57)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 59)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 54)) ;
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 57)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  GALGAS_bool var_isAbstract_3213 ;
  switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
    var_isAbstract_3213 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 100)) ;
    var_isAbstract_3213 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 103)) ;
  GALGAS_lstring var_className_3354 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 104)) ;
  GALGAS_lstring var_superClassName_3406 ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    var_superClassName_3406 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 107)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 109)) ;
    var_superClassName_3406 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_generateInSeparateFile_3601 ;
  switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_3601 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
    var_generateInSeparateFile_3601 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 119)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_3825 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 121)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyList_3825, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_className_3354, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 128)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_isAbstract_3213, GALGAS_bool (true), var_className_3354, var_superClassName_3406, var_generateInSeparateFile_3601, var_propertyList_3825  COMMA_SOURCE_FILE ("type-class.galgas", 129))  COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
  GALGAS_lstring temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_superClassName_3406.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_superClassName_3406 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_lstring::constructor_new (var_superClassName_3406.readProperty_string ().add_operation (GALGAS_string ("-weak"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 145)), var_superClassName_3406.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 145)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool (false), var_className_3354, GALGAS_lstring::constructor_new (var_className_3354.readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 142)), var_className_3354.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 142)), temp_1, var_generateInSeparateFile_3601, var_propertyList_3825  COMMA_SOURCE_FILE ("type-class.galgas", 139))  COMMA_SOURCE_FILE ("type-class.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 103)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 104)) ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 109)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 119)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 128)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 103)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 104)) ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 109)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 119)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 72)) ;
  GALGAS_lstring var_mEnumTypeName_2600 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 74)) ;
  GALGAS_enumConstantList var_mConstantList_2672 = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 77)) ;
    GALGAS_lstring var_constantName_2739 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 78)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_2776 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 79)) ;
    switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_2877 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 84)) ;
        GALGAS_lstring var_associatedValueName_2925 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 85)) ;
        var_associatedValueTypeList_2776.addAssign_operation (var_associatedValueType_2877, var_associatedValueName_2925  COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
        if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_2672.addAssign_operation (var_constantName_2739, var_associatedValueTypeList_2776  COMMA_SOURCE_FILE ("type-enum.galgas", 91)) ;
    if (select_galgas_34_DeclarationsSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_method_5F_declaration_ (var_mEnumTypeName_2600, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 98)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName_2600, var_mConstantList_2672  COMMA_SOURCE_FILE ("type-enum.galgas", 99))  COMMA_SOURCE_FILE ("type-enum.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 72)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 78)) ;
    switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 84)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 85)) ;
        if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 98)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 72)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 78)) ;
    switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 84)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 85)) ;
        if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 188)) ;
  GALGAS_lstring var_externTypeName_7222 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 189)) ;
  GALGAS_string var_cppPredeclarationCode_7308 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_7308, inCompiler) ;
  GALGAS_string var_cppClassCode_7373 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_7373, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 192)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_7429 = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 193)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_7491 = GALGAS_externTypeGetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 194)) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_7547 = GALGAS_externTypeSetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 195)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_7603 = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 196)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_externTypeConstructorList_7429, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_externTypeGetterList_7491, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_externTypeSetterList_7547, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_externTypeMethodList_7603, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 207)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName_7222, var_cppPredeclarationCode_7308, var_cppClassCode_7373, var_externTypeConstructorList_7429, var_externTypeGetterList_7491, var_externTypeSetterList_7547, var_externTypeMethodList_7603  COMMA_SOURCE_FILE ("type-extern.galgas", 208))  COMMA_SOURCE_FILE ("type-extern.galgas", 208)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 188)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 189)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 192)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 207)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 188)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 189)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 192)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 207)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 223)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_23 (inCompiler) == 2) {
      GALGAS_lstring var_cppPredeclarationCodeElement_8694 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 227)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_8694.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 228)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 223)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 227)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 230)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 223)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 227)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 236)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      GALGAS_lstring var_cppPredeclarationCodeElement_9090 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 240)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_9090.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 241)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 243)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 240)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 243)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 240)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 243)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i13_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                             GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 251)) ;
  GALGAS_lstring var_constructorName_9609 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 252)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_9666 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 253)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_25 (inCompiler) == 2) {
      GALGAS_lstring var_selector_9724 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
      GALGAS_lstring var_argumentTypeName_9761 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 257)) ;
      GALGAS_lstring var_argumentName_9811 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 258)) ;
      var_argumentTypeList_9666.addAssign_operation (var_selector_9724, var_argumentTypeName_9761, var_argumentName_9811  COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 261)) ;
  GALGAS_lstring var_resultTypeName_9985 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_resultTypeName_9985, inCompiler) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_constructorName_9609, var_resultTypeName_9985, var_argumentTypeList_9666  COMMA_SOURCE_FILE ("type-extern.galgas", 263)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 251)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 252)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 257)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 258)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 261)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 251)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 252)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 257)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 258)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 261)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i14_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                        GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 271)) ;
  GALGAS_lstring var_getterName_10469 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_10521 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 273)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_26 (inCompiler) == 2) {
      GALGAS_lstring var_selector_10579 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 276)) ;
      GALGAS_lstring var_argumentTypeName_10616 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 277)) ;
      GALGAS_lstring var_argumentName_10666 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
      var_argumentTypeList_10521.addAssign_operation (var_selector_10579, var_argumentTypeName_10616, var_argumentName_10666  COMMA_SOURCE_FILE ("type-extern.galgas", 279)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 281)) ;
  GALGAS_lstring var_resultTypeName_10840 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_resultTypeName_10840, inCompiler) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_10469, var_resultTypeName_10840, var_argumentTypeList_10521  COMMA_SOURCE_FILE ("type-extern.galgas", 283)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 271)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 276)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 277)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 281)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 271)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 276)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 277)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 281)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i15_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                        GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 291)) ;
  GALGAS_lstring var_setterName_11314 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
  GALGAS_formalParameterListAST var_formalParameterList_11431 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_11431, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_11314, var_formalParameterList_11431  COMMA_SOURCE_FILE ("type-extern.galgas", 294)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 291)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 291)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i16_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                        GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 302)) ;
  GALGAS_lstring var_methodName_11897 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 303)) ;
  GALGAS_formalParameterListAST var_formalParameterList_12014 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_12014, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_11897, var_formalParameterList_12014, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 305))  COMMA_SOURCE_FILE ("type-extern.galgas", 305)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 302)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 303)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 302)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 303)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 63)) ;
  GALGAS_lstring var_graphTypeName_2473 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  GALGAS_lstring var_associatedListTypeName_2546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_2593 = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-graph.galgas", 72)) ;
      GALGAS_lstring var_insertName_2723 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      GALGAS_lstring var_errorMessage_2787 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      var_graphInsertModifierList_2593.addAssign_operation (var_insertName_2723, var_errorMessage_2787  COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 78)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName_2473, var_associatedListTypeName_2546, var_graphInsertModifierList_2593  COMMA_SOURCE_FILE ("type-graph.galgas", 79))  COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 63)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-graph.galgas", 72)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 78)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 63)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-graph.galgas", 72)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
  GALGAS_lstring var_listTypeName_2252 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 63)) ;
  GALGAS_bool var_isUsefull_2326 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 67)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_2326.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 69)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 69)) ;
        }
      }
      var_isUsefull_2326 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 73)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2554 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 74)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyList_2554, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_listTypeName_2252, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_listTypeName_2252, var_propertyList_2554, var_isUsefull_2326  COMMA_SOURCE_FILE ("type-list.galgas", 82))  COMMA_SOURCE_FILE ("type-list.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 73)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 73)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 42)) ;
  GALGAS_lstring var_mListmapTypeName_1862 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  GALGAS_lstring var_mAssociatedListTypeName_1940 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName_1862, var_mAssociatedListTypeName_1940  COMMA_SOURCE_FILE ("type-listmap.galgas", 47))  COMMA_SOURCE_FILE ("type-listmap.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 42)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 42)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 62)) ;
  GALGAS_lstring var_mDictTypeName_2425 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 66)) ;
  GALGAS_lstring var_keyTypeName_2542 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 69)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2592 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyList_2592, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_mDictTypeName_2425, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 77)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool (false), var_mDictTypeName_2425, var_keyTypeName_2542, var_propertyList_2592  COMMA_SOURCE_FILE ("type-dict.galgas", 78))  COMMA_SOURCE_FILE ("type-dict.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 62)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 69)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 62)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 69)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 152)) ;
  GALGAS_lstring var_mMapTypeName_5882 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_5985 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 157)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_6040 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 158)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_6116 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 159)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_6171 = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 160)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_6237 = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyList_5985, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_6040, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_6116, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_6171, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_6237, inCompiler) ;
    } break ;
    case 7: {
      nt_method_5F_declaration_ (var_mMapTypeName_5882, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 176)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_5882, var_propertyList_5985, var_mInsertMethodList_6040, var_mSearchMethodList_6116, var_mRemoveMethodList_6171, var_insertOrReplaceDeclarationListAST_6237  COMMA_SOURCE_FILE ("type-map.galgas", 177))  COMMA_SOURCE_FILE ("type-map.galgas", 177)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 152)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 176)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 152)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_searchMethod COMMA_SOURCE_FILE ("type-map.galgas", 191)) ;
  GALGAS_lstring var_methodName_7295 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 193)) ;
  GALGAS_lstring var_errorMessage_7355 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 194)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_7295, var_errorMessage_7355  COMMA_SOURCE_FILE ("type-map.galgas", 195)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_searchMethod COMMA_SOURCE_FILE ("type-map.galgas", 191)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 193)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 194)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_searchMethod COMMA_SOURCE_FILE ("type-map.galgas", 191)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 193)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 194)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_removeSetter COMMA_SOURCE_FILE ("type-map.galgas", 201)) ;
  GALGAS_lstring var_mMethodName_7706 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 203)) ;
  GALGAS_lstring var_mErrorMessage_7767 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 204)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_7706, var_mErrorMessage_7767  COMMA_SOURCE_FILE ("type-map.galgas", 205)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_removeSetter COMMA_SOURCE_FILE ("type-map.galgas", 201)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 203)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 204)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_removeSetter COMMA_SOURCE_FILE ("type-map.galgas", 201)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 203)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 204)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("type-map.galgas", 211)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 212))  COMMA_SOURCE_FILE ("type-map.galgas", 212)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("type-map.galgas", 211)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("type-map.galgas", 211)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-map.galgas", 218)) ;
  GALGAS_lstring var_mMethodName_8428 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 219)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 220)) ;
  GALGAS_lstring var_mErrorMessage_8489 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 221)) ;
  GALGAS_lstring var_mShadowErrorMessage_8520 ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_8520 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 224)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 226)) ;
    var_mShadowErrorMessage_8520 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 227)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_8428, var_mErrorMessage_8489, var_mShadowErrorMessage_8520  COMMA_SOURCE_FILE ("type-map.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-map.galgas", 218)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 219)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 221)) ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 226)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 227)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertSetter COMMA_SOURCE_FILE ("type-map.galgas", 218)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 219)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("type-map.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 221)) ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 226)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 227)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 81)) ;
  GALGAS_lstring var_sortedListTypeName_2968 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 83)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_3091 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_33 (inCompiler) == 2) {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_attributeList_3091, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 89)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 90)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_3291 = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 91)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_3291, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName_2968, var_attributeList_3091, var_sortDescriptorList_3291  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 98))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 81)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 83)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_33 (inCompiler) == 2) {
      nt_property_5F_declaration_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 89)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 90)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 81)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 83)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_33 (inCompiler) == 2) {
      nt_property_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 89)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 90)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i27_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_3865 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 109)) ;
  GALGAS_bool var_mAscending_3900 ;
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 112)) ;
    var_mAscending_3900 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 115)) ;
    var_mAscending_3900 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_3865, var_mAscending_3900  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 109)) ;
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 112)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 109)) ;
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 112)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  GALGAS_lstring var_structTypeName_2108 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 53)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2194 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyList_2194, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_structTypeName_2108, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 61)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName_2108, var_propertyList_2194, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-struct.galgas", 62))  COMMA_SOURCE_FILE ("type-struct.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 53)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 53)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 42)) ;
  GALGAS_lstring var_aliasTypeName_1844 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 44)) ;
  GALGAS_lstring var_definedTypeName_1981 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_definedTypeName_1981, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_typealiasDeclarationAST::constructor_new (GALGAS_bool (false), var_aliasTypeName_1844, var_definedTypeName_1981  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 46))  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 42)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 44)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 42)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 44)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i30_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i31_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 68)) ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, outArgument_outTypeName, inCompiler) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 70)), GALGAS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 68)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 71)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 68)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i32_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 79)) ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 81)) ;
  GALGAS_lstring joker_3567 ; // Joker input parameter
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, joker_3567, inCompiler) ;
  joker_3567.drop () ; // Release temporary input variables (joker in source)
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 83)), GALGAS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 79)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 81)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 84)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 79)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 81)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i33_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, outArgument_outTypeName, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 95)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_t_4129 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_t_4129, inCompiler) ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_t_4129.readProperty_location (), GALGAS_string ("not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 98)) ;
      if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 100)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 102)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_selector_4232 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 104)) ;
  TC_Array <C_FixItDescription> fixItArray2 ;
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 105)), GALGAS_string ("Not handled yet"), fixItArray2  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 105)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_selector_4232.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_selector_4232.readProperty_location (), GALGAS_string ("only '\?' is allowed here"), fixItArray4  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 107)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 95)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_type_5F_definition_parse (inCompiler) ;
      if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 100)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 102)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 104)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 95)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_type_5F_definition_indexing (inCompiler) ;
      if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 100)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 102)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 120)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 122)), GALGAS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_parse (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 120)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 123)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 120)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 78)) ;
  GALGAS_lstring var_className_3211 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 80)) ;
  GALGAS_lstring var_mGetterName_3297 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 81)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_3420 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_3420, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 83)) ;
  GALGAS_lstring var_returnedTypeName_3531 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_3531, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_3591 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 87)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_3591.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_3211, var_mGetterName_3297, var_mFormalInputParameterList_3420, var_returnedTypeName_3531  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 90))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 90)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 78)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 80)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 81)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 83)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 78)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 80)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 81)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 83)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i36_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)) ;
  GALGAS_lstring var_mGetterName_4259 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 106)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_4382 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_4382, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 108)) ;
  GALGAS_lstring var_returnedTypeName_4493 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_4493, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_4553 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 112)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_4553.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 113)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_4259, var_mFormalInputParameterList_4382, var_returnedTypeName_4493  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 115))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i36_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 106)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 108)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 106)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 108)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 61)) ;
  GALGAS_lstring var_className_2696 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 63)) ;
  GALGAS_lstring var_mMethodName_2791 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 64)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2952 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_2952, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_2696, var_mMethodName_2791, var_formalParameterList_2952  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 66))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 61)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 63)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 64)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 61)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 63)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 64)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i38_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 80)) ;
  GALGAS_lstring var_mMethodName_3526 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 81)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3687 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_3687, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_3526, var_formalParameterList_3687  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 83))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i38_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 80)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 81)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i38_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 80)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 81)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i39_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 97)) ;
  GALGAS_lstring var_className_4048 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 99)) ;
  GALGAS_lstring var_mMethodName_4135 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 100)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_4221 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_4221, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 102)) ;
  GALGAS_lstring var_returnedTypeName_4332 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_4332, inCompiler) ;
  GALGAS_lstring var_resultVariableName_4366 ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    var_resultVariableName_4366 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 106)) ;
  } break ;
  case 2: {
    var_resultVariableName_4366 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 110)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4623 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_4623, inCompiler) ;
  GALGAS_location var_endOfInstructionList_4664 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 112)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 113)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_4048, var_mMethodName_4135, var_mFormalInputParameterList_4221, var_returnedTypeName_4332, var_resultVariableName_4366, var_routineInstructionList_4623, var_endOfInstructionList_4664  COMMA_SOURCE_FILE ("extension-getter.galgas", 114))  COMMA_SOURCE_FILE ("extension-getter.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i39_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 97)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 99)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 100)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 102)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 106)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 110)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 113)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i39_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 97)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 99)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 100)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 102)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 106)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 110)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i40_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 132)) ;
  GALGAS_lstring var_mMethodName_5401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 133)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_5487 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_5487, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 135)) ;
  GALGAS_lstring var_returnedTypeName_5598 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_5598, inCompiler) ;
  GALGAS_lstring var_resultVariableName_5632 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 137)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 138)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_5799 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_5799, inCompiler) ;
  GALGAS_location var_endOfInstructionList_5840 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 141)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_mMethodName_5401, var_mFormalInputParameterList_5487, var_returnedTypeName_5598, var_resultVariableName_5632, var_routineInstructionList_5799, var_endOfInstructionList_5840  COMMA_SOURCE_FILE ("extension-getter.galgas", 142))  COMMA_SOURCE_FILE ("extension-getter.galgas", 142)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i40_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 132)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 133)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 135)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 138)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 141)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i40_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 132)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 133)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 135)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 138)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i41_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 77)) ;
  GALGAS_lstring var_className_3432 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 79)) ;
  GALGAS_lstring var_mMethodName_3519 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 80)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3672 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_3672, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 82)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3814 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_3814, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_3845 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 85)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_3432, var_mMethodName_3519, var_formalParameterList_3672, var_routineInstructionList_3814, var_endOfMethodLocation_3845  COMMA_SOURCE_FILE ("extension-method.galgas", 86))  COMMA_SOURCE_FILE ("extension-method.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i41_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 79)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 80)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 82)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i41_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 79)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 80)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 82)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i42_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 102)) ;
  GALGAS_lstring var_mMethodName_4524 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 103)) ;
  GALGAS_formalParameterListAST var_formalParameterList_4677 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_4677, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 105)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4819 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_4819, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_4850 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 108)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_mMethodName_4524, var_formalParameterList_4677, var_routineInstructionList_4819, var_endOfMethodLocation_4850  COMMA_SOURCE_FILE ("extension-method.galgas", 109))  COMMA_SOURCE_FILE ("extension-method.galgas", 109)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i42_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 102)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 103)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 105)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 108)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i42_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 102)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 103)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 105)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 108)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i43_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 75)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 76)) ;
  GALGAS_lstring var_className_3440 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 78)) ;
  GALGAS_lstring var_setterName_3527 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 79)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3679 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_3679, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 81)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3821 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_3821, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_3862 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 84)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_3440, var_setterName_3527, var_formalParameterList_3679, var_routineInstructionList_3821, var_endOfSetterLocation_3862  COMMA_SOURCE_FILE ("extension-setter.galgas", 85))  COMMA_SOURCE_FILE ("extension-setter.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i43_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 75)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 76)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 78)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 79)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 81)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 84)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i43_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 75)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 76)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 78)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 79)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 81)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i44_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 102)) ;
  GALGAS_lstring var_setterName_4554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 103)) ;
  GALGAS_formalParameterListAST var_formalParameterList_4706 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_4706, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 105)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4848 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_4848, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_4889 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 108)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_setterName_4554, var_formalParameterList_4706, var_routineInstructionList_4848, var_endOfSetterLocation_4889  COMMA_SOURCE_FILE ("extension-setter.galgas", 109))  COMMA_SOURCE_FILE ("extension-setter.galgas", 109)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i44_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 102)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 103)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 105)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 108)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i44_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 102)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 103)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 105)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 108)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i45_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 80)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 81)) ;
  GALGAS_lstring var_className_3310 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 83)) ;
  GALGAS_lstring var_mGetterName_3404 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 84)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_3535 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_3535, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 86)) ;
  GALGAS_lstring var_returnedTypeName_3646 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_3646, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_3699 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 89)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_3699.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 90)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_3310, var_mGetterName_3404, var_mFormalInputParameterList_3535, var_returnedTypeName_3646  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 93))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i45_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 80)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 81)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 83)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 84)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 86)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 89)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i45_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 80)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 81)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 83)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 84)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 86)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 89)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i46_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 109)) ;
  GALGAS_lstring var_mGetterName_4399 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 110)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_4530 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_4530, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)) ;
  GALGAS_lstring var_returnedTypeName_4641 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_4641, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_4694 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 115)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_4694.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 116)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_4399, var_mFormalInputParameterList_4530, var_returnedTypeName_4641  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i46_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 109)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 110)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 115)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i46_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 109)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 110)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 115)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i47_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 64)) ;
  GALGAS_lstring var_className_2799 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 66)) ;
  GALGAS_lstring var_mMethodName_2902 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 67)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3070 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_3070, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_2799, var_mMethodName_2902, var_formalParameterList_3070  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 69))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i47_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 66)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 67)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i47_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 66)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 67)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i48_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 84)) ;
  GALGAS_lstring var_mMethodName_3669 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3838 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_3838, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_3669, var_formalParameterList_3838  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 87))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i48_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 84)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i48_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 84)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i49_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 100)) ;
  GALGAS_lstring var_className_4193 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 102)) ;
  GALGAS_lstring var_mMethodName_4288 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 103)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_4382 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_4382, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 105)) ;
  GALGAS_lstring var_returnedTypeName_4492 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_4492, inCompiler) ;
  GALGAS_lstring var_resultVariableName_4526 ;
  switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    var_resultVariableName_4526 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 109)) ;
  } break ;
  case 2: {
    var_resultVariableName_4526 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 111)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 113)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4783 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_4783, inCompiler) ;
  GALGAS_location var_endOfInstructionList_4824 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 116)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_4193, var_mMethodName_4288, var_formalInputParameterList_4382, var_returnedTypeName_4492, var_resultVariableName_4526, var_routineInstructionList_4783, var_endOfInstructionList_4824  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 117))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i49_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 100)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 102)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 103)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 105)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 109)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 113)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 116)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i49_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 100)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 102)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 103)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 105)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 109)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 113)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 116)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i50_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 136)) ;
  GALGAS_lstring var_mMethodName_5576 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 137)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_5670 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_5670, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 139)) ;
  GALGAS_lstring var_returnedTypeName_5780 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_5780, inCompiler) ;
  GALGAS_lstring var_resultVariableName_5814 ;
  switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    var_resultVariableName_5814 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 143)) ;
  } break ;
  case 2: {
    var_resultVariableName_5814 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 145)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 147)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_6071 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_6071, inCompiler) ;
  GALGAS_location var_endOfInstructionList_6112 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_mMethodName_5576, var_formalInputParameterList_5670, var_returnedTypeName_5780, var_resultVariableName_5814, var_routineInstructionList_6071, var_endOfInstructionList_6112  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 151))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i50_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 136)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 137)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 139)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 143)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 147)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i50_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 136)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 137)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 139)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 143)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 147)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i51_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 65)) ;
  GALGAS_lstring var_className_2836 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 67)) ;
  GALGAS_lstring var_mMethodName_2941 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 68)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3102 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_3102, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 70)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3244 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_3244, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_3285 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 73)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2836, var_mMethodName_2941, var_formalParameterList_3102, var_routineInstructionList_3244, var_endOfMethodLocation_3285  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 74))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i51_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 65)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 68)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 73)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i51_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 65)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 68)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i52_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 91)) ;
  GALGAS_lstring var_mMethodName_3989 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 92)) ;
  GALGAS_formalParameterListAST var_formalParameterList_4150 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameterList_4150, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 94)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4292 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_routineInstructionList_4292, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_4333 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 97)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), constinArgument_inClassName, var_mMethodName_3989, var_formalParameterList_4150, var_routineInstructionList_4292, var_endOfMethodLocation_4333  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 98))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i52_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 91)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 92)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 94)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i52_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 91)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 92)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 94)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i53_ (GALGAS_AccessControlAST & outArgument_outAccessControl,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("accessControl.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 82)) ;
    outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("accessControl.galgas", 83)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 85)) ;
    switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_protectedAccess (SOURCE_FILE ("accessControl.galgas", 87)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 89)) ;
      GALGAS_lstring var_value_3084 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 90)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsNotEqual, var_value_3084.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_3084.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 92)) ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 94)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_protectedSetAccess (SOURCE_FILE ("accessControl.galgas", 95)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 98)) ;
    switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_privateAccess (SOURCE_FILE ("accessControl.galgas", 100)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 102)) ;
      GALGAS_lstring var_value_3396 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 103)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, var_value_3396.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_3396.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 105)) ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 107)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_privateSetAccess (SOURCE_FILE ("accessControl.galgas", 108)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 111)) ;
    switch (select_galgas_34_DeclarationsSyntax_50 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_fileprivateSetAccess (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 113))  COMMA_SOURCE_FILE ("accessControl.galgas", 113)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 115)) ;
      GALGAS_lstring var_value_3747 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 116)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_fileprivateSetAccess (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 117))  COMMA_SOURCE_FILE ("accessControl.galgas", 117)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_value_3747.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_3747.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 119)) ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 121)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i53_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 85)) ;
    switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 89)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 90)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 94)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 98)) ;
    switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 102)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 103)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 107)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 111)) ;
    switch (select_galgas_34_DeclarationsSyntax_50 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 115)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 121)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i53_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 85)) ;
    switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 89)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 90)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 94)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 98)) ;
    switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 102)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 103)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 107)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 111)) ;
    switch (select_galgas_34_DeclarationsSyntax_50 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 115)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 121)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

