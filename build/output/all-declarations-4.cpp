#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 29)) ;
  GGS_lstring var_optionComponentName_1572 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 31)) ;
  GGS_commandLineOptionListAST var_options_1634 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_1634, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 37)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_1572, var_options_1634, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_2095 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 48)) ;
  GGS_lstring var_mOptionInternalName_2142 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 50)) ;
  GGS_lchar var_mOptionInvocationLetter_2195 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 52)) ;
  GGS_lstring var_mOptionInvocationString_2256 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 54)) ;
  GGS_lstring var_mOptionComment_2318 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 55)) ;
  GGS_lstring var_defaultValue_2341 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 56)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_2422 ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_2422 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_2341 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
      var_optionDefaultValueKind_2422 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 64)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_2661 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 66)) ;
      var_defaultValue_2341 = GGS_lstring::init_21__21_ (var_v_2661.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 67)), var_v_2661.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_2422 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 68)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_2095, var_mOptionInternalName_2142, var_mOptionInvocationLetter_2195, var_mOptionInvocationString_2256, var_mOptionComment_2318, var_defaultValue_2341, var_optionDefaultValueKind_2422  COMMA_SOURCE_FILE ("optionCompilation.galgas", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 55)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 66)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 55)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 66)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  GGS_lstring var_mGUIName_4674 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 124)) ;
  GGS_lstringlist var_importedOptionList_4712 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleGlobalAttributes_4772 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_withLexiqueListAST var_withLexiqueList_4829 = GGS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GGS_projectIndexingDescriptorList var_projectExtensionList_4890 = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      GGS_lstring var_fileExtension_4976 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 134)) ;
      GGS_lstring var_indexingPathSuffix_5040 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
      var_projectExtensionList_4890.addAssignOperation (var_fileExtension_4976, var_indexingPathSuffix_5040  COMMA_SOURCE_FILE ("guiCompilation.galgas", 136)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_4772, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_4712, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_4829, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssignOperation (var_mGUIName_4674, var_importedOptionList_4712, var_simpleGlobalAttributes_4772, var_withLexiqueList_4829, var_projectExtensionList_4890  COMMA_SOURCE_FILE ("guiCompilation.galgas", 146)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 124)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 124)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
  GGS_lstring var_lexiqueReference_5744 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)) ;
  GGS_guiLabelListAST var_labels_5786 = GGS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleAttributes_5834 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiCompoundAttributeListAST var_compoundAttributes_5894 = GGS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 166)) ;
      GGS_uint var_displayStyle_5978 ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_5978 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 171)) ;
        var_displayStyle_5978 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS_terminalLabelListAST var_terminalList_6117 = GGS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_6187 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 176)) ;
        GGS_uint var_displayFlags_6214 ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_6214 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
          var_displayFlags_6214 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
          GGS_lbigint var_leadingStrip_6407 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_6407.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_6407.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 187)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 189)) ;
          GGS_lbigint var_endingStrip_6582 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_6582.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_6582.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 192)) ;
            }
          }
          var_displayFlags_6214 = var_leadingStrip_6407.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)).operator_or (var_endingStrip_6582.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 195)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_6117.addAssignOperation (var_terminal_6187, var_displayFlags_6214  COMMA_SOURCE_FILE ("guiCompilation.galgas", 197)) ;
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 199)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_5786.addAssignOperation (var_displayStyle_5978, var_terminalList_6117, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 201))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_6985 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
      GGS_lstring var_name_7020 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 205)) ;
      GGS_lstring var_value_7045 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 206)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_7130 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)) ;
        var_value_7045 = GGS_lstring::init_21__21_ (var_value_7045.readProperty_string ().add_operation (var_v_7130.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 209)), var_v_7130.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_5894.addAssignOperation (var_key_6985, var_name_7020, var_value_7045  COMMA_SOURCE_FILE ("guiCompilation.galgas", 212)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_7307 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 215)) ;
      GGS_lstring var_value_7353 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 216)) ;
      var_simpleAttributes_5834.addAssignOperation (var_name_7307, var_value_7353  COMMA_SOURCE_FILE ("guiCompilation.galgas", 217)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 219)) ;
  ioArgument_ioWithLexiqueList.addAssignOperation (var_lexiqueReference_5744, var_labels_5786, var_simpleAttributes_5834, var_compoundAttributes_5894  COMMA_SOURCE_FILE ("guiCompilation.galgas", 220)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 166)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 171)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 176)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 189)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 195)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 199)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 205)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 215)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 216)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 219)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 166)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 171)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 176)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 189)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 195)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 199)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 205)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 215)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 216)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)) ;
  GGS_lstring var_optionReference_7741 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 228)) ;
  ioArgument_ioImportedOptionList.addAssignOperation (var_optionReference_7741  COMMA_SOURCE_FILE ("guiCompilation.galgas", 229)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 228)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 228)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mKey_8020 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 236)) ;
  GGS_lstring var_mValue_8041 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 237)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_8114 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 239)) ;
    var_mValue_8041 = GGS_lstring::init_21__21_ (var_mValue_8041.readProperty_string ().add_operation (var_value_8114.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 240)), var_value_8114.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssignOperation (var_mKey_8020, var_mValue_8041  COMMA_SOURCE_FILE ("guiCompilation.galgas", 243)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 239)) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 239)) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 46)) ;
  GGS_lstring var_syntaxComponentName_2588 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 47)) ;
  GGS_lstring var_importedLexiqueReference_2650 ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_2650 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 53)) ;
    var_importedLexiqueReference_2650 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 54)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasTranslateFeature_2854 ;
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2854 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 62)) ;
    var_hasTranslateFeature_2854 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 65)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3031 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_3102 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_3031, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_3102, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 76)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssignOperation (var_syntaxComponentName_2588, var_importedLexiqueReference_2650, var_nonterminalDeclarationList_3031, var_ruleList_3102, var_hasTranslateFeature_2854  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 77)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 91)) ;
  GGS_lstring var_syntaxComponentName_3890 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 93)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3955 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_4026 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_3955, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_4026, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 104)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_3890.readProperty_string (), var_syntaxComponentName_3890, var_nonterminalDeclarationList_3955, var_ruleList_4026, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 105)) ;
  }
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 124)) ;
  GGS_lstring var_mNonterminalName_5064 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 125)) ;
  GGS_nonTerminalLabelListAST var_labels_5138 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_firstBranchFormalParameters_5207 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_5207, inCompiler) ;
  var_labels_5138.addAssignOperation (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_5207, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 131)) ;
      GGS_lstring var_labelName_5368 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 132)) ;
      GGS_formalParameterListAST var_formalParameters_5460 ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameters_5460, inCompiler) ;
      var_labels_5138.addAssignOperation (var_labelName_5368, var_formalParameters_5460, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 134))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 134)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssignOperation (var_mNonterminalName_5064, var_labels_5138  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 136)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 124)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 125)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 132)) ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 124)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 125)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 132)) ;
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
  GGS_formalParameterListAST var_formalParameters_6107 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameters_6107, inCompiler) ;
  GGS_location var_endOfArguments_6132 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 148)) ;
  GGS_syntaxInstructionList var_mSyntaxInstructionList_6252 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_6252, inCompiler) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_formalParameters_6107, var_endOfArguments_6132, var_mSyntaxInstructionList_6252, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 155))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 156)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 148)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 156)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 148)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 156)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 162)) ;
  GGS_lstring var_mNonterminalName_6678 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 163)) ;
  GGS_lstring var_labelName_6727 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 164)), inCompiler COMMA_HERE) ;
  GGS_syntaxRuleLabelListAST var_mLabelList_6778 = GGS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_6727, var_mLabelList_6778, inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 169)) ;
      var_labelName_6727 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 170)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssignOperation (var_mNonterminalName_6678, var_mLabelList_6778  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 172)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 162)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 170)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 162)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 170)) ;
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
        GGS_semanticInstructionAST var_instruction_7612 ;
        nt_semantic_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7612, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_7612  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 189)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_7744 ;
        nt_syntax_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7744, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_7744  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 192)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 196)) ;
        } break ;
        case 2: {
          GGS_string var_separator_7885 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 198)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_7885.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 199)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 199)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 200)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 200)) ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 196)) ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 196)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 39)) ;
  GGS_location var_mRepeatInstructionLocation_2120 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 40)) ;
  GGS_syntaxInstructionList var_mRepeatedInstructionList_2244 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_2244, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_2277 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 42)) ;
  GGS_listOfSyntaxInstructionList var_mRepeatBranchList_2330 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 45)) ;
    GGS_syntaxInstructionList var_mInstructionList_2489 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_2489, inCompiler) ;
    var_mRepeatBranchList_2330.addAssignOperation (var_mInstructionList_2489, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 47))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 47)) ;
    if (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 50)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_2604 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 51)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_2120, var_mRepeatedInstructionList_2244, var_endOf_5F_repeated_5F_instructions_2277, var_mRepeatBranchList_2330, var_endOf_5F_repeat_5F_instruction_2604, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 39)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 39)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outElseInstructionList, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i7_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 41)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 49)) ;
  GGS_location var_instructionLocation_2583 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 50)) ;
  GGS_semanticExpressionAST var_whenExpression_2664 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenExpression_2664, inCompiler) ;
  GGS_location var_endOfWhenExpression_2687 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 53)) ;
  GGS_syntaxInstructionList var_whenInstructionList_2789 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenInstructionList_2789, inCompiler) ;
  GGS_location var_endOfWhenInstructions_2817 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  GGS_syntaxInstructionList var_elseInstructionList_2932 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_2932, inCompiler) ;
  GGS_location var_endOfElseInstructions_2960 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 58)) ;
  outArgument_outElseInstructionList = GGS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  outArgument_outElseInstructionList.addAssignOperation (GGS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_2583, var_whenExpression_2664, var_endOfWhenExpression_2687, var_whenInstructionList_2789, var_endOfWhenInstructions_2817, var_elseInstructionList_2932, var_endOfElseInstructions_2960, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i8_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 49)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 53)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 49)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 53)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 75)) ;
  GGS_location var_instructionLocation_3553 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 77)) ;
  GGS_semanticExpressionAST var_whenExpression_3668 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenExpression_3668, inCompiler) ;
  GGS_location var_endOfWhenExpression_3691 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 80)) ;
  GGS_syntaxInstructionList var_whenInstructionList_3816 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenInstructionList_3816, inCompiler) ;
  GGS_location var_endOfWhenInstructions_3844 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 82)) ;
  GGS_syntaxInstructionList var_elseInstructionList_3982 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_3982, inCompiler) ;
  GGS_location var_endOfElseInstructions_4010 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 86)) ;
  outArgument_outInstruction = GGS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_3553, var_whenExpression_3668, var_endOfWhenExpression_3691, var_whenInstructionList_3816, var_endOfWhenInstructions_3844, var_elseInstructionList_3982, var_endOfElseInstructions_4010, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inCompiler) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 77)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 80)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 37)) ;
  GGS_location var_mSelectInstructionLocation_1996 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 38)) ;
  GGS_listOfSyntaxInstructionList var_mSelectBranchList_2048 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_2180 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2180, inCompiler) ;
  var_mSelectBranchList_2048.addAssignOperation (var_il_2180, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 41))  COMMA_SOURCE_FILE ("instruction-select.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 43)) ;
    GGS_syntaxInstructionList var_instructionList_2332 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2332, inCompiler) ;
    var_mSelectBranchList_2048.addAssignOperation (var_instructionList_2332, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 45))  COMMA_SOURCE_FILE ("instruction-select.galgas", 45)) ;
    if (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 48)) ;
  GGS_location var_endOf_5F_select_5F_instruction_2444 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 49)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_1996, var_mSelectBranchList_2048, var_endOf_5F_select_5F_instruction_2444, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 37)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 43)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 37)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 43)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 38)) ;
  GGS_location var_instructionLocation_2007 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 40)) ;
  GGS_listOfSyntaxInstructionList var_mParseDoBranchList_2061 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_2194 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2194, inCompiler) ;
  var_mParseDoBranchList_2061.addAssignOperation (var_il_2194, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 43))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 45)) ;
    GGS_syntaxInstructionList var_instructionList_2351 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2351, inCompiler) ;
    var_mParseDoBranchList_2061.addAssignOperation (var_instructionList_2351, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 47))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 47)) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 50)) ;
  GGS_location var_endOfInstruction_2464 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 51)) ;
  outArgument_outInstruction = GGS_parseRewindInstruction::init_21__21__21_ (var_instructionLocation_2007, var_mParseDoBranchList_2061, var_endOfInstruction_2464, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 40)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 40)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_terminalName_1516 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 26)) ;
  GGS_actualInputParameterListAST var_actualInputParameterList_1646 ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualInputParameterList_1646, inCompiler) ;
  GGS__32_lstringlist var_indexNameList_1712 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_1712, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1847 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1977 ;
  switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1847 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1977 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1847, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1977, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_1516.readProperty_location (), var_terminalName_1516, var_actualInputParameterList_1646, var_indexNameList_1712, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1847, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1977, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 26)) ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 26)) ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i13_ (GGS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_3157 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 58)) ;
      GGS_lstring var_postfixName_3276 ;
      switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
        var_postfixName_3276 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 62)) ;
      } break ;
      case 2: {
        var_postfixName_3276 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 64)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssignOperation (var_indexName_3157, var_postfixName_3276  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 66)) ;
      if (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 68)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i13_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 58)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 64)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 68)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 58)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 64)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 68)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 26)) ;
  GGS_location var_instructionLocation_1502 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 27)) ;
  GGS_semanticExpressionAST var_sentExpression_1606 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sentExpression_1606, inCompiler) ;
  outArgument_outInstruction = GGS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_1502, var_sentExpression_1606, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 26)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 26)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 41)) ;
  GGS_location var_instructionLocation_2195 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 43)) ;
  GGS_semanticExpressionAST var_variantExpression_2310 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_variantExpression_2310, inCompiler) ;
  GGS_location var_endOfVariantExpression_2336 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 46)) ;
  GGS_semanticExpressionAST var_whileExpression_2455 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whileExpression_2455, inCompiler) ;
  GGS_location var_endOfWhileExpression_2479 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 49)) ;
  GGS_syntaxInstructionList var_instructionList_2606 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2606, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 51)) ;
  GGS_location var_endOfInstructionList_2640 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 52)) ;
  outArgument_outInstruction = GGS_parseLoopInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_2195, var_variantExpression_2310, var_endOfVariantExpression_2336, var_whileExpression_2455, var_endOfWhileExpression_2479, var_instructionList_2606, var_endOfInstructionList_2640, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inCompiler) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mLabelName_1500 ;
  switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
    var_mLabelName_1500 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 28)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 30)) ;
    var_mLabelName_1500 = GGS_lstring::init_21__21_ (GGS_string ("parse"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 31)), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 33)) ;
    var_mLabelName_1500 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mNonterminalName_1771 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 36)) ;
  GGS_actualParameterListAST var_mActualParameterList_1890 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mActualParameterList_1890, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_2032 ;
  switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_2032 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 43)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_2032, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_nonterminalCallInstruction::init_21__21__21__21__21_ (var_mNonterminalName_1771.readProperty_location (), var_mNonterminalName_1771, var_mLabelName_1500, var_mActualParameterList_1890, var_grammarInstructionSyntaxDirectedTranslationResult_2032, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
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
  switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
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
  switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
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

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lbool var_hasIndexing_1950 ;
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_1950 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 37)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_1950 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 39)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 42)) ;
  GGS_lstring var_mGrammarName_2153 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 43)) ;
  GGS_lstring var_mGrammarClass_2231 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  GGS_bool var_hasTranslateFeature_2285 ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2285 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 50)) ;
    var_hasTranslateFeature_2285 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 53)) ;
  GGS_lstringlist var_syntaxComponents_2462 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 57)) ;
    GGS_lstring var_syntaxComponent_2544 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 58)) ;
    var_syntaxComponents_2462.addAssignOperation (var_syntaxComponent_2544  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 59)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mStartSymbol_2677 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 63)) ;
  GGS_nonTerminalLabelListAST var_mLabelList_2721 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 65)), inCompiler COMMA_HERE), var_mLabelList_2721, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
      GGS_lstring var_labelName_2930 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, var_labelName_2930, var_mLabelList_2721, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstringlist var_mUnusedNonterminalList_3074 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 76)) ;
      GGS_lstring var_nonterminalSymbolName_3188 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 77)) ;
      var_mUnusedNonterminalList_3074.addAssignOperation (var_nonterminalSymbolName_3188  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 78)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_1950, var_mGrammarName_2153, var_mGrammarClass_2231, var_syntaxComponents_2462, var_mStartSymbol_2677, var_mLabelList_2721, var_mUnusedNonterminalList_3074, var_hasTranslateFeature_2285, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 82)) ;
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

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                         const GGS_lstring constinArgument_inLabelName,
                                                                                                                                         GGS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GGS_stringset var_argumentNameSet_3943 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_mFormalParameterList_3997 = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      GGS_lstring var_argumentName_4103 ;
      nt_label_5F_formal_5F_parameter_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentName_4103, var_mFormalParameterList_3997, inCompiler) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_argumentNameSet_3943.getter_hasKey (var_argumentName_4103.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 104)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_4103.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_4103.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)) ;
        }
      }
      var_argumentNameSet_3943.plusPlusAssignOperation (var_argumentName_4103.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 107)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_mFormalParameterList_3997, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
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

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_4778 ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
    var_selector_4778 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 119)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 121)) ;
    var_selector_4778 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 122)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 126)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mTypeName_4975 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_4975, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 133)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_4778, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 136)), var_mTypeName_4975, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 134)) ;
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
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 126)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 133)) ;
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
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 126)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_5566 ;
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
    var_selector_5566 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 149)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 151)) ;
    var_selector_5566 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 152)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 154)) ;
  GGS_lstring var_mTypeName_5735 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_5735, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 160)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_5566, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 163)), var_mTypeName_5735, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 149)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 151)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 154)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 160)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 149)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 151)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 154)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_6350 ;
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_selector_6350 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 176)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 178)) ;
    var_selector_6350 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 179)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mTypeName_6511 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_6511, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 184)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 186)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_6350, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 189)), var_mTypeName_6511, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 187)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 176)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 178)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 184)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 186)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 176)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 178)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 184)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 186)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_7127 ;
  switch (select_galgas_33_GrammarComponentSyntax_13 (inCompiler)) {
  case 1: {
    var_selector_7127 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 202)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 204)) ;
    var_selector_7127 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 205)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mTypeName_7286 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_7286, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 208)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_7127, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 211)), var_mTypeName_7286, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 209)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 202)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 204)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 208)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 202)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 204)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 208)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 38)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_2127 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_prologueInstructionList_2127, inCompiler) ;
  GGS_location var_endOfPrologue_2159 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 41)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssignOperation (var_prologueInstructionList_2127, var_endOfPrologue_2159  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 42)) ;
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

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 53)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_2702 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_prologueInstructionList_2702, inCompiler) ;
  GGS_location var_endOfPrologue_2734 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 56)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssignOperation (var_prologueInstructionList_2702, var_endOfPrologue_2734  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 57)) ;
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

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 69)) ;
  GGS_lstring var_mSourceFileExtension_3228 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  GGS_lstring var_mSourceFileHelp_3292 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 72)) ;
  GGS_lstring var_referenceGrammar_3351 ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_3351 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 78)) ;
    var_referenceGrammar_3351 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_3527 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 82)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_3527.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3527.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 84)) ;
    }
  }
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_3733 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 88)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_3733.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3733.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 90)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_bool var_isUnused_3885 ;
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_3885 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
    var_isUnused_3885 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mSourceFileVariableName_4011 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 102)) ;
  GGS_semanticInstructionListAST var_mInstructionList_4138 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_4138, inCompiler) ;
  GGS_location var_endOfInstructionList_4163 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 105)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssignOperation (var_mSourceFileExtension_3228, var_mSourceFileHelp_3292, var_mSourceFileVariableName_4011, var_isUnused_3885, var_referenceGrammar_3351, var_mInstructionList_4138, var_endOfInstructionList_4163  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 106)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 78)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 78)) ;
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

//--------------------------------------------------------------------------------------------------
// @abstractLexicalRoutineActualArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLexicalRoutineActualArgumentAST::objectCompare (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand) const {
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

GGS_abstractLexicalRoutineActualArgumentAST::GGS_abstractLexicalRoutineActualArgumentAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractLexicalRoutineActualArgumentAST::
abstractLexicalRoutineActualArgumentAST_init_21_ (const GGS_location & in_mActualPassingModeLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST::GGS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_abstractLexicalRoutineActualArgumentAST::readProperty_mActualPassingModeLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_abstractLexicalRoutineActualArgumentAST * p = (cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    return p->mProperty_mActualPassingModeLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLexicalRoutineActualArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mActualPassingModeLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mActualPassingModeLocation () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mActualPassingModeLocation.printNonNullClassInstanceProperties ("mActualPassingModeLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractLexicalRoutineActualArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ("abstractLexicalRoutineActualArgumentAST",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractLexicalRoutineActualArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLexicalRoutineActualArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLexicalRoutineActualArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_abstractLexicalRoutineActualArgumentAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  const GGS_abstractLexicalRoutineActualArgumentAST * p = (const GGS_abstractLexicalRoutineActualArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLexicalRoutineActualArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::objectCompare (const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::operator = (const GGS_abstractLexicalRoutineActualArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (const GGS_abstractLexicalRoutineActualArgumentAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractLexicalRoutineActualArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  if (isValid ()) {
    const cPtr_abstractLexicalRoutineActualArgumentAST * p = (cPtr_abstractLexicalRoutineActualArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractLexicalRoutineActualArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::bang_abstractLexicalRoutineActualArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
      result = GGS_abstractLexicalRoutineActualArgumentAST ((cPtr_abstractLexicalRoutineActualArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractLexicalRoutineActualArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak ("abstractLexicalRoutineActualArgumentAST.weak",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLexicalRoutineActualArgumentAST_2E_weak result ;
  const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak * p = (const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::objectCompare (const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (void) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::operator = (const GGS_lexicalAttributeInputOutputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (const GGS_lexicalAttributeInputOutputArgumentAST & inSource) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalAttributeInputOutputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalAttributeInputOutputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalAttributeInputOutputArgumentAST * p = (cPtr_lexicalAttributeInputOutputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalAttributeInputOutputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::bang_lexicalAttributeInputOutputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeInputOutputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
      result = GGS_lexicalAttributeInputOutputArgumentAST ((cPtr_lexicalAttributeInputOutputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputOutputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2E_weak ("lexicalAttributeInputOutputArgumentAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputOutputArgumentAST_2E_weak result ;
  const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak * p = (const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalFormalInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalFormalInputArgumentAST::objectCompare (const GGS_lexicalFormalInputArgumentAST & inOperand) const {
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

GGS_lexicalFormalInputArgumentAST::GGS_lexicalFormalInputArgumentAST (void) :
GGS_abstractLexicalRoutineActualArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::
init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
              const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalFormalInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalFormalInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalFormalInputArgumentAST_init_21__21_ (in_mActualPassingModeLocation, in_mRoutineOrFunctionFormalInputArgument, inCompiler) ;
  const GGS_lexicalFormalInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::
lexicalFormalInputArgumentAST_init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
                                            const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
                                            Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mRoutineOrFunctionFormalInputArgument = in_mRoutineOrFunctionFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST::GGS_lexicalFormalInputArgumentAST (const cPtr_lexicalFormalInputArgumentAST * inSourcePtr) :
GGS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFormalInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::readProperty_mRoutineOrFunctionFormalInputArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () ;
  }else{
    cPtr_lexicalFormalInputArgumentAST * p = (cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
    return p->mProperty_mRoutineOrFunctionFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFormalInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (inCompiler COMMA_THERE),
mProperty_mRoutineOrFunctionFormalInputArgument () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                                        const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation, inCompiler COMMA_THERE),
mProperty_mRoutineOrFunctionFormalInputArgument () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mRoutineOrFunctionFormalInputArgument = in_mRoutineOrFunctionFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalFormalInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

void cPtr_lexicalFormalInputArgumentAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalFormalInputArgumentAST:") ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineOrFunctionFormalInputArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFormalInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalFormalInputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mRoutineOrFunctionFormalInputArgument, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalFormalInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineOrFunctionFormalInputArgument.printNonNullClassInstanceProperties ("mRoutineOrFunctionFormalInputArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalFormalInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ("lexicalFormalInputArgumentAST",
                                                                                  & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST result ;
  const GGS_lexicalFormalInputArgumentAST * p = (const GGS_lexicalFormalInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFormalInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalFormalInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalFormalInputArgumentAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_lexicalFormalInputArgumentAST_2E_weak::GGS_lexicalFormalInputArgumentAST_2E_weak (void) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak & GGS_lexicalFormalInputArgumentAST_2E_weak::operator = (const GGS_lexicalFormalInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak::GGS_lexicalFormalInputArgumentAST_2E_weak (const GGS_lexicalFormalInputArgumentAST & inSource) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak GGS_lexicalFormalInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalFormalInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalFormalInputArgumentAST * p = (cPtr_lexicalFormalInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalFormalInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST_2E_weak::bang_lexicalFormalInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalFormalInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFormalInputArgumentAST) ;
      result = GGS_lexicalFormalInputArgumentAST ((cPtr_lexicalFormalInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFormalInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2E_weak ("lexicalFormalInputArgumentAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFormalInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFormalInputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFormalInputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak GGS_lexicalFormalInputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST_2E_weak result ;
  const GGS_lexicalFormalInputArgumentAST_2E_weak * p = (const GGS_lexicalFormalInputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFormalInputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalRoutineCallActualArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRoutineCallActualArgumentListAST : public cCollectionElement {
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRoutineActualArgument) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalRoutineActualArgument) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalRoutineCallActualArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalRoutineCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalRoutineCallActualArgumentListAST (mObject.mProperty_mLexicalRoutineActualArgument COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @lexicalRoutineCallActualArgumentListAST
//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST::GGS_lexicalRoutineCallActualArgumentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST::GGS_lexicalRoutineCallActualArgumentListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    const GGS_lexicalRoutineCallActualArgumentListAST_2E_element element (p->mObject.mProperty_mLexicalRoutineActualArgument) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (in_mLexicalRoutineActualArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalRoutineCallActualArgumentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_lexicalRoutineCallActualArgumentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexicalRoutineActualArgument:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexicalRoutineActualArgument.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::plusPlusAssignOperation (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::class_func_listWithValue (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lexicalRoutineCallActualArgumentListAST_2E_element element (inOperand0) ;
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::addAssignOperation (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_lexicalRoutineCallActualArgumentListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_append (const GGS_abstractLexicalRoutineActualArgumentAST inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_lexicalRoutineCallActualArgumentListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_insertAtIndex (const GGS_abstractLexicalRoutineActualArgumentAST inOperand0,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_lexicalRoutineCallActualArgumentListAST_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_removeAtIndex (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLexicalRoutineActualArgument ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_popFirst (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexicalRoutineActualArgument ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_popLast (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexicalRoutineActualArgument ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::method_first (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexicalRoutineActualArgument ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::method_last (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexicalRoutineActualArgument ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::add_operation (const GGS_lexicalRoutineCallActualArgumentListAST & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::plusAssignOperation (const GGS_lexicalRoutineCallActualArgumentListAST inList,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_setMLexicalRoutineActualArgumentAtIndex (GGS_abstractLexicalRoutineActualArgumentAST inOperand,
                                                                                                  GGS_uint inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalRoutineActualArgument = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_abstractLexicalRoutineActualArgumentAST GGS_lexicalRoutineCallActualArgumentListAST::getter_mLexicalRoutineActualArgumentAtIndex (const GGS_uint & inIndex,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalRoutineActualArgument ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalRoutineCallActualArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalRoutineCallActualArgumentListAST::DownEnumerator_lexicalRoutineCallActualArgumentListAST (const GGS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element DownEnumerator_lexicalRoutineCallActualArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST DownEnumerator_lexicalRoutineCallActualArgumentListAST::current_mLexicalRoutineActualArgument (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalRoutineActualArgument ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalRoutineCallActualArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalRoutineCallActualArgumentListAST::UpEnumerator_lexicalRoutineCallActualArgumentListAST (const GGS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element UpEnumerator_lexicalRoutineCallActualArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST UpEnumerator_lexicalRoutineCallActualArgumentListAST::current_mLexicalRoutineActualArgument (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalRoutineActualArgument ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallActualArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ("lexicalRoutineCallActualArgumentListAST",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  const GGS_lexicalRoutineCallActualArgumentListAST * p = (const GGS_lexicalRoutineCallActualArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallActualArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRoutineCallInstructionAST_2E_weak::objectCompare (const GGS_lexicalRoutineCallInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_lexicalRoutineCallInstructionAST_2E_weak::GGS_lexicalRoutineCallInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak & GGS_lexicalRoutineCallInstructionAST_2E_weak::operator = (const GGS_lexicalRoutineCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak::GGS_lexicalRoutineCallInstructionAST_2E_weak (const GGS_lexicalRoutineCallInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak GGS_lexicalRoutineCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRoutineCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRoutineCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRoutineCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST_2E_weak::bang_lexicalRoutineCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRoutineCallInstructionAST) ;
      result = GGS_lexicalRoutineCallInstructionAST ((cPtr_lexicalRoutineCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2E_weak ("lexicalRoutineCallInstructionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak GGS_lexicalRoutineCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallInstructionAST_2E_weak result ;
  const GGS_lexicalRoutineCallInstructionAST_2E_weak * p = (const GGS_lexicalRoutineCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                  const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaRoutineArgument (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          const GGS_lexicalArgumentModeAST constin_inLexicalRoutineFormalArgumentMode,
                                                          const GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io_ioLexiqueAnalysisContext, constin_inLexicalRoutineFormalArgumentMode, constin_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateDelimitorListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateDelimitorListAST : public cCollectionElement {
  public: GGS_templateDelimitorListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateDelimitorListAST (const GGS_lstring & in_mStartString,
                                                       const GGS_bool & in_nonAtomicSelection,
                                                       const GGS_bool & in_mTemplateEndMark,
                                                       const GGS_bool & in_mPreserved,
                                                       const GGS_lstring & in_mEndString
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateDelimitorListAST (const GGS_templateDelimitorListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorListAST::cCollectionElement_templateDelimitorListAST (const GGS_lstring & in_mStartString,
                                                                                          const GGS_bool & in_nonAtomicSelection,
                                                                                          const GGS_bool & in_mTemplateEndMark,
                                                                                          const GGS_bool & in_mPreserved,
                                                                                          const GGS_lstring & in_mEndString
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_nonAtomicSelection, in_mTemplateEndMark, in_mPreserved, in_mEndString) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorListAST::cCollectionElement_templateDelimitorListAST (const GGS_templateDelimitorListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStartString, inElement.mProperty_nonAtomicSelection, inElement.mProperty_mTemplateEndMark, inElement.mProperty_mPreserved, inElement.mProperty_mEndString) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateDelimitorListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateDelimitorListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateDelimitorListAST (mObject.mProperty_mStartString, mObject.mProperty_nonAtomicSelection, mObject.mProperty_mTemplateEndMark, mObject.mProperty_mPreserved, mObject.mProperty_mEndString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateDelimitorListAST
//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST::GGS_templateDelimitorListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST::GGS_templateDelimitorListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    const GGS_templateDelimitorListAST_2E_element element (p->mObject.mProperty_mStartString, p->mObject.mProperty_nonAtomicSelection, p->mObject.mProperty_mTemplateEndMark, p->mObject.mProperty_mPreserved, p->mObject.mProperty_mEndString) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mStartString,
                                                              const GGS_bool & in_nonAtomicSelection,
                                                              const GGS_bool & in_mTemplateEndMark,
                                                              const GGS_bool & in_mPreserved,
                                                              const GGS_lstring & in_mEndString
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateDelimitorListAST (in_mStartString, in_nonAtomicSelection, in_mTemplateEndMark, in_mPreserved, in_mEndString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateDelimitorListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateDelimitorListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStartString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStartString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("nonAtomicSelection:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_nonAtomicSelection.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTemplateEndMark:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTemplateEndMark.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPreserved:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPreserved.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndString.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateDelimitorListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::plusPlusAssignOperation (const GGS_templateDelimitorListAST_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_bool & inOperand1,
                                                                                     const GGS_bool & inOperand2,
                                                                                     const GGS_bool & inOperand3,
                                                                                     const GGS_lstring & inOperand4
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_templateDelimitorListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_templateDelimitorListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_bool & inOperand1,
                                                       const GGS_bool & inOperand2,
                                                       const GGS_bool & inOperand3,
                                                       const GGS_lstring & inOperand4
                                                       COMMA_LOCATION_ARGS) {
  const GGS_templateDelimitorListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_bool inOperand1,
                                                  const GGS_bool inOperand2,
                                                  const GGS_bool inOperand3,
                                                  const GGS_lstring inOperand4,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_templateDelimitorListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_bool inOperand1,
                                                         const GGS_bool inOperand2,
                                                         const GGS_bool inOperand3,
                                                         const GGS_lstring inOperand4,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_templateDelimitorListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_bool & outOperand1,
                                                         GGS_bool & outOperand2,
                                                         GGS_bool & outOperand3,
                                                         GGS_lstring & outOperand4,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mStartString ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_nonAtomicSelection ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mTemplateEndMark ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mPreserved ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mEndString ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_bool & outOperand1,
                                                    GGS_bool & outOperand2,
                                                    GGS_bool & outOperand3,
                                                    GGS_lstring & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStartString ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_nonAtomicSelection ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTemplateEndMark ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mPreserved ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndString ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_bool & outOperand1,
                                                   GGS_bool & outOperand2,
                                                   GGS_bool & outOperand3,
                                                   GGS_lstring & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStartString ;
      outOperand1 = mArray.lastObject (HERE).mProperty_nonAtomicSelection ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTemplateEndMark ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mPreserved ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndString ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::method_first (GGS_lstring & outOperand0,
                                                 GGS_bool & outOperand1,
                                                 GGS_bool & outOperand2,
                                                 GGS_bool & outOperand3,
                                                 GGS_lstring & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStartString ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_nonAtomicSelection ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTemplateEndMark ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mPreserved ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndString ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::method_last (GGS_lstring & outOperand0,
                                                GGS_bool & outOperand1,
                                                GGS_bool & outOperand2,
                                                GGS_bool & outOperand3,
                                                GGS_lstring & outOperand4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStartString ;
      outOperand1 = mArray.lastObject (HERE).mProperty_nonAtomicSelection ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTemplateEndMark ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mPreserved ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndString ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::add_operation (const GGS_templateDelimitorListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateDelimitorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::plusAssignOperation (const GGS_templateDelimitorListAST inList,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setMStartStringAtIndex (GGS_lstring inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStartString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_templateDelimitorListAST::getter_mStartStringAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStartString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setNonAtomicSelectionAtIndex (GGS_bool inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_nonAtomicSelection = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_templateDelimitorListAST::getter_nonAtomicSelectionAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_nonAtomicSelection ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setMTemplateEndMarkAtIndex (GGS_bool inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTemplateEndMark = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_templateDelimitorListAST::getter_mTemplateEndMarkAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTemplateEndMark ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setMPreservedAtIndex (GGS_bool inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPreserved = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_templateDelimitorListAST::getter_mPreservedAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPreserved ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setMEndStringAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_templateDelimitorListAST::getter_mEndStringAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateDelimitorListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateDelimitorListAST::DownEnumerator_templateDelimitorListAST (const GGS_templateDelimitorListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element DownEnumerator_templateDelimitorListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorListAST::current_mStartString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_templateDelimitorListAST::current_nonAtomicSelection (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_nonAtomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_templateDelimitorListAST::current_mTemplateEndMark (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTemplateEndMark ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_templateDelimitorListAST::current_mPreserved (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreserved ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorListAST::current_mEndString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndString ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateDelimitorListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateDelimitorListAST::UpEnumerator_templateDelimitorListAST (const GGS_templateDelimitorListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element UpEnumerator_templateDelimitorListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorListAST::current_mStartString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_templateDelimitorListAST::current_nonAtomicSelection (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_nonAtomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_templateDelimitorListAST::current_mTemplateEndMark (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTemplateEndMark ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_templateDelimitorListAST::current_mPreserved (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreserved ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorListAST::current_mEndString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndString ;
}




//--------------------------------------------------------------------------------------------------
//     @templateDelimitorListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorListAST ("templateDelimitorListAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateDelimitorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateDelimitorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateDelimitorListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorListAST result ;
  const GGS_templateDelimitorListAST * p = (const GGS_templateDelimitorListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateDelimitorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateReplacementListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateReplacementListAST : public cCollectionElement {
  public: GGS_templateReplacementListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateReplacementListAST (const GGS_lstring & in_mMatchString,
                                                         const GGS_lstring & in_mReplacementString,
                                                         const GGS_lstring & in_mReplacementFunction
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateReplacementListAST (const GGS_templateReplacementListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GGS_lstring & in_mMatchString,
                                                                                              const GGS_lstring & in_mReplacementString,
                                                                                              const GGS_lstring & in_mReplacementFunction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchString, in_mReplacementString, in_mReplacementFunction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GGS_templateReplacementListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMatchString, inElement.mProperty_mReplacementString, inElement.mProperty_mReplacementFunction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateReplacementListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateReplacementListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateReplacementListAST (mObject.mProperty_mMatchString, mObject.mProperty_mReplacementString, mObject.mProperty_mReplacementFunction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateReplacementListAST
//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST::GGS_templateReplacementListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST::GGS_templateReplacementListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    const GGS_templateReplacementListAST_2E_element element (p->mObject.mProperty_mMatchString, p->mObject.mProperty_mReplacementString, p->mObject.mProperty_mReplacementFunction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_lstring & in_mMatchString,
                                                                const GGS_lstring & in_mReplacementString,
                                                                const GGS_lstring & in_mReplacementFunction
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateReplacementListAST (in_mMatchString, in_mReplacementString, in_mReplacementFunction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateReplacementListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateReplacementListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mMatchString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mMatchString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mReplacementString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mReplacementString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mReplacementFunction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mReplacementFunction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateReplacementListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::plusPlusAssignOperation (const GGS_templateReplacementListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_lstring & inOperand1,
                                                                                         const GGS_lstring & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_templateReplacementListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_templateReplacementListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                         const GGS_lstring & inOperand1,
                                                         const GGS_lstring & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  const GGS_templateReplacementListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS_lstring inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_templateReplacementListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_lstring inOperand1,
                                                           const GGS_lstring inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_templateReplacementListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_lstring & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mMatchString ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mReplacementString ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mReplacementFunction ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_lstring & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mMatchString ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mReplacementString ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mReplacementFunction ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_lstring & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mMatchString ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mReplacementString ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mReplacementFunction ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_lstring & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mMatchString ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mReplacementString ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mReplacementFunction ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_lstring & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mMatchString ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mReplacementString ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mReplacementFunction ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::add_operation (const GGS_templateReplacementListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateReplacementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateReplacementListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateReplacementListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateReplacementListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_templateReplacementListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::plusAssignOperation (const GGS_templateReplacementListAST inList,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_setMMatchStringAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mMatchString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_templateReplacementListAST::getter_mMatchStringAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mMatchString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_setMReplacementStringAtIndex (GGS_lstring inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mReplacementString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_templateReplacementListAST::getter_mReplacementStringAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mReplacementString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_setMReplacementFunctionAtIndex (GGS_lstring inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mReplacementFunction = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_templateReplacementListAST::getter_mReplacementFunctionAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mReplacementFunction ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateReplacementListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateReplacementListAST::DownEnumerator_templateReplacementListAST (const GGS_templateReplacementListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element DownEnumerator_templateReplacementListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateReplacementListAST::current_mMatchString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMatchString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateReplacementListAST::current_mReplacementString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReplacementString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateReplacementListAST::current_mReplacementFunction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReplacementFunction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateReplacementListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateReplacementListAST::UpEnumerator_templateReplacementListAST (const GGS_templateReplacementListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element UpEnumerator_templateReplacementListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateReplacementListAST::current_mMatchString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMatchString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateReplacementListAST::current_mReplacementString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReplacementString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateReplacementListAST::current_mReplacementFunction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReplacementFunction ;
}




//--------------------------------------------------------------------------------------------------
//     @templateReplacementListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateReplacementListAST ("templateReplacementListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateReplacementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateReplacementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateReplacementListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateReplacementListAST result ;
  const GGS_templateReplacementListAST * p = (const GGS_templateReplacementListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateReplacementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReplacementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLexiqueComponentAST_2E_weak::objectCompare (const GGS_templateLexiqueComponentAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateLexiqueComponentAST_2E_weak::GGS_templateLexiqueComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak & GGS_templateLexiqueComponentAST_2E_weak::operator = (const GGS_templateLexiqueComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak::GGS_templateLexiqueComponentAST_2E_weak (const GGS_templateLexiqueComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak GGS_templateLexiqueComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST_2E_weak::unwrappedValue (void) const {
  GGS_templateLexiqueComponentAST result ;
  if (isValid ()) {
    const cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateLexiqueComponentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST_2E_weak::bang_templateLexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateLexiqueComponentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLexiqueComponentAST) ;
      result = GGS_templateLexiqueComponentAST ((cPtr_templateLexiqueComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateLexiqueComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2E_weak ("templateLexiqueComponentAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLexiqueComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLexiqueComponentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLexiqueComponentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak GGS_templateLexiqueComponentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST_2E_weak result ;
  const GGS_templateLexiqueComponentAST_2E_weak * p = (const GGS_templateLexiqueComponentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLexiqueComponentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLexiqueComponentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @unifiedTypeMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::GGS_unifiedTypeMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::~ GGS_unifiedTypeMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::GGS_unifiedTypeMap (const GGS_unifiedTypeMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap & GGS_unifiedTypeMap::operator = (const GGS_unifiedTypeMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unifiedTypeMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unifiedTypeMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unifiedTypeMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unifiedTypeMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_unifiedTypeMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_unifiedTypeMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_unifiedTypeMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::performInsert (const GGS_unifiedTypeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_unifiedTypeMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>
GGS_unifiedTypeMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_unifiedTypeMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>>
GGS_unifiedTypeMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_unifiedTypeMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_unifiedTypeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_unifiedTypeMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mElement = info->mProperty_mElement ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::class_func_mapWithMapToOverride (const GGS_unifiedTypeMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_unifiedTypeMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::setter_internalInsertKey (GGS_lstring inLKey,
                                                   GGS_unifiedTypeMapElementClass inArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_unifiedTypeMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMap::getter_mElementForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapElementClass result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mElement ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::setter_setMElementForKey (GGS_unifiedTypeMapElementClass inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_unifiedTypeMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mElement = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_unifiedTypeMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mElement:") ;
    inArray (i COMMA_HERE)->mProperty_mElement.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> array = sortedInfoArray () ;
    GGS_unifiedTypeMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_unifiedTypeMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_unifiedTypeMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @unifiedTypeMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_unifiedTypeMap::DownEnumerator_unifiedTypeMap (const GGS_unifiedTypeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element DownEnumerator_unifiedTypeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass DownEnumerator_unifiedTypeMap::current_mElement (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @unifiedTypeMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_unifiedTypeMap::UpEnumerator_unifiedTypeMap (const GGS_unifiedTypeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element UpEnumerator_unifiedTypeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass UpEnumerator_unifiedTypeMap::current_mElement (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mElement ;
}


//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  const GGS_unifiedTypeMap * p = (const GGS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (GGS_unifiedTypeMap & ioObject,
                                const GGS_lstring constinArgument_inLKey,
                                GGS_unifiedTypeMapEntry & outArgument_outEntry,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 47)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = ioObject ;
      const GGS_unifiedTypeMap_2E_element var_node_2207 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_2207.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 49)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GGS_unifiedTypeMapElementClass var_newElement_2309 = GGS_unifiedTypeMapElementClass::init_21_ (GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 51)), inCompiler COMMA_HERE) ;
      {
      ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_2309, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 52)) ;
      }
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2309  COMMA_SOURCE_FILE ("unified-type-map.galgas", 53)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (GGS_unifiedTypeMap & ioObject,
                                          const GGS_string constinArgument_inKey,
                                          GGS_unifiedTypeMapEntry & outArgument_outEntry,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inKey.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 61)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = ioObject ;
      const GGS_unifiedTypeMap_2E_element var_node_2724 = temp_2.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_2724.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 63)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GGS_unifiedTypeMapElementClass var_newElement_2825 = GGS_unifiedTypeMapElementClass::init_21_ (GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 65)), inCompiler COMMA_HERE) ;
      {
      ioObject.setter_internalInsertKey (GGS_lstring::init_21__21_ (constinArgument_inKey, GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 66)), inCompiler COMMA_HERE), var_newElement_2825, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 66)) ;
      }
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2825  COMMA_SOURCE_FILE ("unified-type-map.galgas", 67)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap typeMapEntryForLKey'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryForLKey (const GGS_unifiedTypeMap & inObject,
                                                             const GGS_lstring & constinArgument_inLKey,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 75)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = inObject ;
      const GGS_unifiedTypeMap_2E_element var_node_3254 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        result_result = GGS_unifiedTypeMapEntry::class_func_element (var_node_3254.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 77)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("there is no '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 79)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 79)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 79)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap typeMapEntryOrNullForLKey'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryOrNullForLKey (const GGS_unifiedTypeMap & inObject,
                                                                   const GGS_lstring & constinArgument_inLKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 87)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = inObject ;
      const GGS_unifiedTypeMap_2E_element var_node_3673 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        result_result = GGS_unifiedTypeMapEntry::class_func_element (var_node_3673.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 89)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 91)) ;
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (GGS_unifiedTypeMap & ioObject,
                                 const GGS_lstring constinArgument_inTypeName,
                                 const GGS_unifiedTypeDefinition constinArgument_inTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = ioObject ;
    const GGS_unifiedTypeMap_2E_element var_node_4000 = temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      switch (var_node_4000.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_unifiedTypeDefinition extractedValue_4089__0 ;
          var_node_4000.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_4089__0) ;
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type already defined"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 101)) ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          GGS_unifiedTypeMapElementClass var_e_4178 = var_node_4000.readProperty_mElement () ;
          var_e_4178.setProperty_mDefinition (GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 104))) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapElementClass var_newElement_4289 = GGS_unifiedTypeMapElementClass::init_21_ (GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 107)), inCompiler COMMA_HERE) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inTypeName, var_newElement_4289, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 108)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap typeDefinition'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition extensionGetter_typeDefinition (const GGS_unifiedTypeMap & inObject,
                                                          const GGS_lstring & constinArgument_inLKey,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = inObject ;
    const GGS_unifiedTypeMap_2E_element var_node_4627 = temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      switch (var_node_4627.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_unifiedTypeDefinition extractedValue_4712_definition_0 ;
          var_node_4627.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_4712_definition_0) ;
          result_result = extractedValue_4712_definition_0 ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("unsolved type"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 120)) ;
          result_result.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GenericArray <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("there is no '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 123)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 123)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 123)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum typeDefinition
//--------------------------------------------------------------------------------------------------

GGS_typeDefinition::GGS_typeDefinition (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::class_func_unsolved (UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  result.mEnum = Enumeration::enum_unsolved ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::class_func_solved (const GGS_unifiedTypeDefinition & inAssociatedValue0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  result.mEnum = Enumeration::enum_solved ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeDefinition_2E_solved (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::method_extractSolved (GGS_unifiedTypeDefinition & outAssociatedValue_definition,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_solved) {
    outAssociatedValue_definition.drop () ;
    String s ;
    s.appendCString ("method @typeDefinition.solved invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_definition = ptr->mProperty_definition ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition::getter_getSolved (UNUSED_LOCATION_ARGS) const {
  GGS_typeDefinition_2E_solved_3F_ result ;
  if (mEnum == Enumeration::enum_solved) {
    const auto ptr = (const GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeDefinition_2E_solved (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::getAssociatedValuesFor_solved (GGS_unifiedTypeDefinition & out_definition) const {
  const auto ptr = (const GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
  out_definition = ptr->mProperty_definition ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeDefinition [3] = {
  "(not built)",
  "unsolved",
  "solved"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeDefinition::getter_isUnsolved (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_unsolved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeDefinition::getter_isSolved (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_solved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeDefinition: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeDefinition [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @typeDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition ("typeDefinition",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  const GGS_typeDefinition * p = (const GGS_typeDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass_2E_weak::objectCompare (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_unifiedTypeMapElementClass_2E_weak::GGS_unifiedTypeMapElementClass_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak & GGS_unifiedTypeMapElementClass_2E_weak::operator = (const GGS_unifiedTypeMapElementClass & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak::GGS_unifiedTypeMapElementClass_2E_weak (const GGS_unifiedTypeMapElementClass & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak GGS_unifiedTypeMapElementClass_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass_2E_weak::unwrappedValue (void) const {
  GGS_unifiedTypeMapElementClass result ;
  if (isValid ()) {
    const cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) ptr () ;
    if (nullptr != p) {
      result = GGS_unifiedTypeMapElementClass (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass_2E_weak::bang_unifiedTypeMapElementClass_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapElementClass result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unifiedTypeMapElementClass) ;
      result = GGS_unifiedTypeMapElementClass ((cPtr_unifiedTypeMapElementClass *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapElementClass.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ("unifiedTypeMapElementClass.weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapElementClass_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak GGS_unifiedTypeMapElementClass_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_2E_weak result ;
  const GGS_unifiedTypeMapElementClass_2E_weak * p = (const GGS_unifiedTypeMapElementClass_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMapEntry definition'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition extensionGetter_definition (const GGS_unifiedTypeMapEntry & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 197)), GGS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 197)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_7453_weakElement_0 ;
      temp_0.getAssociatedValuesFor_element (extractedValue_7453_weakElement_0) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unifiedTypeMapElementClass var_type_7481 = extractedValue_7453_weakElement_0.unwrappedValue () ;
        if (!extractedValue_7453_weakElement_0.isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          switch (var_type_7481.readProperty_mDefinition ().enumValue ()) {
          case GGS_typeDefinition::Enumeration::invalid:
            break ;
          case GGS_typeDefinition::Enumeration::enum_unsolved:
            {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 202)), GGS_string ("unsolved type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 202)) ;
              result_result.drop () ; // Release error dropped variable
            }
            break ;
          case GGS_typeDefinition::Enumeration::enum_solved:
            {
              GGS_unifiedTypeDefinition extractedValue_7634_definition_0 ;
              var_type_7481.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_7634_definition_0) ;
              result_result = extractedValue_7634_definition_0 ;
            }
            break ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 207)), GGS_string ("nil type"), fixItArray4  COMMA_SOURCE_FILE ("unified-type-map.galgas", 207)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMapEntry identifierRepresentation'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_identifierRepresentation (const GGS_unifiedTypeMapEntry & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  result_result = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 215)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-type-map.galgas", 215)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMapEntry typeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typeName (const GGS_unifiedTypeMapEntry & inObject,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  result_result = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 221)).readProperty_typeName ().readProperty_string () ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMapEntry baseType'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_baseType (const GGS_unifiedTypeMapEntry & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_outBaseType ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  result_outBaseType = temp_0 ;
  bool loop_8361 = true ;
  while (loop_8361) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 228)).readProperty_superType ().getter_isNull (SOURCE_FILE ("unified-type-map.galgas", 228)).operator_not (SOURCE_FILE ("unified-type-map.galgas", 228)).boolEnum () ;
      loop_8361 = test_1 == GalgasBool::boolTrue ;
      if (loop_8361) {
        result_outBaseType = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 229)).readProperty_superType () ;
      }
    }
  }
//---
  return result_outBaseType ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const GGS_unifiedTypeMapEntry inObject,
                                        GGS_stringset & ioArgument_ioInclusions,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  GGS_unifiedTypeDefinition var_typeDefinition_8654 = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 236)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_typeDefinition_8654.readProperty_isPredefined ().operator_not (SOURCE_FILE ("unified-type-map.galgas", 237)).operator_and (GGS_bool (ComparisonKind::notEqual, var_typeDefinition_8654.readProperty_headerKind ().objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("unified-type-map.galgas", 237)))) COMMA_SOURCE_FILE ("unified-type-map.galgas", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioInclusions.plusPlusAssignOperation (var_typeDefinition_8654.readProperty_headerFileName ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 238)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const GGS_unifiedTypeMapEntry inObject,
                                            GGS_stringset & ioArgument_ioInclusions,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  GGS_unifiedTypeDefinition var_typeDefinition_9008 = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 245)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_typeDefinition_9008.readProperty_isPredefined ().operator_not (SOURCE_FILE ("unified-type-map.galgas", 246)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      switch (var_typeDefinition_9008.readProperty_headerKind ().enumValue ()) {
      case GGS_headerKind::Enumeration::invalid:
        break ;
      case GGS_headerKind::Enumeration::enum_noHeader:
        break ;
      case GGS_headerKind::Enumeration::enum_oneHeader:
        {
          ioArgument_ioInclusions.plusPlusAssignOperation (var_typeDefinition_9008.readProperty_headerFileName ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 250)) ;
        }
        break ;
      case GGS_headerKind::Enumeration::enum_twoHeaders:
        {
          ioArgument_ioInclusions.plusPlusAssignOperation (var_typeDefinition_9008.readProperty_headerFileName ().add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 252))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 252)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@programListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_programListForGeneration : public cCollectionElement {
  public: GGS_programListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_programListForGeneration (const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_programListForGeneration (const GGS_programListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_programListForGeneration::cCollectionElement_programListForGeneration (const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_programListForGeneration::cCollectionElement_programListForGeneration (const GGS_programListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_programListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_programListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_programListForGeneration (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @programListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration::GGS_programListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration::GGS_programListForGeneration (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    const GGS_programListForGeneration_2E_element element (p->mObject.mProperty_mDeclaration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_programListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_programListForGeneration (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_programListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_programListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDeclaration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::plusPlusAssignOperation (const GGS_programListForGeneration_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::class_func_listWithValue (const GGS_semanticDeclarationForGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_programListForGeneration_2E_element element (inOperand0) ;
  GGS_programListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::addAssignOperation (const GGS_semanticDeclarationForGeneration & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  const GGS_programListForGeneration_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_append (const GGS_semanticDeclarationForGeneration inOperand0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_programListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_insertAtIndex (const GGS_semanticDeclarationForGeneration inOperand0,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_programListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_removeAtIndex (GGS_semanticDeclarationForGeneration & outOperand0,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDeclaration ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_popFirst (GGS_semanticDeclarationForGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_popLast (GGS_semanticDeclarationForGeneration & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclaration ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::method_first (GGS_semanticDeclarationForGeneration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::method_last (GGS_semanticDeclarationForGeneration & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclaration ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::add_operation (const GGS_programListForGeneration & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::plusAssignOperation (const GGS_programListForGeneration inList,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_setMDeclarationAtIndex (GGS_semanticDeclarationForGeneration inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_semanticDeclarationForGeneration GGS_programListForGeneration::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @programListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_programListForGeneration::DownEnumerator_programListForGeneration (const GGS_programListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element DownEnumerator_programListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration DownEnumerator_programListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @programListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_programListForGeneration::UpEnumerator_programListForGeneration (const GGS_programListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element UpEnumerator_programListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration UpEnumerator_programListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @programListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration ("programListForGeneration",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_programListForGeneration result ;
  const GGS_programListForGeneration * p = (const GGS_programListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticDeclarationForGeneration::objectCompare (const GGS_semanticDeclarationForGeneration & inOperand) const {
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

GGS_semanticDeclarationForGeneration::GGS_semanticDeclarationForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_semanticDeclarationForGeneration::
semanticDeclarationForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration::GGS_semanticDeclarationForGeneration (const cPtr_semanticDeclarationForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationForGeneration::cPtr_semanticDeclarationForGeneration (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ("semanticDeclarationForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration GGS_semanticDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationForGeneration result ;
  const GGS_semanticDeclarationForGeneration * p = (const GGS_semanticDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@localConstantList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localConstantList : public cCollectionElement {
  public: GGS_localConstantList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_localConstantList (const GGS_unifiedTypeMapEntry & in_mType,
                                                const GGS_lstring & in_mName,
                                                const GGS_bool & in_mNoWarningIfUnused,
                                                const GGS_string & in_mCppName
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localConstantList (const GGS_localConstantList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GGS_unifiedTypeMapEntry & in_mType,
                                                                            const GGS_lstring & in_mName,
                                                                            const GGS_bool & in_mNoWarningIfUnused,
                                                                            const GGS_string & in_mCppName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mNoWarningIfUnused, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GGS_localConstantList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mNoWarningIfUnused, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localConstantList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localConstantList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mNoWarningIfUnused, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @localConstantList
//--------------------------------------------------------------------------------------------------

GGS_localConstantList::GGS_localConstantList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList::GGS_localConstantList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    const GGS_localConstantList_2E_element element (p->mObject.mProperty_mType, p->mObject.mProperty_mName, p->mObject.mProperty_mNoWarningIfUnused, p->mObject.mProperty_mCppName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_unifiedTypeMapEntry & in_mType,
                                                       const GGS_lstring & in_mName,
                                                       const GGS_bool & in_mNoWarningIfUnused,
                                                       const GGS_string & in_mCppName
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localConstantList (in_mType, in_mName, in_mNoWarningIfUnused, in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_localConstantList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_localConstantList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mNoWarningIfUnused:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mNoWarningIfUnused.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCppName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCppName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localConstantList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::plusPlusAssignOperation (const GGS_localConstantList_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                       const GGS_lstring & inOperand1,
                                                                       const GGS_bool & inOperand2,
                                                                       const GGS_string & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_localConstantList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_localConstantList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                const GGS_lstring & inOperand1,
                                                const GGS_bool & inOperand2,
                                                const GGS_string & inOperand3
                                                COMMA_LOCATION_ARGS) {
  const GGS_localConstantList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                           const GGS_lstring inOperand1,
                                           const GGS_bool inOperand2,
                                           const GGS_string inOperand3,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_localConstantList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  const GGS_bool inOperand2,
                                                  const GGS_string inOperand3,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_localConstantList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_bool & outOperand2,
                                                  GGS_string & outOperand3,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mType ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mNoWarningIfUnused ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mCppName ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_bool & outOperand2,
                                             GGS_string & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mNoWarningIfUnused ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mCppName ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                            GGS_lstring & outOperand1,
                                            GGS_bool & outOperand2,
                                            GGS_string & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mNoWarningIfUnused ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mCppName ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                          GGS_lstring & outOperand1,
                                          GGS_bool & outOperand2,
                                          GGS_string & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mNoWarningIfUnused ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mCppName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                         GGS_lstring & outOperand1,
                                         GGS_bool & outOperand2,
                                         GGS_string & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mNoWarningIfUnused ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mCppName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::add_operation (const GGS_localConstantList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::plusAssignOperation (const GGS_localConstantList inList,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_unifiedTypeMapEntry GGS_localConstantList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_localConstantList::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMNoWarningIfUnusedAtIndex (GGS_bool inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mNoWarningIfUnused = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_localConstantList::getter_mNoWarningIfUnusedAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mNoWarningIfUnused ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCppName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_localConstantList::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCppName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @localConstantList
//--------------------------------------------------------------------------------------------------

DownEnumerator_localConstantList::DownEnumerator_localConstantList (const GGS_localConstantList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element DownEnumerator_localConstantList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_localConstantList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_localConstantList::current_mName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_localConstantList::current_mNoWarningIfUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNoWarningIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_localConstantList::current_mCppName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCppName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @localConstantList
//--------------------------------------------------------------------------------------------------

UpEnumerator_localConstantList::UpEnumerator_localConstantList (const GGS_localConstantList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element UpEnumerator_localConstantList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_localConstantList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_localConstantList::current_mName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_localConstantList::current_mNoWarningIfUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNoWarningIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_localConstantList::current_mCppName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//     @localConstantList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantList ("localConstantList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_localConstantList result ;
  const GGS_localConstantList * p = (const GGS_localConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@localInitializedVariableList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localInitializedVariableList : public cCollectionElement {
  public: GGS_localInitializedVariableList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_localInitializedVariableList (const GGS_unifiedTypeMapEntry & in_mType,
                                                           const GGS_lstring & in_mName,
                                                           const GGS_string & in_mCppName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localInitializedVariableList (const GGS_localInitializedVariableList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                  const GGS_lstring & in_mName,
                                                                                                  const GGS_string & in_mCppName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GGS_localInitializedVariableList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localInitializedVariableList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localInitializedVariableList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localInitializedVariableList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @localInitializedVariableList
//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList::GGS_localInitializedVariableList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList::GGS_localInitializedVariableList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    const GGS_localInitializedVariableList_2E_element element (p->mObject.mProperty_mType, p->mObject.mProperty_mName, p->mObject.mProperty_mCppName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_unifiedTypeMapEntry & in_mType,
                                                                  const GGS_lstring & in_mName,
                                                                  const GGS_string & in_mCppName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localInitializedVariableList (in_mType, in_mName, in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_localInitializedVariableList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_localInitializedVariableList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCppName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCppName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localInitializedVariableList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::plusPlusAssignOperation (const GGS_localInitializedVariableList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                             const GGS_lstring & inOperand1,
                                                                                             const GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_localInitializedVariableList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_localInitializedVariableList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                           const GGS_lstring & inOperand1,
                                                           const GGS_string & inOperand2
                                                           COMMA_LOCATION_ARGS) {
  const GGS_localInitializedVariableList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_string inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_localInitializedVariableList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_string inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_localInitializedVariableList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             GGS_string & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mType ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mCppName ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mCppName ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mCppName ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_string & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mCppName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mCppName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::add_operation (const GGS_localInitializedVariableList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::plusAssignOperation (const GGS_localInitializedVariableList inList,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_unifiedTypeMapEntry GGS_localInitializedVariableList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_localInitializedVariableList::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCppName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_localInitializedVariableList::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCppName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @localInitializedVariableList
//--------------------------------------------------------------------------------------------------

DownEnumerator_localInitializedVariableList::DownEnumerator_localInitializedVariableList (const GGS_localInitializedVariableList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element DownEnumerator_localInitializedVariableList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_localInitializedVariableList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_localInitializedVariableList::current_mName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_localInitializedVariableList::current_mCppName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCppName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @localInitializedVariableList
//--------------------------------------------------------------------------------------------------

UpEnumerator_localInitializedVariableList::UpEnumerator_localInitializedVariableList (const GGS_localInitializedVariableList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element UpEnumerator_localInitializedVariableList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_localInitializedVariableList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_localInitializedVariableList::current_mName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_localInitializedVariableList::current_mCppName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//     @localInitializedVariableList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localInitializedVariableList ("localInitializedVariableList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localInitializedVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localInitializedVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localInitializedVariableList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList result ;
  const GGS_localInitializedVariableList * p = (const GGS_localInitializedVariableList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localInitializedVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_correspondingEffectiveParameterString (const GGS_formalArgumentPassingModeAST & inObject,
                                                                  Compiler *
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("!\?") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @abstractGrammarInstructionSyntaxDirectedTranslationResult reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const {
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

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::
abstractGrammarInstructionSyntaxDirectedTranslationResult_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ("abstractGrammarInstructionSyntaxDirectedTranslationResult",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum AccessControlAST
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST::GGS_AccessControlAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_publicAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_publicAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_protectedAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_protectedAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_protectedSetAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_protectedSetAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_privateAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_privateAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_privateSetAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_privateSetAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_fileprivateAccess (const GGS_location & inAssociatedValue0
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_fileprivateAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControlAST_2E_fileprivateAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_fileprivateSetAccess (const GGS_location & inAssociatedValue0
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_fileprivateSetAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControlAST_2E_fileprivateSetAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::method_extractFileprivateAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("method @AccessControlAST.fileprivateAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControlAST_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::method_extractFileprivateSetAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateSetAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("method @AccessControlAST.fileprivateSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControlAST_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST::getter_getFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateAccess) {
    const auto ptr = (const GGS_AccessControlAST_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControlAST_2E_fileprivateAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::getAssociatedValuesFor_fileprivateAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControlAST_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST::getter_getFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateSetAccess) {
    const auto ptr = (const GGS_AccessControlAST_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControlAST_2E_fileprivateSetAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::getAssociatedValuesFor_fileprivateSetAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControlAST_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_AccessControlAST [8] = {
  "(not built)",
  "publicAccess",
  "protectedAccess",
  "protectedSetAccess",
  "privateAccess",
  "privateSetAccess",
  "fileprivateAccess",
  "fileprivateSetAccess"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isPublicAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_publicAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isProtectedAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isProtectedSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isPrivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isPrivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @AccessControlAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_AccessControlAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @AccessControlAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST ("AccessControlAST",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  const GGS_AccessControlAST * p = (const GGS_AccessControlAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@AccessControlAST accessControl'
//--------------------------------------------------------------------------------------------------

GGS_AccessControl extensionGetter_accessControl (const GGS_AccessControlAST & inObject,
                                                 const GGS_unifiedTypeMapEntry & constinArgument_inDeclaringType,
                                                 Compiler *
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result_result ; // Returned variable
  const GGS_AccessControlAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControlAST::Enumeration::invalid:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_publicAccess:
    {
      result_result = GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 170)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedAccess:
    {
      result_result = GGS_AccessControl::class_func_protectedAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 172)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedSetAccess:
    {
      result_result = GGS_AccessControl::class_func_protectedSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 174)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateAccess:
    {
      result_result = GGS_AccessControl::class_func_privateAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 176)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateSetAccess:
    {
      result_result = GGS_AccessControl::class_func_privateSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 178)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateAccess:
    {
      GGS_location extractedValue_5982_declarationLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateAccess (extractedValue_5982_declarationLocation_0) ;
      result_result = GGS_AccessControl::class_func_fileprivateAccess (extractedValue_5982_declarationLocation_0  COMMA_SOURCE_FILE ("accessControl.galgas", 180)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateSetAccess:
    {
      GGS_location extractedValue_6114_declarationLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateSetAccess (extractedValue_6114_declarationLocation_0) ;
      result_result = GGS_AccessControl::class_func_fileprivateSetAccess (extractedValue_6114_declarationLocation_0  COMMA_SOURCE_FILE ("accessControl.galgas", 182)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkSetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const GGS_AccessControl inObject,
                                     const GGS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GGS_location constinArgument_inErrorLocation,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControl::Enumeration::invalid:
    break ;
  case GGS_AccessControl::Enumeration::enum_publicAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_7134_declaringType_0 ;
      temp_0.getAssociatedValuesFor_protectedAccess (extractedValue_7134_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 210)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_7313_t_0 ;
          GGS_selfMutability extractedValue_7315__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_7313_t_0, extractedValue_7315__1) ;
          GGS_unifiedTypeMapEntry var_currentType_7332 = extractedValue_7313_t_0 ;
          GGS_bool var_ok_7360 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_7134_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 213)).objectCompare (extensionGetter_typeName (var_currentType_7332, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 213)))) ;
          bool loop_7424 = true ;
          while (loop_7424) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_bool test_3 = var_ok_7360.operator_not (SOURCE_FILE ("accessControl.galgas", 214)) ;
              if (GalgasBool::boolTrue == test_3.boolEnum ()) {
                test_3 = extensionGetter_definition (var_currentType_7332, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 214)).readProperty_superType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 214)).operator_not (SOURCE_FILE ("accessControl.galgas", 214)) ;
              }
              test_2 = test_3.boolEnum () ;
              loop_7424 = test_2 == GalgasBool::boolTrue ;
              if (loop_7424) {
                var_currentType_7332 = extensionGetter_definition (var_currentType_7332, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 215)).readProperty_superType () ;
                var_ok_7360 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_7134_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 216)).objectCompare (extensionGetter_typeName (var_currentType_7332, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 216)))) ;
              }
            }
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = var_ok_7360.operator_not (SOURCE_FILE ("accessControl.galgas", 218)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 219)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedSetAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_7800_declaringType_0 ;
      temp_0.getAssociatedValuesFor_protectedSetAccess (extractedValue_7800_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray6  COMMA_SOURCE_FILE ("accessControl.galgas", 225)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_7987_t_0 ;
          GGS_selfMutability extractedValue_7989__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_7987_t_0, extractedValue_7989__1) ;
          GGS_unifiedTypeMapEntry var_currentType_8006 = extractedValue_7987_t_0 ;
          GGS_bool var_ok_8034 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_7800_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 228)).objectCompare (extensionGetter_typeName (var_currentType_8006, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 228)))) ;
          bool loop_8098 = true ;
          while (loop_8098) {
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              GGS_bool test_8 = var_ok_8034.operator_not (SOURCE_FILE ("accessControl.galgas", 229)) ;
              if (GalgasBool::boolTrue == test_8.boolEnum ()) {
                test_8 = extensionGetter_definition (var_currentType_8006, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 229)).readProperty_superType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 229)).operator_not (SOURCE_FILE ("accessControl.galgas", 229)) ;
              }
              test_7 = test_8.boolEnum () ;
              loop_8098 = test_7 == GalgasBool::boolTrue ;
              if (loop_8098) {
                var_currentType_8006 = extensionGetter_definition (var_currentType_8006, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 230)).readProperty_superType () ;
                var_ok_8034 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_7800_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 231)).objectCompare (extensionGetter_typeName (var_currentType_8006, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 231)))) ;
              }
            }
          }
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_ok_8034.operator_not (SOURCE_FILE ("accessControl.galgas", 233)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("accessControl.galgas", 234)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_privateAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_8476_declaringType_0 ;
      temp_0.getAssociatedValuesFor_privateAccess (extractedValue_8476_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray11  COMMA_SOURCE_FILE ("accessControl.galgas", 240)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_8653_currentType_0 ;
          GGS_selfMutability extractedValue_8665__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_8653_currentType_0, extractedValue_8665__1) ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            test_12 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typeName (extractedValue_8476_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 242)).objectCompare (extensionGetter_typeName (extractedValue_8653_currentType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 242)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("accessControl.galgas", 243)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_privateSetAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_8873_declaringType_0 ;
      temp_0.getAssociatedValuesFor_privateSetAccess (extractedValue_8873_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray14  COMMA_SOURCE_FILE ("accessControl.galgas", 249)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_9058_currentType_0 ;
          GGS_selfMutability extractedValue_9070__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_9058_currentType_0, extractedValue_9070__1) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typeName (extractedValue_8873_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 251)).objectCompare (extensionGetter_typeName (extractedValue_9058_currentType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 251)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray16  COMMA_SOURCE_FILE ("accessControl.galgas", 252)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateAccess:
    {
      GGS_location extractedValue_9284_declaringLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateAccess (extractedValue_9284_declaringLocation_0) ;
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = GGS_bool (ComparisonKind::notEqual, extensionGetter_sourceFile (extractedValue_9284_declaringLocation_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 256)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 256)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray18  COMMA_SOURCE_FILE ("accessControl.galgas", 257)) ;
        }
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateSetAccess:
    {
      GGS_location extractedValue_9512_declaringLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateSetAccess (extractedValue_9512_declaringLocation_0) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::notEqual, extensionGetter_sourceFile (extractedValue_9512_declaringLocation_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 260)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 260)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'fileprivate(set)' qualifier)"), fixItArray20  COMMA_SOURCE_FILE ("accessControl.galgas", 261)) ;
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkGetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const GGS_AccessControl inObject,
                                     const GGS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GGS_location constinArgument_inErrorLocation,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControl::Enumeration::invalid:
    break ;
  case GGS_AccessControl::Enumeration::enum_publicAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedSetAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_privateSetAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_10087_declaringType_0 ;
      temp_0.getAssociatedValuesFor_protectedAccess (extractedValue_10087_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 277)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_10264_t_0 ;
          GGS_selfMutability extractedValue_10266__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_10264_t_0, extractedValue_10266__1) ;
          GGS_unifiedTypeMapEntry var_currentType_10283 = extractedValue_10264_t_0 ;
          GGS_bool var_ok_10311 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_10087_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 280)).objectCompare (extensionGetter_typeName (var_currentType_10283, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 280)))) ;
          bool loop_10375 = true ;
          while (loop_10375) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_bool test_3 = var_ok_10311.operator_not (SOURCE_FILE ("accessControl.galgas", 281)) ;
              if (GalgasBool::boolTrue == test_3.boolEnum ()) {
                test_3 = extensionGetter_definition (var_currentType_10283, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 281)).readProperty_superType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 281)).operator_not (SOURCE_FILE ("accessControl.galgas", 281)) ;
              }
              test_2 = test_3.boolEnum () ;
              loop_10375 = test_2 == GalgasBool::boolTrue ;
              if (loop_10375) {
                var_currentType_10283 = extensionGetter_definition (var_currentType_10283, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 282)).readProperty_superType () ;
                var_ok_10311 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_10087_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 283)).objectCompare (extensionGetter_typeName (var_currentType_10283, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 283)))) ;
              }
            }
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = var_ok_10311.operator_not (SOURCE_FILE ("accessControl.galgas", 285)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 286)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_privateAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_10746_declaringType_0 ;
      temp_0.getAssociatedValuesFor_privateAccess (extractedValue_10746_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray6  COMMA_SOURCE_FILE ("accessControl.galgas", 292)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_10923_currentType_0 ;
          GGS_selfMutability extractedValue_10935__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_10923_currentType_0, extractedValue_10935__1) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typeName (extractedValue_10746_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 294)).objectCompare (extensionGetter_typeName (extractedValue_10923_currentType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 294)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("accessControl.galgas", 295)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateAccess:
    {
      GGS_location extractedValue_11144_declaringLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateAccess (extractedValue_11144_declaringLocation_0) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, extensionGetter_sourceFile (extractedValue_11144_declaringLocation_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 299)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 299)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("accessControl.galgas", 300)) ;
        }
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateSetAccess:
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalDropInstructionAST_2E_weak::objectCompare (const GGS_lexicalDropInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_lexicalDropInstructionAST_2E_weak::GGS_lexicalDropInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak & GGS_lexicalDropInstructionAST_2E_weak::operator = (const GGS_lexicalDropInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak::GGS_lexicalDropInstructionAST_2E_weak (const GGS_lexicalDropInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak GGS_lexicalDropInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalDropInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalDropInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalDropInstructionAST * p = (cPtr_lexicalDropInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalDropInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST_2E_weak::bang_lexicalDropInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalDropInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalDropInstructionAST) ;
      result = GGS_lexicalDropInstructionAST ((cPtr_lexicalDropInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalDropInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ("lexicalDropInstructionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalDropInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalDropInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalDropInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak GGS_lexicalDropInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalDropInstructionAST_2E_weak result ;
  const GGS_lexicalDropInstructionAST_2E_weak * p = (const GGS_lexicalDropInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalDropInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                      const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                               const GGS_string in_inScannerClassName,
                                                               const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_lexicalInstructionUsesLoopLocalVariable (const cPtr_lexicalInstructionAST * inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalInstructionUsesLoopLocalVariable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalRuleCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalRuleCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const cPtr_abstractLexicalRuleAST * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalRuleUsesLoopLocalVar (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @propertyIndexMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::~ GGS_propertyIndexMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (const GGS_propertyIndexMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap & GGS_propertyIndexMap::operator = (const GGS_propertyIndexMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyIndexMap::getter_hasKey (const GGS_string & inKey
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyIndexMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyIndexMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyIndexMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_propertyIndexMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_propertyIndexMap::getter_keyList (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyIndexMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyIndexMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::performInsert (const GGS_propertyIndexMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_propertyIndexMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>
GGS_propertyIndexMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_propertyIndexMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>>
GGS_propertyIndexMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_propertyIndexMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element_3F_ GGS_propertyIndexMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyIndexMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_propertyIndexMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyIndexMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mPropertyTypeIndex = info->mProperty_mPropertyTypeIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::class_func_mapWithMapToOverride (const GGS_propertyIndexMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyIndexMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_propertyIndexMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_unifiedTypeMapEntry inArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_propertyIndexMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_unifiedTypeMapEntry & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' attribute is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mPropertyTypeIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_propertyIndexMap::getter_mPropertyTypeIndexForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPropertyTypeIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_setMPropertyTypeIndexForKey (GGS_unifiedTypeMapEntry inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyIndexMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPropertyTypeIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_propertyIndexMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPropertyTypeIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mPropertyTypeIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> array = sortedInfoArray () ;
    GGS_propertyIndexMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_propertyIndexMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_propertyIndexMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertyIndexMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyIndexMap::DownEnumerator_propertyIndexMap (const GGS_propertyIndexMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element DownEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyTypeIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertyIndexMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyIndexMap::UpEnumerator_propertyIndexMap (const GGS_propertyIndexMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element UpEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyTypeIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyIndexMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap ("propertyIndexMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyIndexMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  const GGS_propertyIndexMap * p = (const GGS_propertyIndexMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::~ GGS_nonterminalLabelMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (const GGS_nonterminalLabelMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap & GGS_nonterminalLabelMap::operator = (const GGS_nonterminalLabelMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalLabelMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalLabelMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalLabelMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalLabelMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalLabelMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_nonterminalLabelMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalLabelMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalLabelMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::performInsert (const GGS_nonterminalLabelMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_nonterminalLabelMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>
GGS_nonterminalLabelMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_nonterminalLabelMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>>
GGS_nonterminalLabelMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_nonterminalLabelMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element_3F_ GGS_nonterminalLabelMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_nonterminalLabelMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalLabelMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSignatureForGeneration = info->mProperty_mSignatureForGeneration ;
      element.mProperty_mSignature = info->mProperty_mSignature ;
      element.mProperty_mEndOfArgumentLocation = info->mProperty_mEndOfArgumentLocation ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::class_func_mapWithMapToOverride (const GGS_nonterminalLabelMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalLabelMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_formalParameterListForGeneration inArgument0,
                                                GGS_formalParameterSignature inArgument1,
                                                GGS_location inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_nonterminalLabelMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal label has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_formalParameterListForGeneration & outArgument0,
                                                GGS_formalParameterSignature & outArgument1,
                                                GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' nonterminal label is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mSignatureForGeneration ;
    outArgument1 = info->mProperty_mSignature ;
    outArgument2 = info->mProperty_mEndOfArgumentLocation ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_nonterminalLabelMap::getter_mSignatureForGenerationForKey (const GGS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListForGeneration result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignatureForGeneration ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_nonterminalLabelMap::getter_mSignatureForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalLabelMap::getter_mEndOfArgumentLocationForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mEndOfArgumentLocation ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForGenerationForKey (GGS_formalParameterListForGeneration inValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignatureForGeneration = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForKey (GGS_formalParameterSignature inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMEndOfArgumentLocationForKey (GGS_location inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mEndOfArgumentLocation = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_nonterminalLabelMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSignatureForGeneration:") ;
    inArray (i COMMA_HERE)->mProperty_mSignatureForGeneration.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mEndOfArgumentLocation:") ;
    inArray (i COMMA_HERE)->mProperty_mEndOfArgumentLocation.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> array = sortedInfoArray () ;
    GGS_nonterminalLabelMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_nonterminalLabelMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_nonterminalLabelMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalLabelMap::DownEnumerator_nonterminalLabelMap (const GGS_nonterminalLabelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element DownEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration DownEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalLabelMap::UpEnumerator_nonterminalLabelMap (const GGS_nonterminalLabelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element UpEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration UpEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfArgumentLocation ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalLabelMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ("nonterminalLabelMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalLabelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  const GGS_nonterminalLabelMap * p = (const GGS_nonterminalLabelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @nonterminalMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::GGS_nonterminalMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::~ GGS_nonterminalMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::GGS_nonterminalMap (const GGS_nonterminalMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap & GGS_nonterminalMap::operator = (const GGS_nonterminalMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_nonterminalMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::performInsert (const GGS_nonterminalMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_nonterminalMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>
GGS_nonterminalMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_nonterminalMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>>
GGS_nonterminalMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_nonterminalMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element_3F_ GGS_nonterminalMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_nonterminalMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLabelMap = info->mProperty_mLabelMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::class_func_mapWithMapToOverride (const GGS_nonterminalMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_nonterminalMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_nonterminalLabelMap inArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_nonterminalMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_nonterminalLabelMap & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' nonterminal is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mLabelMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalMap::getter_mLabelMapForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLabelMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::setter_setMLabelMapForKey (GGS_nonterminalLabelMap inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_nonterminalMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLabelMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_nonterminalMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLabelMap:") ;
    inArray (i COMMA_HERE)->mProperty_mLabelMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> array = sortedInfoArray () ;
    GGS_nonterminalMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_nonterminalMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_nonterminalMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalMap::DownEnumerator_nonterminalMap (const GGS_nonterminalMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element DownEnumerator_nonterminalMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap DownEnumerator_nonterminalMap::current_mLabelMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalMap::UpEnumerator_nonterminalMap (const GGS_nonterminalMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element UpEnumerator_nonterminalMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap UpEnumerator_nonterminalMap::current_mLabelMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelMap ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalMap ("nonterminalMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  const GGS_nonterminalMap * p = (const GGS_nonterminalMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ruleLabelImplementationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleLabelImplementationList : public cCollectionElement {
  public: GGS_ruleLabelImplementationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleLabelImplementationList (const GGS_lstring & in_mLabelName,
                                                          const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                          const GGS_formalParameterSignature & in_mSignature,
                                                          const GGS_location & in_mEndOfArgumentLocation,
                                                          const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleLabelImplementationList (const GGS_ruleLabelImplementationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GGS_lstring & in_mLabelName,
                                                                                                const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                const GGS_formalParameterSignature & in_mSignature,
                                                                                                const GGS_location & in_mEndOfArgumentLocation,
                                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mSignatureForGeneration, in_mSignature, in_mEndOfArgumentLocation, in_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GGS_ruleLabelImplementationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mSignatureForGeneration, inElement.mProperty_mSignature, inElement.mProperty_mEndOfArgumentLocation, inElement.mProperty_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleLabelImplementationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleLabelImplementationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleLabelImplementationList (mObject.mProperty_mLabelName, mObject.mProperty_mSignatureForGeneration, mObject.mProperty_mSignature, mObject.mProperty_mEndOfArgumentLocation, mObject.mProperty_mInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ruleLabelImplementationList
//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList::GGS_ruleLabelImplementationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList::GGS_ruleLabelImplementationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    const GGS_ruleLabelImplementationList_2E_element element (p->mObject.mProperty_mLabelName, p->mObject.mProperty_mSignatureForGeneration, p->mObject.mProperty_mSignature, p->mObject.mProperty_mEndOfArgumentLocation, p->mObject.mProperty_mInstructionListForGeneration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mLabelName,
                                                                 const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                 const GGS_formalParameterSignature & in_mSignature,
                                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                                 const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleLabelImplementationList (in_mLabelName, in_mSignatureForGeneration, in_mSignature, in_mEndOfArgumentLocation, in_mInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ruleLabelImplementationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ruleLabelImplementationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabelName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabelName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSignatureForGeneration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSignatureForGeneration.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSignature:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSignature.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfArgumentLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfArgumentLocation.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionListForGeneration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionListForGeneration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::plusPlusAssignOperation (const GGS_ruleLabelImplementationList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_formalParameterListForGeneration & inOperand1,
                                                                                           const GGS_formalParameterSignature & inOperand2,
                                                                                           const GGS_location & inOperand3,
                                                                                           const GGS_semanticInstructionListForGeneration & inOperand4
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_ruleLabelImplementationList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_ruleLabelImplementationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_formalParameterListForGeneration & inOperand1,
                                                          const GGS_formalParameterSignature & inOperand2,
                                                          const GGS_location & inOperand3,
                                                          const GGS_semanticInstructionListForGeneration & inOperand4
                                                          COMMA_LOCATION_ARGS) {
  const GGS_ruleLabelImplementationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_formalParameterListForGeneration inOperand1,
                                                     const GGS_formalParameterSignature inOperand2,
                                                     const GGS_location inOperand3,
                                                     const GGS_semanticInstructionListForGeneration inOperand4,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_ruleLabelImplementationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_formalParameterListForGeneration inOperand1,
                                                            const GGS_formalParameterSignature inOperand2,
                                                            const GGS_location inOperand3,
                                                            const GGS_semanticInstructionListForGeneration inOperand4,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_ruleLabelImplementationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_formalParameterListForGeneration & outOperand1,
                                                            GGS_formalParameterSignature & outOperand2,
                                                            GGS_location & outOperand3,
                                                            GGS_semanticInstructionListForGeneration & outOperand4,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLabelName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSignatureForGeneration ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mSignature ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mEndOfArgumentLocation ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mInstructionListForGeneration ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_formalParameterListForGeneration & outOperand1,
                                                       GGS_formalParameterSignature & outOperand2,
                                                       GGS_location & outOperand3,
                                                       GGS_semanticInstructionListForGeneration & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSignatureForGeneration ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSignature ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mInstructionListForGeneration ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_formalParameterListForGeneration & outOperand1,
                                                      GGS_formalParameterSignature & outOperand2,
                                                      GGS_location & outOperand3,
                                                      GGS_semanticInstructionListForGeneration & outOperand4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSignatureForGeneration ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSignature ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mInstructionListForGeneration ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::method_first (GGS_lstring & outOperand0,
                                                    GGS_formalParameterListForGeneration & outOperand1,
                                                    GGS_formalParameterSignature & outOperand2,
                                                    GGS_location & outOperand3,
                                                    GGS_semanticInstructionListForGeneration & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSignatureForGeneration ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSignature ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mInstructionListForGeneration ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::method_last (GGS_lstring & outOperand0,
                                                   GGS_formalParameterListForGeneration & outOperand1,
                                                   GGS_formalParameterSignature & outOperand2,
                                                   GGS_location & outOperand3,
                                                   GGS_semanticInstructionListForGeneration & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSignatureForGeneration ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSignature ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mInstructionListForGeneration ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::add_operation (const GGS_ruleLabelImplementationList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::plusAssignOperation (const GGS_ruleLabelImplementationList inList,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMLabelNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_ruleLabelImplementationList::getter_mLabelNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMSignatureForGenerationAtIndex (GGS_formalParameterListForGeneration inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSignatureForGeneration = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_formalParameterListForGeneration GGS_ruleLabelImplementationList::getter_mSignatureForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSignatureForGeneration ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMSignatureAtIndex (GGS_formalParameterSignature inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSignature = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_formalParameterSignature GGS_ruleLabelImplementationList::getter_mSignatureAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSignature ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMEndOfArgumentLocationAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_ruleLabelImplementationList::getter_mEndOfArgumentLocationAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMInstructionListForGenerationAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionListForGeneration = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_semanticInstructionListForGeneration GGS_ruleLabelImplementationList::getter_mInstructionListForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionListForGeneration ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ruleLabelImplementationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ruleLabelImplementationList::DownEnumerator_ruleLabelImplementationList (const GGS_ruleLabelImplementationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element DownEnumerator_ruleLabelImplementationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_ruleLabelImplementationList::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration DownEnumerator_ruleLabelImplementationList::current_mSignatureForGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_ruleLabelImplementationList::current_mSignature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_ruleLabelImplementationList::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator_ruleLabelImplementationList::current_mInstructionListForGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionListForGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ruleLabelImplementationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ruleLabelImplementationList::UpEnumerator_ruleLabelImplementationList (const GGS_ruleLabelImplementationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element UpEnumerator_ruleLabelImplementationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_ruleLabelImplementationList::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration UpEnumerator_ruleLabelImplementationList::current_mSignatureForGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_ruleLabelImplementationList::current_mSignature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_ruleLabelImplementationList::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator_ruleLabelImplementationList::current_mInstructionListForGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionListForGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @ruleLabelImplementationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ("ruleLabelImplementationList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ruleLabelImplementationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleLabelImplementationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleLabelImplementationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList result ;
  const GGS_ruleLabelImplementationList * p = (const GGS_ruleLabelImplementationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleLabelImplementationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ruleDeclarationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleDeclarationList : public cCollectionElement {
  public: GGS_ruleDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleDeclarationList (const GGS_string & in_mNonterminalName,
                                                  const GGS_uint & in_mRuleIndex,
                                                  const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleDeclarationList (const GGS_ruleDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GGS_string & in_mNonterminalName,
                                                                                const GGS_uint & in_mRuleIndex,
                                                                                const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mRuleIndex, in_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GGS_ruleDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mRuleIndex, inElement.mProperty_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleDeclarationList (mObject.mProperty_mNonterminalName, mObject.mProperty_mRuleIndex, mObject.mProperty_mLabelImplementationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ruleDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList::GGS_ruleDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList::GGS_ruleDeclarationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    const GGS_ruleDeclarationList_2E_element element (p->mObject.mProperty_mNonterminalName, p->mObject.mProperty_mRuleIndex, p->mObject.mProperty_mLabelImplementationList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GGS_string & in_mNonterminalName,
                                                         const GGS_uint & in_mRuleIndex,
                                                         const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleDeclarationList (in_mNonterminalName, in_mRuleIndex, in_mLabelImplementationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ruleDeclarationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ruleDeclarationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mNonterminalName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mNonterminalName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRuleIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRuleIndex.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabelImplementationList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabelImplementationList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::plusPlusAssignOperation (const GGS_ruleDeclarationList_2E_element & inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                           const GGS_uint & inOperand1,
                                                                           const GGS_ruleLabelImplementationList & inOperand2
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_ruleDeclarationList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_ruleDeclarationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::addAssignOperation (const GGS_string & inOperand0,
                                                  const GGS_uint & inOperand1,
                                                  const GGS_ruleLabelImplementationList & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  const GGS_ruleDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_append (const GGS_string inOperand0,
                                             const GGS_uint inOperand1,
                                             const GGS_ruleLabelImplementationList inOperand2,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  const GGS_ruleDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                    const GGS_uint inOperand1,
                                                    const GGS_ruleLabelImplementationList inOperand2,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_ruleDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                    GGS_uint & outOperand1,
                                                    GGS_ruleLabelImplementationList & outOperand2,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mNonterminalName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mRuleIndex ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mLabelImplementationList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_popFirst (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_ruleLabelImplementationList & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mNonterminalName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mRuleIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mLabelImplementationList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_popLast (GGS_string & outOperand0,
                                              GGS_uint & outOperand1,
                                              GGS_ruleLabelImplementationList & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mNonterminalName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mRuleIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mLabelImplementationList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::method_first (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_ruleLabelImplementationList & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mNonterminalName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mRuleIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mLabelImplementationList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::method_last (GGS_string & outOperand0,
                                           GGS_uint & outOperand1,
                                           GGS_ruleLabelImplementationList & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mNonterminalName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mRuleIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mLabelImplementationList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::add_operation (const GGS_ruleDeclarationList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::plusAssignOperation (const GGS_ruleDeclarationList inList,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMNonterminalNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_ruleDeclarationList::getter_mNonterminalNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMRuleIndexAtIndex (GGS_uint inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_ruleDeclarationList::getter_mRuleIndexAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMLabelImplementationListAtIndex (GGS_ruleLabelImplementationList inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelImplementationList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_ruleLabelImplementationList GGS_ruleDeclarationList::getter_mLabelImplementationListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelImplementationList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ruleDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ruleDeclarationList::DownEnumerator_ruleDeclarationList (const GGS_ruleDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element DownEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList DownEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelImplementationList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ruleDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ruleDeclarationList::UpEnumerator_ruleDeclarationList (const GGS_ruleDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element UpEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList UpEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelImplementationList ;
}




//--------------------------------------------------------------------------------------------------
//     @ruleDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleDeclarationList ("ruleDeclarationList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ruleDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_ruleDeclarationList result ;
  const GGS_ruleDeclarationList * p = (const GGS_ruleDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (cPtr_abstractInputParameter * inObject,
                                                const GGS_analysisContext constin_inAnalysisContext,
                                                GGS_unifiedTypeMap & io_ioTypeMap,
                                                const GGS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const GGS_string constin_inLexicalAttributeName,
                                                GGS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                GGS_localVarManager & io_ioVariableMap,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInputParameter) ;
    inObject->method_analyzeInputParameter (constin_inAnalysisContext, io_ioTypeMap, constin_inRequiredLexicalType, constin_inLexicalAttributeName, io_ioTerminalCheckAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const GGS_analysisContext constin_inAnalysisContext,
                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                     const GGS_bool constin_inHasTranslateFeature,
                                     GGS_localVarManager & io_ioVariableMap,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeSDT (constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const GGS_string constin_inAccessMethodName,
                                       GGS_stringset & io_ioUnusedVariableCppNameSet,
                                       GGS_string & io_ioGeneratedCode,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_generateCode (constin_inGenerateSyntaxDirectedTranslationString, constin_inAccessMethodName, io_ioUnusedVariableCppNameSet, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_jsonScanner::cTokenFor_jsonScanner (void) :
mLexicalAttribute_bigintValue (),
mLexicalAttribute_charValue (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_jsonScanner::Lexique_jsonScanner (Compiler * inCallerCompiler,
                                          const String & inSourceFileName
                                          COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_jsonScanner::Lexique_jsonScanner (Compiler * inCallerCompiler,
                                          const String & inSourceString,
                                          const String & inStringForError
                                          COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_jsonScanner_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_jsonScanner_internalError = "internal error" ;

static const char * gLexicalMessage_jsonScanner_invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_jsonScanner_unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_jsonScanner::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 12)) {
    static const char * syntaxErrorMessageArray [12] = {kEndOfSourceLexicalErrorMessage,
        "a character string \"...\"",
        "a decimal number",
        "the '[' delimiter",
        "the ']' delimiter",
        "the '{' delimiter",
        "the '}' delimiter",
        "the ':' delimiter",
        "the ',' delimiter",
        "the 'false' reserved word",
        "the 'null' reserved word",
        "the 'true' reserved word"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_jsonScanner__2C_ = {
  utf32 (','),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_jsonScanner__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_jsonScanner__5B_ = {
  utf32 ('['),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_jsonScanner__5D_ = {
  utf32 (']'),
} ;

//--- Unicode string for '$false$'
static const std::initializer_list <utf32> kUnicodeString_jsonScanner_false = {
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$null$'
static const std::initializer_list <utf32> kUnicodeString_jsonScanner_null = {
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('l'),
} ;

//--- Unicode string for '$true$'
static const std::initializer_list <utf32> kUnicodeString_jsonScanner_true = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_jsonScanner__7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_jsonScanner__7D_ = {
  utf32 ('}'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimiterList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_jsonScanner_delimiterList = 6 ;

static const C_unicode_lexique_table_entry ktable_for_jsonScanner_delimiterList [ktable_size_jsonScanner_delimiterList] = {
  C_unicode_lexique_table_entry (kUnicodeString_jsonScanner__2C_, Lexique_jsonScanner::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_jsonScanner__3A_, Lexique_jsonScanner::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_jsonScanner__5B_, Lexique_jsonScanner::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_jsonScanner__5D_, Lexique_jsonScanner::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_jsonScanner__7B_, Lexique_jsonScanner::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_jsonScanner__7D_, Lexique_jsonScanner::kToken__7D_)
} ;

int32_t Lexique_jsonScanner::search_into_delimiterList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_jsonScanner_delimiterList, ktable_size_jsonScanner_delimiterList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'reservedWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_jsonScanner_reservedWordList = 3 ;

static const C_unicode_lexique_table_entry ktable_for_jsonScanner_reservedWordList [ktable_size_jsonScanner_reservedWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_jsonScanner_null, Lexique_jsonScanner::kToken_null),
  C_unicode_lexique_table_entry (kUnicodeString_jsonScanner_true, Lexique_jsonScanner::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_jsonScanner_false, Lexique_jsonScanner::kToken_false)
} ;

int32_t Lexique_jsonScanner::search_into_reservedWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_jsonScanner_reservedWordList, ktable_size_jsonScanner_reservedWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_jsonScanner::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_jsonScanner * ptr = (const cTokenFor_jsonScanner *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken__22_string_22_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\"string\"") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
      break ;
    case kToken__5B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_false:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("false") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_null:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("null") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_true:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("true") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_jsonScanner::internalParseLexicalToken (cTokenFor_jsonScanner & token) {
  bool loop = true ;
  token.mLexicalAttribute_bigintValue = BigSigned () ;
  token.mLexicalAttribute_charValue = utf32 (0) ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32String (kUnicodeString_jsonScanner__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_jsonScanner__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_jsonScanner__5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_jsonScanner__5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_jsonScanner__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_jsonScanner__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_jsonScanner_false, true)) {
      token.mTokenCode = kToken_false ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_jsonScanner_true, true)) {
      token.mTokenCode = kToken_true ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_jsonScanner_null, true)) {
      token.mTokenCode = kToken_null ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32Char (utf32 ('\\'))) {
          if (testForInputUTF32Char (utf32 ('b'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\b')) ;
          }else if (testForInputUTF32Char (utf32 ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\f')) ;
          }else if (testForInputUTF32Char (utf32 ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\n')) ;
          }else if (testForInputUTF32Char (utf32 ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\r')) ;
          }else if (testForInputUTF32Char (utf32 ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\t')) ;
          }else if (testForInputUTF32Char (utf32 ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32Char (utf32 ('/'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('/')) ;
          }else if (testForInputUTF32Char (utf32 ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
          }else if (testForInputUTF32Char (utf32 ('u'))) {
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_jsonScanner_internalError, gLexicalMessage_jsonScanner_internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_jsonScanner_internalError, gLexicalMessage_jsonScanner_internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_jsonScanner_internalError, gLexicalMessage_jsonScanner_internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_jsonScanner_internalError, gLexicalMessage_jsonScanner_internalError) ;
                    ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_jsonScanner_unassignedUnicodeValue) ;
                    ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                  }else{
                    lexicalError (gLexicalMessage_jsonScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_jsonScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_jsonScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_jsonScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_jsonScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 ('[')) || testForInputUTF32CharRange (utf32 (']'), utf32 (1114111))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_jsonScanner_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_jsonScanner_internalError) ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('-'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_jsonScanner_internalError) ;
      ::scanner_routine_negateBigInt (*this, token.mLexicalAttribute_bigintValue) ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\t')) || testForInputUTF32Char (utf32 ('\n')) || testForInputUTF32Char (utf32 ('\r')) || testForInputUTF32Char (utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_jsonScanner::parseLexicalToken (void) {
  cTokenFor_jsonScanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_jsonScanner::enterToken (cTokenFor_jsonScanner & ioToken) {
  cTokenFor_jsonScanner * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_jsonScanner ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigintValue = ioToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

BigSigned Lexique_jsonScanner::attributeValue_bigintValue (void) const {
  cTokenFor_jsonScanner * ptr = (cTokenFor_jsonScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//--------------------------------------------------------------------------------------------------

utf32 Lexique_jsonScanner::attributeValue_charValue (void) const {
  cTokenFor_jsonScanner * ptr = (cTokenFor_jsonScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_jsonScanner::attributeValue_tokenString (void) const {
  cTokenFor_jsonScanner * ptr = (cTokenFor_jsonScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_jsonScanner::attributeValue_uint_33__32_value (void) const {
  cTokenFor_jsonScanner * ptr = (cTokenFor_jsonScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lbigint Lexique_jsonScanner::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_jsonScanner * ptr = (cTokenFor_jsonScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_jsonScanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GGS_lbigint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar Lexique_jsonScanner::synthetizedAttribute_charValue (void) const {
  cTokenFor_jsonScanner * ptr = (cTokenFor_jsonScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_jsonScanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_char value (ptr->mLexicalAttribute_charValue) ;
  GGS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_jsonScanner::synthetizedAttribute_tokenString (void) const {
  cTokenFor_jsonScanner * ptr = (cTokenFor_jsonScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_jsonScanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_jsonScanner::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_jsonScanner * ptr = (cTokenFor_jsonScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_jsonScanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

 GGS_stringlist Lexique_jsonScanner::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
  result.addAssignOperation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("false") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("null") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("true") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_jsonScanner (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("jsonScanner:delimiterList") ;
  ioList.appendObject ("jsonScanner:reservedWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_jsonScanner (const String & inIdentifier,
                                                  bool & ioFound,
                                                  GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "jsonScanner:delimiterList") {
    ioFound = true ;
    ioList.appendObject (",") ;
    ioList.appendObject (":") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("}") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "jsonScanner:reservedWordList") {
    ioFound = true ;
    ioList.appendObject ("null") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("false") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_jsonScanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_jsonScanner, getKeywordsForIdentifier_jsonScanner) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_jsonScanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [12] = {0,
    3 /* jsonScanner_1__22_string_22_ */,
    4 /* jsonScanner_1_integer */,
    2 /* jsonScanner_1__5B_ */,
    2 /* jsonScanner_1__5D_ */,
    2 /* jsonScanner_1__7B_ */,
    2 /* jsonScanner_1__7D_ */,
    2 /* jsonScanner_1__3A_ */,
    2 /* jsonScanner_1__2C_ */,
    1 /* jsonScanner_1_false */,
    1 /* jsonScanner_1_null */,
    1 /* jsonScanner_1_true */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_jsonScanner::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 5) {
    static const char * kStyleArray [5] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "stringStyle",
      "integerStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum jsonValue
//--------------------------------------------------------------------------------------------------

GGS_jsonValue::GGS_jsonValue (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_jsonValue GGS_jsonValue::class_func_jsonNull (UNUSED_LOCATION_ARGS) {
  GGS_jsonValue result ;
  result.mEnum = Enumeration::enum_jsonNull ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue GGS_jsonValue::class_func_jsonTrue (UNUSED_LOCATION_ARGS) {
  GGS_jsonValue result ;
  result.mEnum = Enumeration::enum_jsonTrue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue GGS_jsonValue::class_func_jsonFalse (UNUSED_LOCATION_ARGS) {
  GGS_jsonValue result ;
  result.mEnum = Enumeration::enum_jsonFalse ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue GGS_jsonValue::class_func_jsonObject (const GGS_jsonObjectValue & inAssociatedValue0
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_jsonValue result ;
  result.mEnum = Enumeration::enum_jsonObject ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_jsonValue_2E_jsonObject (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue GGS_jsonValue::class_func_jsonArray (const GGS_jsonArrayValue & inAssociatedValue0
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_jsonValue result ;
  result.mEnum = Enumeration::enum_jsonArray ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_jsonValue_2E_jsonArray (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue GGS_jsonValue::class_func_jsonInteger (const GGS_bigint & inAssociatedValue0
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_jsonValue result ;
  result.mEnum = Enumeration::enum_jsonInteger ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_jsonValue_2E_jsonInteger (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue GGS_jsonValue::class_func_jsonString (const GGS_string & inAssociatedValue0
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_jsonValue result ;
  result.mEnum = Enumeration::enum_jsonString ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_jsonValue_2E_jsonString (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonValue::method_extractJsonObject (GGS_jsonObjectValue & outAssociatedValue_objectValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_jsonObject) {
    outAssociatedValue_objectValue.drop () ;
    String s ;
    s.appendCString ("method @jsonValue.jsonObject invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_jsonValue_2E_jsonObject *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_objectValue = ptr->mProperty_objectValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonValue::method_extractJsonArray (GGS_jsonArrayValue & outAssociatedValue_arrayValue,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_jsonArray) {
    outAssociatedValue_arrayValue.drop () ;
    String s ;
    s.appendCString ("method @jsonValue.jsonArray invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_jsonValue_2E_jsonArray *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_arrayValue = ptr->mProperty_arrayValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonValue::method_extractJsonInteger (GGS_bigint & outAssociatedValue_integerValue,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_jsonInteger) {
    outAssociatedValue_integerValue.drop () ;
    String s ;
    s.appendCString ("method @jsonValue.jsonInteger invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_jsonValue_2E_jsonInteger *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_integerValue = ptr->mProperty_integerValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonValue::method_extractJsonString (GGS_string & outAssociatedValue_stringValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_jsonString) {
    outAssociatedValue_stringValue.drop () ;
    String s ;
    s.appendCString ("method @jsonValue.jsonString invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_jsonValue_2E_jsonString *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_stringValue = ptr->mProperty_stringValue ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_jsonValue_2E_jsonObject_3F_ GGS_jsonValue::getter_getJsonObject (UNUSED_LOCATION_ARGS) const {
  GGS_jsonValue_2E_jsonObject_3F_ result ;
  if (mEnum == Enumeration::enum_jsonObject) {
    const auto ptr = (const GGS_jsonValue_2E_jsonObject *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_jsonValue_2E_jsonObject (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonValue::getAssociatedValuesFor_jsonObject (GGS_jsonObjectValue & out_objectValue) const {
  const auto ptr = (const GGS_jsonValue_2E_jsonObject *) mAssociatedValues.associatedValuesPointer () ;
  out_objectValue = ptr->mProperty_objectValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue_2E_jsonArray_3F_ GGS_jsonValue::getter_getJsonArray (UNUSED_LOCATION_ARGS) const {
  GGS_jsonValue_2E_jsonArray_3F_ result ;
  if (mEnum == Enumeration::enum_jsonArray) {
    const auto ptr = (const GGS_jsonValue_2E_jsonArray *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_jsonValue_2E_jsonArray (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonValue::getAssociatedValuesFor_jsonArray (GGS_jsonArrayValue & out_arrayValue) const {
  const auto ptr = (const GGS_jsonValue_2E_jsonArray *) mAssociatedValues.associatedValuesPointer () ;
  out_arrayValue = ptr->mProperty_arrayValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue_2E_jsonInteger_3F_ GGS_jsonValue::getter_getJsonInteger (UNUSED_LOCATION_ARGS) const {
  GGS_jsonValue_2E_jsonInteger_3F_ result ;
  if (mEnum == Enumeration::enum_jsonInteger) {
    const auto ptr = (const GGS_jsonValue_2E_jsonInteger *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_jsonValue_2E_jsonInteger (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonValue::getAssociatedValuesFor_jsonInteger (GGS_bigint & out_integerValue) const {
  const auto ptr = (const GGS_jsonValue_2E_jsonInteger *) mAssociatedValues.associatedValuesPointer () ;
  out_integerValue = ptr->mProperty_integerValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue_2E_jsonString_3F_ GGS_jsonValue::getter_getJsonString (UNUSED_LOCATION_ARGS) const {
  GGS_jsonValue_2E_jsonString_3F_ result ;
  if (mEnum == Enumeration::enum_jsonString) {
    const auto ptr = (const GGS_jsonValue_2E_jsonString *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_jsonValue_2E_jsonString (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonValue::getAssociatedValuesFor_jsonString (GGS_string & out_stringValue) const {
  const auto ptr = (const GGS_jsonValue_2E_jsonString *) mAssociatedValues.associatedValuesPointer () ;
  out_stringValue = ptr->mProperty_stringValue ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_jsonValue [8] = {
  "(not built)",
  "jsonNull",
  "jsonTrue",
  "jsonFalse",
  "jsonObject",
  "jsonArray",
  "jsonInteger",
  "jsonString"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jsonValue::getter_isJsonNull (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_jsonNull == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jsonValue::getter_isJsonTrue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_jsonTrue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jsonValue::getter_isJsonFalse (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_jsonFalse == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jsonValue::getter_isJsonObject (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_jsonObject == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jsonValue::getter_isJsonArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_jsonArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jsonValue::getter_isJsonInteger (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_jsonInteger == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jsonValue::getter_isJsonString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_jsonString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonValue::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @jsonValue: ") ;
  ioString.appendCString (gEnumNameArrayFor_jsonValue [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @jsonValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue ("jsonValue",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_jsonValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_jsonValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_jsonValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_jsonValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue GGS_jsonValue::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_jsonValue result ;
  const GGS_jsonValue * p = (const GGS_jsonValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_jsonValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("jsonValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@jsonObjectValue' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_jsonObjectValue : public cCollectionElement {
  public: GGS_jsonObjectValue_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_jsonObjectValue (const GGS_string & in_mKey,
                                              const GGS_jsonValue & in_mValue
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_jsonObjectValue (const GGS_jsonObjectValue_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_jsonObjectValue::cCollectionElement_jsonObjectValue (const GGS_string & in_mKey,
                                                                        const GGS_jsonValue & in_mValue
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_jsonObjectValue::cCollectionElement_jsonObjectValue (const GGS_jsonObjectValue_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_jsonObjectValue::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_jsonObjectValue::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_jsonObjectValue (mObject.mProperty_mKey, mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @jsonObjectValue
//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue::GGS_jsonObjectValue (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue::GGS_jsonObjectValue (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_jsonObjectValue * p = (cCollectionElement_jsonObjectValue *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_jsonObjectValue) ;
    const GGS_jsonObjectValue_2E_element element (p->mObject.mProperty_mKey, p->mObject.mProperty_mValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_string & in_mKey,
                                                     const GGS_jsonValue & in_mValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_jsonObjectValue * p = nullptr ;
  macroMyNew (p, cCollectionElement_jsonObjectValue (in_mKey, in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_jsonObjectValue::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_jsonObjectValue::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mKey:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mKey.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue GGS_jsonObjectValue::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_jsonObjectValue result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::plusPlusAssignOperation (const GGS_jsonObjectValue_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue GGS_jsonObjectValue::class_func_listWithValue (const GGS_string & inOperand0,
                                                                   const GGS_jsonValue & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_jsonObjectValue_2E_element element (inOperand0, inOperand1) ;
  GGS_jsonObjectValue result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::addAssignOperation (const GGS_string & inOperand0,
                                              const GGS_jsonValue & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS_jsonObjectValue_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::setter_append (const GGS_string inOperand0,
                                         const GGS_jsonValue inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_jsonObjectValue_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::setter_insertAtIndex (const GGS_string inOperand0,
                                                const GGS_jsonValue inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_jsonObjectValue_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::setter_removeAtIndex (GGS_string & outOperand0,
                                                GGS_jsonValue & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mKey ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValue ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::setter_popFirst (GGS_string & outOperand0,
                                           GGS_jsonValue & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::setter_popLast (GGS_string & outOperand0,
                                          GGS_jsonValue & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::method_first (GGS_string & outOperand0,
                                        GGS_jsonValue & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::method_last (GGS_string & outOperand0,
                                       GGS_jsonValue & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue GGS_jsonObjectValue::add_operation (const GGS_jsonObjectValue & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_jsonObjectValue result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue GGS_jsonObjectValue::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_jsonObjectValue result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue GGS_jsonObjectValue::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_jsonObjectValue result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue GGS_jsonObjectValue::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_jsonObjectValue result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue GGS_jsonObjectValue::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_jsonObjectValue result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::plusAssignOperation (const GGS_jsonObjectValue inList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::setter_setMKeyAtIndex (GGS_string inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mKey = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_jsonObjectValue::getter_mKeyAtIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mKey ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_jsonObjectValue::setter_setMValueAtIndex (GGS_jsonValue inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_jsonValue GGS_jsonObjectValue::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_jsonValue result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @jsonObjectValue
//--------------------------------------------------------------------------------------------------

DownEnumerator_jsonObjectValue::DownEnumerator_jsonObjectValue (const GGS_jsonObjectValue & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue_2E_element DownEnumerator_jsonObjectValue::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_jsonObjectValue::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue DownEnumerator_jsonObjectValue::current_mValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @jsonObjectValue
//--------------------------------------------------------------------------------------------------

UpEnumerator_jsonObjectValue::UpEnumerator_jsonObjectValue (const GGS_jsonObjectValue & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue_2E_element UpEnumerator_jsonObjectValue::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_jsonObjectValue::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue UpEnumerator_jsonObjectValue::current_mValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @jsonObjectValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonObjectValue ("jsonObjectValue",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_jsonObjectValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_jsonObjectValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_jsonObjectValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_jsonObjectValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonObjectValue GGS_jsonObjectValue::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_jsonObjectValue result ;
  const GGS_jsonObjectValue * p = (const GGS_jsonObjectValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_jsonObjectValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("jsonObjectValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@jsonArrayValue' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_jsonArrayValue : public cCollectionElement {
  public: GGS_jsonArrayValue_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_jsonArrayValue (const GGS_jsonValue & in_mValue
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_jsonArrayValue (const GGS_jsonArrayValue_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_jsonArrayValue::cCollectionElement_jsonArrayValue (const GGS_jsonValue & in_mValue
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_jsonArrayValue::cCollectionElement_jsonArrayValue (const GGS_jsonArrayValue_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_jsonArrayValue::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_jsonArrayValue::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_jsonArrayValue (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @jsonArrayValue
//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue::GGS_jsonArrayValue (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue::GGS_jsonArrayValue (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_jsonArrayValue * p = (cCollectionElement_jsonArrayValue *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_jsonArrayValue) ;
    const GGS_jsonArrayValue_2E_element element (p->mObject.mProperty_mValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GGS_jsonValue & in_mValue
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_jsonArrayValue * p = nullptr ;
  macroMyNew (p, cCollectionElement_jsonArrayValue (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_jsonArrayValue::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_jsonArrayValue::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue GGS_jsonArrayValue::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_jsonArrayValue result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::plusPlusAssignOperation (const GGS_jsonArrayValue_2E_element & inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue GGS_jsonArrayValue::class_func_listWithValue (const GGS_jsonValue & inOperand0
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_jsonArrayValue_2E_element element (inOperand0) ;
  GGS_jsonArrayValue result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::addAssignOperation (const GGS_jsonValue & inOperand0
                                             COMMA_LOCATION_ARGS) {
  const GGS_jsonArrayValue_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::setter_append (const GGS_jsonValue inOperand0,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  const GGS_jsonArrayValue_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::setter_insertAtIndex (const GGS_jsonValue inOperand0,
                                               const GGS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_jsonArrayValue_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::setter_removeAtIndex (GGS_jsonValue & outOperand0,
                                               const GGS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mValue ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::setter_popFirst (GGS_jsonValue & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::setter_popLast (GGS_jsonValue & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::method_first (GGS_jsonValue & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::method_last (GGS_jsonValue & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue GGS_jsonArrayValue::add_operation (const GGS_jsonArrayValue & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_jsonArrayValue result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue GGS_jsonArrayValue::subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_jsonArrayValue result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue GGS_jsonArrayValue::getter_subListWithRange (const GGS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_jsonArrayValue result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue GGS_jsonArrayValue::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_jsonArrayValue result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue GGS_jsonArrayValue::getter_subListToIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_jsonArrayValue result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::plusAssignOperation (const GGS_jsonArrayValue inList,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_jsonArrayValue::setter_setMValueAtIndex (GGS_jsonValue inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_jsonValue GGS_jsonArrayValue::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_jsonValue result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @jsonArrayValue
//--------------------------------------------------------------------------------------------------

DownEnumerator_jsonArrayValue::DownEnumerator_jsonArrayValue (const GGS_jsonArrayValue & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue_2E_element DownEnumerator_jsonArrayValue::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue DownEnumerator_jsonArrayValue::current_mValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @jsonArrayValue
//--------------------------------------------------------------------------------------------------

UpEnumerator_jsonArrayValue::UpEnumerator_jsonArrayValue (const GGS_jsonArrayValue & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue_2E_element UpEnumerator_jsonArrayValue::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonValue UpEnumerator_jsonArrayValue::current_mValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @jsonArrayValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonArrayValue ("jsonArrayValue",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_jsonArrayValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_jsonArrayValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_jsonArrayValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_jsonArrayValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jsonArrayValue GGS_jsonArrayValue::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_jsonArrayValue result ;
  const GGS_jsonArrayValue * p = (const GGS_jsonArrayValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_jsonArrayValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("jsonArrayValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_JSON_5F_text_i0_ (GGS_jsonValue & outArgument_outValue,
                                                           Lexique_jsonScanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  nt_value_ (outArgument_outValue, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_JSON_5F_text_i0_parse (Lexique_jsonScanner * inCompiler) {
  nt_value_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_JSON_5F_text_i0_indexing (Lexique_jsonScanner * inCompiler) {
  nt_value_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_value_i1_ (GGS_jsonValue & outArgument_outValue,
                                                    Lexique_jsonScanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  switch (select_jsonSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_false COMMA_SOURCE_FILE ("json.galgas", 196)) ;
    outArgument_outValue = GGS_jsonValue::class_func_jsonFalse (SOURCE_FILE ("json.galgas", 197)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_null COMMA_SOURCE_FILE ("json.galgas", 199)) ;
    outArgument_outValue = GGS_jsonValue::class_func_jsonNull (SOURCE_FILE ("json.galgas", 200)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_true COMMA_SOURCE_FILE ("json.galgas", 202)) ;
    outArgument_outValue = GGS_jsonValue::class_func_jsonTrue (SOURCE_FILE ("json.galgas", 203)) ;
  } break ;
  case 4: {
    GGS_jsonObjectValue var_objectValue_7214 ;
    nt_object_ (var_objectValue_7214, inCompiler) ;
    outArgument_outValue = GGS_jsonValue::class_func_jsonObject (var_objectValue_7214  COMMA_SOURCE_FILE ("json.galgas", 206)) ;
  } break ;
  case 5: {
    GGS_jsonArrayValue var_arrayValue_7324 ;
    nt_array_ (var_arrayValue_7324, inCompiler) ;
    outArgument_outValue = GGS_jsonValue::class_func_jsonArray (var_arrayValue_7324  COMMA_SOURCE_FILE ("json.galgas", 209)) ;
  } break ;
  case 6: {
    GGS_lbigint var_integerValue_7416 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_integer COMMA_SOURCE_FILE ("json.galgas", 211)) ;
    outArgument_outValue = GGS_jsonValue::class_func_jsonInteger (var_integerValue_7416.readProperty_bigint ()  COMMA_SOURCE_FILE ("json.galgas", 212)) ;
  } break ;
  case 7: {
    GGS_lstring var_stringValue_7524 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("json.galgas", 214)) ;
    outArgument_outValue = GGS_jsonValue::class_func_jsonString (var_stringValue_7524.readProperty_string ()  COMMA_SOURCE_FILE ("json.galgas", 215)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_value_i1_parse (Lexique_jsonScanner * inCompiler) {
  switch (select_jsonSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_false COMMA_SOURCE_FILE ("json.galgas", 196)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_null COMMA_SOURCE_FILE ("json.galgas", 199)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_true COMMA_SOURCE_FILE ("json.galgas", 202)) ;
  } break ;
  case 4: {
    nt_object_parse (inCompiler) ;
  } break ;
  case 5: {
    nt_array_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_integer COMMA_SOURCE_FILE ("json.galgas", 211)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("json.galgas", 214)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_value_i1_indexing (Lexique_jsonScanner * inCompiler) {
  switch (select_jsonSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_false COMMA_SOURCE_FILE ("json.galgas", 196)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_null COMMA_SOURCE_FILE ("json.galgas", 199)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_true COMMA_SOURCE_FILE ("json.galgas", 202)) ;
  } break ;
  case 4: {
    nt_object_indexing (inCompiler) ;
  } break ;
  case 5: {
    nt_array_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken_integer COMMA_SOURCE_FILE ("json.galgas", 211)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("json.galgas", 214)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_object_i2_ (GGS_jsonObjectValue & outArgument_outObjectValue,
                                                     Lexique_jsonScanner * inCompiler) {
  outArgument_outObjectValue.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__7B_ COMMA_SOURCE_FILE ("json.galgas", 222)) ;
  outArgument_outObjectValue = GGS_jsonObjectValue::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_keyValue_7831 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("json.galgas", 225)) ;
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__3A_ COMMA_SOURCE_FILE ("json.galgas", 226)) ;
    GGS_jsonValue var_value_7869 ;
    nt_value_ (var_value_7869, inCompiler) ;
    outArgument_outObjectValue.addAssignOperation (var_keyValue_7831.readProperty_string (), var_value_7869  COMMA_SOURCE_FILE ("json.galgas", 228)) ;
    if (select_jsonSyntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__2C_ COMMA_SOURCE_FILE ("json.galgas", 230)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__7D_ COMMA_SOURCE_FILE ("json.galgas", 232)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_object_i2_parse (Lexique_jsonScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__7B_ COMMA_SOURCE_FILE ("json.galgas", 222)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("json.galgas", 225)) ;
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__3A_ COMMA_SOURCE_FILE ("json.galgas", 226)) ;
    nt_value_parse (inCompiler) ;
    if (select_jsonSyntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__2C_ COMMA_SOURCE_FILE ("json.galgas", 230)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__7D_ COMMA_SOURCE_FILE ("json.galgas", 232)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_object_i2_indexing (Lexique_jsonScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__7B_ COMMA_SOURCE_FILE ("json.galgas", 222)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("json.galgas", 225)) ;
    inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__3A_ COMMA_SOURCE_FILE ("json.galgas", 226)) ;
    nt_value_indexing (inCompiler) ;
    if (select_jsonSyntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__2C_ COMMA_SOURCE_FILE ("json.galgas", 230)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__7D_ COMMA_SOURCE_FILE ("json.galgas", 232)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_array_i3_ (GGS_jsonArrayValue & outArgument_outArrayValue,
                                                    Lexique_jsonScanner * inCompiler) {
  outArgument_outArrayValue.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__5B_ COMMA_SOURCE_FILE ("json.galgas", 238)) ;
  outArgument_outArrayValue = GGS_jsonArrayValue::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_jsonValue var_value_8169 ;
    nt_value_ (var_value_8169, inCompiler) ;
    outArgument_outArrayValue.addAssignOperation (var_value_8169  COMMA_SOURCE_FILE ("json.galgas", 242)) ;
    if (select_jsonSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__2C_ COMMA_SOURCE_FILE ("json.galgas", 244)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__5D_ COMMA_SOURCE_FILE ("json.galgas", 246)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_array_i3_parse (Lexique_jsonScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__5B_ COMMA_SOURCE_FILE ("json.galgas", 238)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_value_parse (inCompiler) ;
    if (select_jsonSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__2C_ COMMA_SOURCE_FILE ("json.galgas", 244)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__5D_ COMMA_SOURCE_FILE ("json.galgas", 246)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_jsonSyntax::rule_jsonSyntax_array_i3_indexing (Lexique_jsonScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__5B_ COMMA_SOURCE_FILE ("json.galgas", 238)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_value_indexing (inCompiler) ;
    if (select_jsonSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__2C_ COMMA_SOURCE_FILE ("json.galgas", 244)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_jsonScanner::kToken__5D_ COMMA_SOURCE_FILE ("json.galgas", 246)) ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForGeneration::objectCompare (const GGS_templateInstructionForGeneration & inOperand) const {
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

GGS_templateInstructionForGeneration::GGS_templateInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_templateInstructionForGeneration::
templateInstructionForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration::GGS_templateInstructionForGeneration (const cPtr_templateInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForGeneration::cPtr_templateInstructionForGeneration (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ("templateInstructionForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForGeneration result ;
  const GGS_templateInstructionForGeneration * p = (const GGS_templateInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForGeneration_2E_weak::objectCompare (const GGS_templateInstructionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateInstructionForGeneration_2E_weak::GGS_templateInstructionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak & GGS_templateInstructionForGeneration_2E_weak::operator = (const GGS_templateInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak::GGS_templateInstructionForGeneration_2E_weak (const GGS_templateInstructionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak GGS_templateInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionForGeneration * p = (cPtr_templateInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionForGeneration_2E_weak::bang_templateInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForGeneration) ;
      result = GGS_templateInstructionForGeneration ((cPtr_templateInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ("templateInstructionForGeneration.weak",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak GGS_templateInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForGeneration_2E_weak result ;
  const GGS_templateInstructionForGeneration_2E_weak * p = (const GGS_templateInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

